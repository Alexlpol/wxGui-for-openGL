#include "gui.h"

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar2 = new wxMenuBar( 0 );
	m_menu6 = new wxMenu();
	m_menubar2->Append( m_menu6, wxT("Home") ); 
	
	m_menu7 = new wxMenu();
	m_menubar2->Append( m_menu7, wxT("Edit") ); 
	
	m_menu8 = new wxMenu();
	m_menubar2->Append( m_menu8, wxT("View") ); 
	
	m_menu9 = new wxMenu();
	m_menubar2->Append( m_menu9, wxT("Options") ); 
	
	this->SetMenuBar( m_menubar2 );
	
	m_toolBar4 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	m_tool6 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_CUT, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool9 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_COPY, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool10 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_DELETE, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar4->AddSeparator(); 
	
	m_tool11 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxT("gtk-execute"), wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool12 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar4->AddSeparator(); 
	
	m_tool13 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_UNDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool14 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_REDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool15 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_GO_HOME, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool16 = m_toolBar4->AddTool( wxID_ANY, wxT("tool"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar4->Realize(); 
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_genericDirCtrl1 = new wxGenericDirCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,-1 ), wxDIRCTRL_3D_INTERNAL|wxSUNKEN_BORDER, wxEmptyString, 0 );
	
	m_genericDirCtrl1->ShowHidden( false );
	bSizer4->Add( m_genericDirCtrl1, 0, wxALL|wxEXPAND, 5 );
	
	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("custommodel.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer4->Add( m_bitmap2, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer411;
	bSizer411 = new wxBoxSizer( wxVERTICAL );
	
	bSizer411->SetMinSize( wxSize( 300,-1 ) ); 
	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Load model.."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer52->Add( m_staticText12, 1, wxALL, 5 );
	
	m_filePicker11 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	bSizer52->Add( m_filePicker11, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer52, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer515;
	bSizer515 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText115 = new wxStaticText( this, wxID_ANY, wxT("Load texture 2D.."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	bSizer515->Add( m_staticText115, 1, wxALL, 5 );
	
	m_filePicker21 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	bSizer515->Add( m_filePicker21, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer515, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5111;
	bSizer5111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1111 = new wxStaticText( this, wxID_ANY, wxT("Sun light color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111->Wrap( -1 );
	bSizer5111->Add( m_staticText1111, 1, wxALL, 5 );
	
	m_colourPicker21 = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer5111->Add( m_colourPicker21, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer5111, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5121;
	bSizer5121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1121 = new wxStaticText( this, wxID_ANY, wxT(" Point light color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1121->Wrap( -1 );
	bSizer5121->Add( m_staticText1121, 1, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_colourPicker31 = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer5121->Add( m_colourPicker31, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer5121, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5131;
	bSizer5131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1131 = new wxStaticText( this, wxID_ANY, wxT("Camera speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1131->Wrap( -1 );
	bSizer5131->Add( m_staticText1131, 1, wxALL, 5 );
	
	m_spinBtn11 = new wxSpinButton( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5131->Add( m_spinBtn11, 0, wxALL, 5 );
	
	m_button351 = new wxButton( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5131->Add( m_button351, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer5131, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5141;
	bSizer5141 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1141 = new wxStaticText( this, wxID_ANY, wxT("Anti aliasing"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1141->Wrap( -1 );
	bSizer5141->Add( m_staticText1141, 1, wxALL, 5 );
	
	m_radioBtn31 = new wxRadioButton( this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5141->Add( m_radioBtn31, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer5141, 0, wxEXPAND, 5 );
	
	m_staticline11 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer411->Add( m_staticline11, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer2611;
	bSizer2611 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2211 = new wxStaticText( this, wxID_ANY, wxT("Preview script.."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2211->Wrap( -1 );
	bSizer2611->Add( m_staticText2211, 1, wxALL, 5 );
	
	m_filePicker711 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	bSizer2611->Add( m_filePicker711, 0, wxALL, 5 );
	
	
	bSizer411->Add( bSizer2611, 0, wxEXPAND, 5 );
	
	m_scintilla8 = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_scintilla8->SetUseTabs( true );
	m_scintilla8->SetTabWidth( 4 );
	m_scintilla8->SetIndent( 4 );
	m_scintilla8->SetTabIndents( true );
	m_scintilla8->SetBackSpaceUnIndents( true );
	m_scintilla8->SetViewEOL( false );
	m_scintilla8->SetViewWhiteSpace( false );
	m_scintilla8->SetMarginWidth( 2, 0 );
	m_scintilla8->SetIndentationGuides( true );
	m_scintilla8->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_scintilla8->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_scintilla8->SetMarginWidth( 1, 16);
	m_scintilla8->SetMarginSensitive( 1, true );
	m_scintilla8->SetProperty( wxT("fold"), wxT("1") );
	m_scintilla8->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_scintilla8->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_scintilla8->SetMarginWidth( 0, m_scintilla8->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_scintilla8->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_scintilla8->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_scintilla8->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_scintilla8->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_scintilla8->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_scintilla8->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_scintilla8->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_scintilla8->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_scintilla8->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_scintilla8->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_scintilla8->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	bSizer411->Add( m_scintilla8, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizer4->Add( bSizer411, 0, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer3->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	m_menu13 = new wxMenu();
	this->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( MyFrame1::MyFrame1OnContextMenu ), NULL, this ); 
	
	
	this->Centre( wxBOTH );
}

MyFrame1::~MyFrame1()
{
	delete m_menu13; 
}
