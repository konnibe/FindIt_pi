///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/dialog.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/statline.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FindItDialog
///////////////////////////////////////////////////////////////////////////////
class FindItDialog : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxButton* m_buttonaddLineMaterial;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxPanel* m_panel2;
		wxButton* m_buttonaddLineFood;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl11;
		wxPanel* m_panel3;
		wxButton* m_buttonaddLineLocations;
		wxPanel* m_panel4;
		wxButton* m_buttonaddLineUnits;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnInit( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnButtonClickMaterialAdd( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextMaterial( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickBuyMaterial( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCharMaterial( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGridCellChangeMaterial( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridCellLeftClickMaterial( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridLabelLClickMaterial( wxGridEvent& event ) { event.Skip(); }
		virtual void OnButtonClickAddLineFood( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextFood( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickBuyFood( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCharFood( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGridCellChangeFood( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridCellLeftClickFood( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridLabelLClickFood( wxGridEvent& event ) { event.Skip(); }
		virtual void onButtonClickAddLineLocations( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCharLocations( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGridCellChangeLocations( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridCellLeftClickLocations( wxGridEvent& event ) { event.Skip(); }
		virtual void onEditorShownLocations( wxGridEvent& event ) { event.Skip(); }
		virtual void OnButtonClickUnitsAddLine( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCharUnits( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGridCellChangeUnits( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGridCellLeftClickUnits( wxGridEvent& event ) { event.Skip(); }
		virtual void onEditorShownUnits( wxGridEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxButton* m_buttonBuyItMaterial;
		wxGrid* m_gridMaterial;
		wxButton* m_buttonBuyItFood;
		wxGrid* m_gridFood;
		wxGrid* m_gridLocations;
		wxGrid* m_gridUnits;
		
		FindItDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("FindIt"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 943,518 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~FindItDialog();
	
};

class findit_pi;
///////////////////////////////////////////////////////////////////////////////
/// Class OptionsDialog
///////////////////////////////////////////////////////////////////////////////
class OptionsDialog : public wxDialog 
{
	private:
	    findit_pi* parent; 
	protected:
		wxStaticLine* m_staticline1;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnInitDialog( wxInitDialogEvent& event ) ;
		
	
	public:
		wxCheckBox* m_checkBoxFindItIcon;
		wxRadioBox* m_radioBox1;
		wxRadioBox* m_radioBox11;
		wxRadioBox* m_radioBox5;
		
		OptionsDialog( wxWindow* parent, findit_pi* p, wxWindowID id = wxID_ANY, const wxString& title = _("FindIt Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 257,257 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~OptionsDialog();
	
};

#endif //__GUI_H__
