#pragma once
#include <wx/wx.h>
#include <wx/listctrl.h>

#include <vector>
#include <string>

class CCodeNoteMainWindow:public wxMDIChildFrame
{
public:
	CCodeNoteMainWindow(wxMDIParentFrame *parent);
	~CCodeNoteMainWindow();
protected:
	wxListCtrl* m_listCtrl1;
private:
	void setLCTitle(std::vector<std::string> title);
};

