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

#include "findit_pi.h"
#include "icons.h"

#include "jsonval.h"
#include "jsonreader.h"

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

      // Create the Context Menu Items

      //    In order to avoid an ASSERT on msw debug builds,
      //    we need to create a dummy menu to act as a surrogate parent of the created MenuItems
      //    The Items will be re-parented when added to the real context meenu
      wxMenu dummy_menu;
	  m_bLOGShowIcon = true;
	  if(m_bLOGShowIcon)
            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("FindIt"), _T(""), NULL,
                   FINDIT_TOOL_POSITION, 0, this);

      return (
			WANTS_TOOLBAR_CALLBACK    |
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
		{
			m_pFindItWindow->m_buttonBuyItMaterial->Enable(this->isLogbookReady);
			m_pFindItWindow->m_buttonBuyItFood->Enable(this->isLogbookReady);
			m_pFindItWindow->Refresh();
		}
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
	if(NULL == m_pFindItWindow)
		m_pFindItWindow = new MainDialog(this->m_parent_window,this);
	else
	{
		if(m_pFindItWindow->IsIconized()) 
			m_pFindItWindow->Iconize(false);
	}
	
	m_pFindItWindow->m_buttonBuyItMaterial->Enable(this->isLogbookReady);
	m_pFindItWindow->m_buttonBuyItFood->Enable(this->isLogbookReady);
	m_pFindItWindow->Show(); 
	m_pFindItWindow->SetFocus();
}

void findit_pi::SetDefaults(void)
{
      // If the config somehow says NOT to show the icon, override it so the user gets good feedback
      if(!m_bLOGShowIcon)
      {
            m_bLOGShowIcon = true;

            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("FindIt"), _T(""), NULL,
                   FINDIT_TOOL_POSITION, 0, this);
				   
      }
}

void findit_pi::UpdateAuiStatus(void)
{

}

