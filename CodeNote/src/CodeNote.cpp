#include"CodeNote.h"

#ifndef PA_INTEGATED
class MainAPP : public wxApp
{
public:
	virtual bool OnInit();
};
bool MainAPP::OnInit()
{
	CCodeNote *frame = new CCodeNote(NULL, wxID_ANY, "CodeNote",wxDefaultPosition,wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	this->SetTopWindow(frame);
	frame->Show(true);

	wxBitmap bitmap(wxT("CodeNote.bmp"), wxBITMAP_TYPE_BMP);
	wxIcon m_icon;
	m_icon.CopyFromBitmap(bitmap);
	frame->SetIcon(m_icon);
	return true;
}
wxIMPLEMENT_APP(MainAPP);
#endif

///////////////////////////////////////////////////////////////////
//	function of CodeNote
///////////////////////////////////////////////////////////////////

CCodeNote::CCodeNote(wxWindow* parent, wxWindowID id, const wxString& title,
	const wxPoint& pos, const wxSize& size, long style)
	: wxMDIParentFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	m_menubar1 = new wxMenuBar(0);
	m_menu1 = new wxMenu();
	m_menubar1->Append(m_menu1, wxT("File"));

	this->SetMenuBar(m_menubar1);

	m_toolBar1 = this->CreateToolBar(wxTB_HORIZONTAL, wxID_ANY);
	m_toolBar1->Realize();

	this->SetAutoLayout(true);

	CCodeNoteMainWindow *cnmainwindow = new CCodeNoteMainWindow(this);
	wxMDIChildFrame *cf1 = new wxMDIChildFrame(this, -1, "child");

	this->Layout();
}

CCodeNote::~CCodeNote()
{

}
