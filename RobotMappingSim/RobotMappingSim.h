#pragma once
#include <wx/wx.h>
#include "DrawPane.h"

class RobotMappingSim : public wxApp {
public:
	bool OnInit();

	wxFrame* mainFrame;
	DrawPane* drawPane;
};