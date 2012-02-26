/******************************************************************************
 * $Id: findit_pi.cpp,v 1.8 2010/06/21 01:54:37 bdbcat Exp $
 *
 * Project:  OpenCPN
 * Purpose:  DEMO Plugin
 * Author:   David Register
 *
 ***************************************************************************
 *   Copyright (C) 2010 by David S. Register   *
 *   bdbcat@yahoo.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */


#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <wx/aui/aui.h>
#include <wx/fileconf.h>

#include "findit_pi.h"
#include "icons.h"

#include "jsonval.h"
#include "jsonreader.h"

#include "gui.h"

// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new findit_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}





//---------------------------------------------------------------------------------------------------------
//
//    Demo PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------

int findit_pi::Init(void)
{
	  AddLocaleCatalog( _T("opencpn-findit_pi") );

      initialize_images();
      m_pFindItWindow = NULL;

	  isLogbookReady = FALSE;;
	  isLogbookWindowShown = FALSE;

      // Get a pointer to the opencpn display canvas, to use as a parent for windows created
      m_parent_window = GetOCPNCanvasWindow();

	  m_pconfig = GetOCPNConfigObject();
	  LoadConfig();

      // Create the Context Menu Items

      //    In order to avoid an ASSERT on msw debug builds,
      //    we need to create a dummy menu to act as a surrogate parent of the created MenuItems
      //    The Items will be re-parented when added to the real context meenu
      wxMenu dummy_menu;
	  m_bFINDITShowIcon = true;
	  if(m_bFINDITShowIcon)
            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("FindIt"), _T(""), NULL,
                   FINDIT_TOOL_POSITION, 0, this);

      return (
			WANTS_TOOLBAR_CALLBACK    |
		    WANTS_PREFERENCES         |
//			INSTALLS_CONTEXTMENU_ITEMS |
			WANTS_PLUGIN_MESSAGING 
            );
}

bool findit_pi::DeInit(void)
{
      if(m_pFindItWindow)
      {
            m_pFindItWindow->Destroy();
			m_pFindItWindow = NULL;
      }      
      return true;
}

void findit_pi::SetPluginMessage(wxString &message_id, wxString &message_body)
{
	if(message_id == _T("LOGBOOK_READY_FOR_REQUESTS"))
	{
		this->isLogbookReady = (message_body == _T("TRUE"))?true:false;

		if(m_pFindItWindow)
			m_pFindItWindow->setLogbookColumns(isLogbookReady);
	}
	else if(message_id == _T("LOGBOOK_WINDOW_SHOWN"))
	{
		isLogbookWindowShown = true;
	}
	else if(message_id == _T("LOGBOOK_WINDOW_HIDDEN"))
	{
		isLogbookWindowShown = false;
	}
}

int findit_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int findit_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int findit_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int findit_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxString findit_pi::GetCommonName()
{
      return _("FindIt");
}

wxString findit_pi::GetShortDescription()
{
      return _("Stowage PlugIn for OpenCPN");
}

wxString findit_pi::GetLongDescription()
{
      return _("Stowage PlugIn for OpenCPN\n\
");

}

void findit_pi::OnToolbarToolCallback(int id)
{
	SendPluginMessage(_T("LOGBOOK_IS_READY_FOR_REQUEST"), wxEmptyString);
	if(NULL == m_pFindItWindow)
		m_pFindItWindow = new MainDialog(this->m_parent_window,this);
	else
	{
		if(m_pFindItWindow->IsIconized()) 
			m_pFindItWindow->Iconize(false);
	}
	
	m_pFindItWindow->Show(); 
	m_pFindItWindow->SetFocus();
}

void findit_pi::SetDefaults(void)
{
      // If the config somehow says NOT to show the icon, override it so the user gets good feedback
      if(!m_bFINDITShowIcon)
      {
            m_bFINDITShowIcon = true;

            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("FindIt"), _T(""), NULL,
                   FINDIT_TOOL_POSITION, 0, this);
				   
      }
}

void findit_pi::UpdateAuiStatus(void)
{

}

void findit_pi::ShowPreferencesDialog( wxWindow* parent )
{
	int buyNotemp = buyNo;
	int  toBuyZerotemp = toBuyZero;
	int lastRowDefaulttemp = lastRowDefault;

	OptionsDialog* dlg = new OptionsDialog(parent,this);

//	dlg->m_checkBoxShowLogbook->SetValue(m_bLOGShowIcon);

     if(dlg->ShowModal() == wxID_OK)
      {
			buyNo = dlg->m_radioBox11->GetSelection();
			toBuyZero = dlg->m_radioBox1->GetSelection();
			lastRowDefault = dlg->m_radioBox5->GetSelection();

			if((buyNo != buyNotemp) || (toBuyZero != toBuyZerotemp) || (lastRowDefault != lastRowDefaulttemp))
				if(m_pFindItWindow)
					m_pFindItWindow->reloadData();

            //    Show Icon changed value?	
			if(m_bFINDITShowIcon != dlg->m_checkBoxFindItIcon->GetValue())
            {
                  m_bFINDITShowIcon = dlg->m_checkBoxFindItIcon->GetValue();

                  if(m_bFINDITShowIcon)
						 m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
								 _("FindIt"), _T(""), NULL, FINDIT_TOOL_POSITION, 0, this);
                  else
                        RemovePlugInTool(m_leftclick_tool_id);
            }
            SaveConfig();
      }
	 else
	 {
			if(buyNo != buyNotemp || toBuyZero != toBuyZerotemp || lastRowDefault != lastRowDefaulttemp)
				if(m_pFindItWindow)
					m_pFindItWindow->reloadData();
	 }
	 delete dlg;
}

void findit_pi::SaveConfig()
{
      if(m_pconfig)
      {
			m_pconfig->SetPath ( _T ( "/PlugIns/FindIt" ) );
			m_pconfig->Write ( _T( "ShowFindItIcon" ), m_bFINDITShowIcon );
			m_pconfig->Write ( _T( "buyNo" ), buyNo );
			m_pconfig->Write ( _T( "toBuyZero" ), toBuyZero );
			m_pconfig->Write ( _T( "lastRowDefault" ), lastRowDefault );
	  }
}

void findit_pi::LoadConfig()
{
      if(m_pconfig)
      {
            m_pconfig->SetPath ( _T( "/PlugIns/FindIt" ) );
            m_pconfig->Read ( _T( "ShowFindItIcon" ),  &m_bFINDITShowIcon, 1 );
			m_pconfig->Read ( _T( "buyNo" ),  &buyNo, 0 );
			m_pconfig->Read ( _T( "toBuyZero" ),  &toBuyZero, 0 );
			m_pconfig->Read ( _T( "lastRowDefault" ), &lastRowDefault, 0 );
	  }
}
//////////////////////OptionsDialog ////////////////////
////////////////////////////////////////////////////////
void OptionsDialog::OnInitDialog(wxInitDialogEvent& event)
{
	this->m_checkBoxFindItIcon->SetValue(parent->m_bFINDITShowIcon);
	this->m_radioBox1->SetSelection(parent->toBuyZero);
	this->m_radioBox11->SetSelection(parent->buyNo);
	this->m_radioBox5->SetSelection(parent->lastRowDefault);
}


