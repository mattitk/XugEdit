#include "XugWindow.h"

XugWindow::XugWindow()
{
	// create an empty tab
}

XugWindow::~XugWindow()
{
}

unsigned int XugWindow::GetTabCount()
{
//	if(!tabs)return 0;
//	return tabs.size();
	return 0;
}

bool XugWindow::ConfirmShutDown()
{
	return true;
}
