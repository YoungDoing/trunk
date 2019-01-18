#include "PersonalAssistant.h"


CPersonalAssistant::CPersonalAssistant(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
{

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
}
void CPersonalAssistant::OnExit(wxCommandEvent& event)
{
	Close(true);
}
