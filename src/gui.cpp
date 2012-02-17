///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

FindItDialog::FindItDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonaddLineMaterial = new wxButton( m_panel1, wxID_ANY, _("Add Line"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonaddLineMaterial->SetToolTip( _("Append a row\nDelete a row = Key <Del>") );
	
	bSizer7->Add( m_buttonaddLineMaterial, 0, wxALL, 5 );
	
	m_staticText1 = new wxStaticText( m_panel1, wxID_ANY, _("Enter Searchstring:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer7->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl1->SetToolTip( _("Separate more than one string with a blank") );
	m_textCtrl1->SetMinSize( wxSize( 300,-1 ) );
	
	bSizer7->Add( m_textCtrl1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_buttonBuyItMaterial = new wxButton( m_panel1, wxID_ANY, _("Buy it"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonBuyItMaterial->SetToolTip( _("If the logbook-plugin is installed send a list\nwith checked items to 'Logbook/Maintenace/Buy Parts'") );
	
	bSizer7->Add( m_buttonBuyItMaterial, 0, wxALL, 5 );
	
	bSizer2->Add( bSizer7, 0, wxEXPAND, 5 );
	
	m_gridMaterial = new wxGrid( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridMaterial->CreateGrid( 0, 13 );
	m_gridMaterial->EnableEditing( true );
	m_gridMaterial->EnableGridLines( true );
	m_gridMaterial->EnableDragGridSize( false );
	m_gridMaterial->SetMargins( 0, 0 );
	
	// Columns
	m_gridMaterial->SetColSize( 0, 36 );
	m_gridMaterial->SetColSize( 1, 48 );
	m_gridMaterial->SetColSize( 2, 48 );
	m_gridMaterial->SetColSize( 3, 53 );
	m_gridMaterial->SetColSize( 4, 62 );
	m_gridMaterial->SetColSize( 5, 189 );
	m_gridMaterial->SetColSize( 6, 70 );
	m_gridMaterial->SetColSize( 7, 70 );
	m_gridMaterial->SetColSize( 8, 65 );
	m_gridMaterial->SetColSize( 9, 67 );
	m_gridMaterial->SetColSize( 10, 60 );
	m_gridMaterial->SetColSize( 11, 68 );
	m_gridMaterial->EnableDragColMove( false );
	m_gridMaterial->EnableDragColSize( true );
	m_gridMaterial->SetColLabelSize( 30 );
	m_gridMaterial->SetColLabelValue( 0, _("Buy") );
	m_gridMaterial->SetColLabelValue( 1, _("Priority") );
	m_gridMaterial->SetColLabelValue( 2, _("Quota") );
	m_gridMaterial->SetColLabelValue( 3, _("Actuell") );
	m_gridMaterial->SetColLabelValue( 4, _("Balance") );
	m_gridMaterial->SetColLabelValue( 5, _("Unit") );
	m_gridMaterial->SetColLabelValue( 6, _("Text") );
	m_gridMaterial->SetColLabelValue( 7, _("Location") );
	m_gridMaterial->SetColLabelValue( 8, _("Location") );
	m_gridMaterial->SetColLabelValue( 9, _("Location") );
	m_gridMaterial->SetColLabelValue( 10, _("Location") );
	m_gridMaterial->SetColLabelValue( 11, _("Location") );
	m_gridMaterial->SetColLabelValue( 12, _("Location") );
	m_gridMaterial->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridMaterial->AutoSizeRows();
	m_gridMaterial->EnableDragRowSize( true );
	m_gridMaterial->SetRowLabelSize( 30 );
	m_gridMaterial->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridMaterial->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_CENTRE );
	bSizer2->Add( m_gridMaterial, 1, wxALL|wxEXPAND, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _("Material"), false );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonaddLineFood = new wxButton( m_panel2, wxID_ANY, _("Add Line"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonaddLineFood->SetToolTip( _("Append a row\nDelete a row = Key <Del>") );
	
	bSizer4->Add( m_buttonaddLineFood, 0, wxALL, 5 );
	
	m_staticText2 = new wxStaticText( m_panel2, wxID_ANY, _("Enter Searchstring:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl11 = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl11->SetToolTip( _("Separate more than one string with a blank") );
	m_textCtrl11->SetMinSize( wxSize( 300,-1 ) );
	
	bSizer4->Add( m_textCtrl11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_buttonBuyItFood = new wxButton( m_panel2, wxID_ANY, _("Buy it"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonBuyItFood->SetToolTip( _("If the logbook-plugin is installed send a list\nwith checked items to 'Logbook/Maintenace/Buy Parts'") );
	
	bSizer4->Add( m_buttonBuyItFood, 0, wxALL, 5 );
	
	bSizer3->Add( bSizer4, 0, wxEXPAND, 5 );
	
	m_gridFood = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridFood->CreateGrid( 0, 13 );
	m_gridFood->EnableEditing( true );
	m_gridFood->EnableGridLines( true );
	m_gridFood->EnableDragGridSize( false );
	m_gridFood->SetMargins( 0, 0 );
	
	// Columns
	m_gridFood->SetColSize( 0, 34 );
	m_gridFood->SetColSize( 1, 50 );
	m_gridFood->SetColSize( 2, 45 );
	m_gridFood->SetColSize( 3, 50 );
	m_gridFood->SetColSize( 4, 48 );
	m_gridFood->SetColSize( 5, 208 );
	m_gridFood->SetColSize( 6, 68 );
	m_gridFood->SetColSize( 7, 63 );
	m_gridFood->SetColSize( 8, 67 );
	m_gridFood->SetColSize( 9, 64 );
	m_gridFood->SetColSize( 10, 64 );
	m_gridFood->SetColSize( 11, 71 );
	m_gridFood->EnableDragColMove( false );
	m_gridFood->EnableDragColSize( true );
	m_gridFood->SetColLabelSize( 30 );
	m_gridFood->SetColLabelValue( 0, _("Buy") );
	m_gridFood->SetColLabelValue( 1, _("Priority") );
	m_gridFood->SetColLabelValue( 2, _("Quota") );
	m_gridFood->SetColLabelValue( 3, _("Actuell") );
	m_gridFood->SetColLabelValue( 4, _("Balance") );
	m_gridFood->SetColLabelValue( 5, _("Unit") );
	m_gridFood->SetColLabelValue( 6, _("Text") );
	m_gridFood->SetColLabelValue( 7, _("Location") );
	m_gridFood->SetColLabelValue( 8, _("Location") );
	m_gridFood->SetColLabelValue( 9, _("Location") );
	m_gridFood->SetColLabelValue( 10, _("Location") );
	m_gridFood->SetColLabelValue( 11, _("Location") );
	m_gridFood->SetColLabelValue( 12, _("Location") );
	m_gridFood->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridFood->EnableDragRowSize( true );
	m_gridFood->SetRowLabelSize( 30 );
	m_gridFood->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridFood->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer3->Add( m_gridFood, 1, wxALL|wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer3 );
	m_panel2->Layout();
	bSizer3->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, _("Provisions"), true );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_buttonaddLineLocations = new wxButton( m_panel3, wxID_ANY, _("Add Line"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_buttonaddLineLocations, 0, wxALL, 5 );
	
	bSizer5->Add( bSizer6, 0, wxEXPAND, 5 );
	
	m_gridLocations = new wxGrid( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridLocations->CreateGrid( 0, 6 );
	m_gridLocations->EnableEditing( true );
	m_gridLocations->EnableGridLines( true );
	m_gridLocations->EnableDragGridSize( false );
	m_gridLocations->SetMargins( 0, 0 );
	
	// Columns
	m_gridLocations->SetColSize( 0, 104 );
	m_gridLocations->SetColSize( 1, 104 );
	m_gridLocations->SetColSize( 2, 104 );
	m_gridLocations->SetColSize( 3, 104 );
	m_gridLocations->EnableDragColMove( false );
	m_gridLocations->EnableDragColSize( true );
	m_gridLocations->SetColLabelSize( 30 );
	m_gridLocations->SetColLabelValue( 0, _("Location") );
	m_gridLocations->SetColLabelValue( 1, _("Location") );
	m_gridLocations->SetColLabelValue( 2, _("Location") );
	m_gridLocations->SetColLabelValue( 3, _("Location") );
	m_gridLocations->SetColLabelValue( 4, _("Location") );
	m_gridLocations->SetColLabelValue( 5, _("Location") );
	m_gridLocations->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridLocations->EnableDragRowSize( true );
	m_gridLocations->SetRowLabelSize( 80 );
	m_gridLocations->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridLocations->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer5->Add( m_gridLocations, 1, wxALL|wxEXPAND, 5 );
	
	m_panel3->SetSizer( bSizer5 );
	m_panel3->Layout();
	bSizer5->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, _("Locations"), false );
	m_panel4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonaddLineUnits = new wxButton( m_panel4, wxID_ANY, _("Add Line"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_buttonaddLineUnits, 0, wxALL, 5 );
	
	bSizer21->Add( bSizer71, 0, wxEXPAND, 5 );
	
	m_gridUnits = new wxGrid( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridUnits->CreateGrid( 0, 1 );
	m_gridUnits->EnableEditing( true );
	m_gridUnits->EnableGridLines( true );
	m_gridUnits->EnableDragGridSize( false );
	m_gridUnits->SetMargins( 0, 0 );
	
	// Columns
	m_gridUnits->SetColSize( 0, 82 );
	m_gridUnits->EnableDragColMove( false );
	m_gridUnits->EnableDragColSize( true );
	m_gridUnits->SetColLabelSize( 30 );
	m_gridUnits->SetColLabelValue( 0, _("Unit") );
	m_gridUnits->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridUnits->AutoSizeRows();
	m_gridUnits->EnableDragRowSize( true );
	m_gridUnits->SetRowLabelSize( 1 );
	m_gridUnits->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridUnits->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_CENTRE );
	bSizer21->Add( m_gridUnits, 1, wxALL|wxEXPAND, 5 );
	
	m_panel4->SetSizer( bSizer21 );
	m_panel4->Layout();
	bSizer21->Fit( m_panel4 );
	m_notebook1->AddPage( m_panel4, _("Units"), false );
	
	mainSizer->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();
	mainSizer->Add( m_sdbSizer, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 5 );
	
	this->SetSizer( mainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FindItDialog::OnCloseDialog ) );
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( FindItDialog::OnInit ) );
	m_buttonaddLineMaterial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickMaterialAdd ), NULL, this );
	m_textCtrl1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FindItDialog::OnTextMaterial ), NULL, this );
	m_buttonBuyItMaterial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickBuyMaterial ), NULL, this );
	m_gridMaterial->Connect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharMaterial ), NULL, this );
	m_gridMaterial->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeMaterial ), NULL, this );
	m_gridMaterial->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickMaterial ), NULL, this );
	m_gridMaterial->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridLabelLClickMaterial ), NULL, this );
	m_buttonaddLineFood->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickAddLineFood ), NULL, this );
	m_textCtrl11->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FindItDialog::OnTextFood ), NULL, this );
	m_buttonBuyItFood->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickBuyFood ), NULL, this );
	m_gridFood->Connect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharFood ), NULL, this );
	m_gridFood->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeFood ), NULL, this );
	m_gridFood->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickFood ), NULL, this );
	m_gridFood->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridLabelLClickFood ), NULL, this );
	m_buttonaddLineLocations->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::onButtonClickAddLineLocations ), NULL, this );
	m_gridLocations->Connect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharLocations ), NULL, this );
	m_gridLocations->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeLocations ), NULL, this );
	m_gridLocations->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickLocations ), NULL, this );
	m_gridLocations->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( FindItDialog::onEditorShownLocations ), NULL, this );
	m_buttonaddLineUnits->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickUnitsAddLine ), NULL, this );
	m_gridUnits->Connect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharUnits ), NULL, this );
	m_gridUnits->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeUnits ), NULL, this );
	m_gridUnits->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickUnits ), NULL, this );
	m_gridUnits->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( FindItDialog::onEditorShownUnits ), NULL, this );
	m_sdbSizerCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnCancelClick ), NULL, this );
	m_sdbSizerOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnOKClick ), NULL, this );
}

FindItDialog::~FindItDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FindItDialog::OnCloseDialog ) );
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( FindItDialog::OnInit ) );
	m_buttonaddLineMaterial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickMaterialAdd ), NULL, this );
	m_textCtrl1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FindItDialog::OnTextMaterial ), NULL, this );
	m_buttonBuyItMaterial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickBuyMaterial ), NULL, this );
	m_gridMaterial->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharMaterial ), NULL, this );
	m_gridMaterial->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeMaterial ), NULL, this );
	m_gridMaterial->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickMaterial ), NULL, this );
	m_gridMaterial->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridLabelLClickMaterial ), NULL, this );
	m_buttonaddLineFood->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickAddLineFood ), NULL, this );
	m_textCtrl11->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FindItDialog::OnTextFood ), NULL, this );
	m_buttonBuyItFood->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickBuyFood ), NULL, this );
	m_gridFood->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharFood ), NULL, this );
	m_gridFood->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeFood ), NULL, this );
	m_gridFood->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickFood ), NULL, this );
	m_gridFood->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridLabelLClickFood ), NULL, this );
	m_buttonaddLineLocations->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::onButtonClickAddLineLocations ), NULL, this );
	m_gridLocations->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharLocations ), NULL, this );
	m_gridLocations->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeLocations ), NULL, this );
	m_gridLocations->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickLocations ), NULL, this );
	m_gridLocations->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( FindItDialog::onEditorShownLocations ), NULL, this );
	m_buttonaddLineUnits->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnButtonClickUnitsAddLine ), NULL, this );
	m_gridUnits->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FindItDialog::OnCharUnits ), NULL, this );
	m_gridUnits->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( FindItDialog::OnGridCellChangeUnits ), NULL, this );
	m_gridUnits->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FindItDialog::OnGridCellLeftClickUnits ), NULL, this );
	m_gridUnits->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( FindItDialog::onEditorShownUnits ), NULL, this );
	m_sdbSizerCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnCancelClick ), NULL, this );
	m_sdbSizerOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FindItDialog::OnOKClick ), NULL, this );
	
}

OptionsDialog::OptionsDialog( wxWindow* parent, findit_pi* p, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->parent = p;

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_checkBoxFindItIcon = new wxCheckBox( this, wxID_ANY, _("Show FindIt Icon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxFindItIcon->SetValue(true); 
	fgSizer1->Add( m_checkBoxFindItIcon, 0, wxALL, 5 );
	
	wxString m_radioBox1Choices[] = { _("blank"), _T("\"0\"") };
	int m_radioBox1NChoices = sizeof( m_radioBox1Choices ) / sizeof( wxString );
	m_radioBox1 = new wxRadioBox( this, wxID_ANY, _("If Value of Column \"Balance\" = 0, set Value to"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 1, wxRA_SPECIFY_ROWS|wxRA_USE_CHECKBOX );
	m_radioBox1->SetSelection( 0 );
	fgSizer1->Add( m_radioBox1, 0, wxALL, 5 );
	
	wxString m_radioBox11Choices[] = { _("blank"), _("\"No\"") };
	int m_radioBox11NChoices = sizeof( m_radioBox11Choices ) / sizeof( wxString );
	m_radioBox11 = new wxRadioBox( this, wxID_ANY, _("If Value of Column \"Buy\" = No, set Value to"), wxDefaultPosition, wxDefaultSize, m_radioBox11NChoices, m_radioBox11Choices, 1, wxRA_SPECIFY_ROWS|wxRA_USE_CHECKBOX );
	m_radioBox11->SetSelection( 0 );
	fgSizer1->Add( m_radioBox11, 0, wxALL, 5 );
	
	wxString m_radioBox5Choices[] = { _("Yes"), _("No") };
	int m_radioBox5NChoices = sizeof( m_radioBox5Choices ) / sizeof( wxString );
	m_radioBox5 = new wxRadioBox( this, wxID_ANY, _("Use last row values  as default for new row"), wxDefaultPosition, wxDefaultSize, m_radioBox5NChoices, m_radioBox5Choices, 1, wxRA_SPECIFY_ROWS|wxRA_USE_CHECKBOX );
	m_radioBox5->SetSelection( 0 );
	fgSizer1->Add( m_radioBox5, 0, wxALL, 5 );
	
	bSizer10->Add( fgSizer1, 0, 0, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer10->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( this, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer2->AddButton( m_sdbSizer2Cancel );
	m_sdbSizer2->Realize();
	bSizer10->Add( m_sdbSizer2, 0, wxALIGN_CENTER, 5 );
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( OptionsDialog::OnInitDialog ) );

	this->Fit();
}

OptionsDialog::~OptionsDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( OptionsDialog::OnInitDialog ) );
	
}
