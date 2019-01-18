#ifndef _PERSONALASSISTANT_HH_
#define _PERSONALASSISTANT_HH_
#include <wx/wx.h>
class CPersonalAssistant : public wxFrame
{
public:
	CPersonalAssistant(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	void OnExit(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};
#endif _PERSONALASSISTANT_HH_