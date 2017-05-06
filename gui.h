#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/dirctrl.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/clrpicker.h>
#include <wx/spinbutt.h>
#include <wx/button.h>
#include <wx/radiobut.h>
#include <wx/statline.h>
#include <wx/stc/stc.h>
#include <wx/frame.h>

class MyFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar2;
		wxMenu* m_menu6;
		wxMenu* m_menu7;
		wxMenu* m_menu8;
		wxMenu* m_menu9;
		wxToolBar* m_toolBar4;
		wxToolBarToolBase* m_tool6; 
		wxToolBarToolBase* m_tool9; 
		wxToolBarToolBase* m_tool10; 
		wxToolBarToolBase* m_tool11; 
		wxToolBarToolBase* m_tool12; 
		wxToolBarToolBase* m_tool13; 
		wxToolBarToolBase* m_tool14; 
		wxToolBarToolBase* m_tool15; 
		wxToolBarToolBase* m_tool16; 
		wxGenericDirCtrl* m_genericDirCtrl1;
		wxStaticBitmap* m_bitmap2;
		wxStaticText* m_staticText12;
		wxFilePickerCtrl* m_filePicker11;
		wxStaticText* m_staticText115;
		wxFilePickerCtrl* m_filePicker21;
		wxStaticText* m_staticText1111;
		wxColourPickerCtrl* m_colourPicker21;
		wxStaticText* m_staticText1121;
		wxColourPickerCtrl* m_colourPicker31;
		wxStaticText* m_staticText1131;
		wxSpinButton* m_spinBtn11;
		wxButton* m_button351;
		wxStaticText* m_staticText1141;
		wxRadioButton* m_radioBtn31;
		wxStaticLine* m_staticline11;
		wxStaticText* m_staticText2211;
		wxFilePickerCtrl* m_filePicker711;
		wxStyledTextCtrl* m_scintilla8;
		wxStaticLine* m_staticline2;
		wxMenu* m_menu13;
	
	public:
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1023,674 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame1();
		
		void MyFrame1OnContextMenu( wxMouseEvent &event )
		{
			this->PopupMenu( m_menu13, event.GetPosition() );
		}
	
};

#endif //__GUI_H__