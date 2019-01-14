#include "PersonalAssistant.h"

// wxWidgets "Hello world" Program  
// For compilers that support precompilation, includes "wx/wx.h".  
#include <wx/wxprec.h>  
#ifndef WX_PRECOMP  
#include <wx/wx.h>  
#endif  
class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};
class CPersonalAssistant : public wxFrame
{
public:
	CPersonalAssistant(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};
enum
{
	ID_Hello = 1
};
wxBEGIN_EVENT_TABLE(CPersonalAssistant, wxFrame)
EVT_MENU(ID_Hello, CPersonalAssistant::OnHello)
EVT_MENU(wxID_EXIT, CPersonalAssistant::OnExit)
EVT_MENU(wxID_ABOUT, CPersonalAssistant::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	//CPersonalAssistant *frame = new CPersonalAssistant("Hello World", wxPoint(50, 50), wxSize(450, 340));  
	CPersonalAssistant *frame = new CPersonalAssistant("Hello World", wxDefaultPosition, wxDefaultSize);
	frame->Show(true);
	return true;
}
CPersonalAssistant::CPersonalAssistant(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	wxMenu *menuFile = new wxMenu;
	menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
		"Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu *menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");
	SetMenuBar(menuBar);
	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
}
void CPersonalAssistant::OnExit(wxCommandEvent& event)
{
	Close(true);
}
void CPersonalAssistant::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is a wxWidgets' Hello world sample",
		"About Hello World", wxOK | wxICON_INFORMATION);
}
void CPersonalAssistant::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
}
