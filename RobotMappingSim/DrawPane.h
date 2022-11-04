#pragma once
#include <wx/wx.h>
#include <wx/sizer.h>

class DrawPane : public wxPanel {
public:
	DrawPane(wxFrame* parent);

	void paintEvent(wxPaintEvent& evt);
	void paintNow();

	void render(wxDC& dc);

	DECLARE_EVENT_TABLE()
};