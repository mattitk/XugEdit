#ifndef __XUGWINDOW_H__
#define __XUGWINDOW_H__

#include "../global/XugEditManager.h"
#include "XugTab.h"

class XugWindow
{
	private:
		// std::vector<XugTab *> tabs;

	public:
		XugWindow();
		~XugWindow();
		unsigned int GetTabCount();
};

#endif
