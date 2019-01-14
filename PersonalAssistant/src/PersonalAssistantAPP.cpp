#include <PersonalAssistantAPP.h>
#include "PersonalAssistant.h"
#include <wx/wx.h>
wxBEGIN_EVENT_TABLE(CPersonalAssistant, wxFrame)
//EVT_MENU(wxID_ANY, CPersonalAssistant::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(CPersonalAssistantAPP);

bool CPersonalAssistantAPP::OnInit()
{
	CPersonalAssistant *frame = new CPersonalAssistant("Hello World", wxDefaultPosition, wxDefaultSize);
	frame->Show(true);
	return true;
}