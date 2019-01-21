#ifndef  __CODENOTE_HH_
#define  __CODENOTE_HH_

#include <wx/wx.h>


#include "CodeNoteMainWindow.h"

class CCodeNote :public wxMDIParentFrame
{
public:
	CCodeNote(wxWindow* parent, wxWindowID id = wxID_ANY,
		const wxString& title = wxEmptyString,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(879, 543),
		long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~CCodeNote();
protected:
	wxMenuBar* m_menubar1;
	wxMenu* m_menu1;
	wxToolBar* m_toolBar1;
};

#endif // ! __CODENOTE_HH_
