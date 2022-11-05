#include "RobotMappingSim.h"
#include "MainFrame.h"
#include "DrawPane.h"
#include "constants.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(RobotMappingSim);

bool RobotMappingSim::OnInit() {
	//mainFrame = new MainFrame("Robot mapping simulation");
	//mainFrame->Show();
	//mainFrame->SetClientSize(600, 400);
	//mainFrame->Center();

	//wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

	//drawPane = new DrawPane((wxFrame*) mainFrame);

	//return true;


	wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	mainFrame = new MainFrame("Robot Mapping simulation");
	mainFrame->SetClientSize(WIDTH, HEIGHT);
	mainFrame->Center();

	drawPane = new DrawPane((wxFrame*)mainFrame);
	sizer->Add(drawPane, 1, wxEXPAND);

	mainFrame->SetSizer(sizer);
	mainFrame->SetAutoLayout(true);

	mainFrame->Show();
	return true;
}

BEGIN_EVENT_TABLE(DrawPane, wxPanel)

EVT_PAINT(DrawPane::paintEvent)

END_EVENT_TABLE()
