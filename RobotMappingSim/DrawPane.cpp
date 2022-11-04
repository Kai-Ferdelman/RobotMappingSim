#include "DrawPane.h"
#include <wx/wx.h>

DrawPane::DrawPane(wxFrame* parent) : wxPanel(parent) {

}

void DrawPane::paintEvent(wxPaintEvent& evt) {
	wxPaintDC dc(this);
	render(dc);
}

void DrawPane::paintNow() {
	wxClientDC dc(this);
	render(dc);
}

void DrawPane::render(wxDC& dc) {
    // draw some text
    dc.DrawText(wxT("Testing"), 40, 60);

    // draw a circle
    dc.SetBrush(*wxGREEN_BRUSH); // green filling
    dc.SetPen(wxPen(wxColor(255, 0, 0), 5)); // 5-pixels-thick red outline
    dc.DrawCircle(wxPoint(200, 100), 25 /* radius */);

    // draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen(wxPen(wxColor(255, 175, 175), 10)); // 10-pixels-thick pink outline
    dc.DrawRectangle(300, 100, 400, 200);

    // draw a line
    dc.SetPen(wxPen(wxColor(0, 0, 0), 3)); // black line, 3 pixels thick
    dc.DrawLine(300, 100, 700, 300); // draw line across the rectangle
}