#include <PersonalAssistantAPP.h>
#include "PersonalAssistant.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(CPersonalAssistantAPP);

bool CPersonalAssistantAPP::OnInit()
{
	CPersonalAssistant *frame = new CPersonalAssistant(NULL, wxID_ANY, "Personal Assistant");
	frame->Show(true);

	wxBitmap bitmap(wxT("PA.bmp"), wxBITMAP_TYPE_BMP);
	wxIcon m_icon;
	m_icon.CopyFromBitmap(bitmap);
	frame->SetIcon(m_icon);
	return true;
}