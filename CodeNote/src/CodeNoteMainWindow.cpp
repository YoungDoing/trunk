#include "CodeNoteMainWindow.h"

CCodeNoteMainWindow::CCodeNoteMainWindow(wxMDIParentFrame *parent)
	:wxMDIChildFrame(parent,wxID_ANY,"CodeNote Panel",wxDefaultPosition,wxDefaultSize,wxNO_BORDER)
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	m_listCtrl1 = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
	bSizer1->Add(m_listCtrl1, 1, wxEXPAND, 0);

	std::vector<std::string> tv;
	tv.push_back("Account");
	tv.push_back("Nick Name");
	tv.push_back("Code 1st");
	tv.push_back("Code 2nd");
	tv.push_back("Code 3rd");
	tv.push_back("Create Time");
	tv.push_back("Update Time");
	setLCTitle(tv);

	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);
}


CCodeNoteMainWindow::~CCodeNoteMainWindow()
{
}

void CCodeNoteMainWindow::setLCTitle(std::vector<std::string> title)
{
	int cnt = 0;
	std::vector<std::string>::iterator it;
	for (it = title.begin(); it != title.end(); it++)
	{
		std::string ts = it->data();
		m_listCtrl1->InsertColumn(cnt++, ts.c_str());
		m_listCtrl1->SetAutoLayout(true);
	}

}