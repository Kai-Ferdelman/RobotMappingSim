#include "DrawPane.h"
#include "constants.h"
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

	//Real view screen
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.SetPen(wxPen(wxColor(0, 0, 0), 1));
    dc.DrawRectangle(REAL_VIEW_X, REAL_VIEW_Y, REAL_VIEW_WIDTH, REAL_VIEW_HEIGHT);
    dc.DrawText("Real View", 10, 10);

    //Robots view screen
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.SetPen(wxPen(wxColor(0, 0, 0), 1));
    dc.DrawRectangle(ROBOT_VIEW_X, ROBOT_VIEW_Y, ROBOT_VIEW_WIDTH, ROBOT_VIEW_HEIGHT);
    dc.DrawText("Robots View", 10, HEIGHT / 2 + 10);

    //Controls screen
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.SetPen(wxPen(wxColor(0, 0, 0), 1));
    dc.DrawRectangle(CONTROLS_VIEW_X, CONTROLS_VIEW_Y, CONTROLS_WIDTH, CONTROLS_HEIGHT);
    dc.DrawText("Controls", WIDTH / 5 * 4 + 10, 10);
}