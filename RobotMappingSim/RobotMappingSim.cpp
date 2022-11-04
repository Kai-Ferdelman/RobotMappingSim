#include "RobotMappingSim.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(RobotMappingSim);

bool RobotMappingSim::OnInit() {
	MainFrame* mainFrame = new MainFrame("Robot mapping simulation");
	mainFrame->Show();
	mainFrame->SetClientSize(600, 400);
	mainFrame->Center();
	return true;
}