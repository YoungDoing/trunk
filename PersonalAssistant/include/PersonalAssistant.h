#ifndef _PERSONALASSISTANT_HH_
#define _PERSONALASSISTANT_HH_

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/toolbar.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/listctrl.h>

class CPersonalAssistant : public wxFrame
{
public:
	CPersonalAssistant(wxWindow* parent, wxWindowID id = wxID_ANY,
		const wxString& title = wxEmptyString,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(879, 543),
		long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~CPersonalAssistant();

protected:
	//toolbar
	wxToolBar* m_toolbar1,*m_toolbar2;
	wxToolBarToolBase* m_tool1;

	//menubar
	wxMenuBar* m_menubar1;
	wxMenu* m_menuLogin;

	//statusbar
	wxStatusBar *m_status;

	//Tool Select ListCtrl
	wxListCtrl* m_lcToolSelect;
	
//private function
private:
	void SetGUIMenuBar();
	void SetGUIToolBar();
	void SetGUILayout();
	void AddLCTool();
	void CallTool(wxListEvent& event);
	wxDECLARE_EVENT_TABLE();
};

#endif _PERSONALASSISTANT_HH_