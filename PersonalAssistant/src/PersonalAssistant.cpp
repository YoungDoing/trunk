#include "PersonalAssistant.h"
#include <wx/listbase.h>
#include <wx/msgdlg.h> 

wxBEGIN_EVENT_TABLE(CPersonalAssistant, wxFrame)
EVT_LIST_ITEM_SELECTED(wxID_ANY, CPersonalAssistant::CallTool)
wxEND_EVENT_TABLE()

CPersonalAssistant::CPersonalAssistant(wxWindow* parent, wxWindowID id, const wxString& title,
	const wxPoint& pos, const wxSize& size, long style)
	: wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	
	AddLCTool();
	
	//////////////////////////////////////////////
	// Add Code Before This Line
	//////////////////////////////////////////////
	SetGUIToolBar();
	SetGUIMenuBar();
	SetGUILayout();
	
	m_status = new wxStatusBar(this);
	m_status->Layout();
	this->Centre(wxBOTH);
}

void CPersonalAssistant::AddLCTool()
{
	m_lcToolSelect = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(400, 400), wxLC_ICON | wxLC_ALIGN_TOP);
	wxImageList *imlist = new wxImageList(100, 100);
	
	//Add Personal Assistant Tool Icon
	wxBitmap tmpbmp;
	wxIcon tmpicon;
	
	tmpbmp.LoadFile("codenote.bmp", wxBITMAP_TYPE_BMP);
	tmpicon.CopyFromBitmap(tmpbmp);
	imlist->Add(tmpbmp);

	m_lcToolSelect->AssignImageList(imlist, wxIMAGE_LIST_NORMAL);

	wxListItem itemCol;
	itemCol.SetText(wxT("Tools"));
	//itemCol.SetImage(0);
	m_lcToolSelect->InsertItem(0, wxT("CodeNote"),0);
	//itemCol.SetImage(0);
	m_lcToolSelect->InsertItem(1, wxT("Reminder"),0);
}

void CPersonalAssistant::CallTool(wxListEvent& event)
{
	wxString sstring="Personal Assistant";

	sstring.Printf("Selected Tool %d", event.GetIndex());

	wxMessageBox(sstring, "Personal Assistant");

	
}

void CPersonalAssistant::SetGUIMenuBar()
{
	m_menubar1 = new wxMenuBar(0);
	m_menuLogin = new wxMenu();
	m_menubar1->Append(m_menuLogin, wxT("Login"));

	this->SetMenuBar(m_menubar1);
}

void CPersonalAssistant::SetGUILayout()
{
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer(wxVERTICAL);
	bSizerTop->Add(m_toolbar1, 0, wxEXPAND, 5);
	//bSizerTop->Add(m_toolbar2, 0, wxEXPAND, 5);
	bSizerTop->Add(m_lcToolSelect, 0, wxEXPAND, 5);

	this->SetSizer(bSizerTop);
	this->Layout();
}

void CPersonalAssistant::SetGUIToolBar()
{
	m_toolbar1 = new wxToolBar(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL);
	//m_toolbar2 = new wxToolBar(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL);

	wxBitmap pa(15, 15);
	pa.LoadFile("pa.bmp", wxBITMAP_TYPE_BMP);
	pa.SetSize(wxSize(15, 15));
	m_tool1 = m_toolbar1->AddTool(wxID_ANY, wxT("tool"), pa, pa, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
	//m_tool1 = m_toolbar2->AddTool(wxID_ANY, wxT("tool"), pa, pa, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);

	m_toolbar1->Realize();
	//m_toolbar2->Realize();
}

CPersonalAssistant::~CPersonalAssistant()
{
}