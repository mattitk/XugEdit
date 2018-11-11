#include "xugwindow.h"

XugWindow::XugWindow()
{
	// create an empty tab
}

XugWindow::~XugWindow()
{
}

unsigned int XugWindow::GetTabCount()
{
	if(!tabs)return 0;
	return tabs.size();
}

bool XugWindow::ConfirmShutDown()
{
	return true;
}
