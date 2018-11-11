// Look up README.txt & LICENSE.txt for information about the software

#ifndef __XUGEDIT_H__
#define __XUGEDIT_H__

#include <vector>
#include "XugTab.h"
#include "XugWindow.h"

class XugEdit
{
	private:
		int quit;
		unsigned int rootWindowIndex;
		// std::vector<XugTab *> tabs;
		bool windowsLock;
		std::vector<XugWindow *> windows;

	public:

		XugWindow *CreateMainWindow();
		// LoadConfig();

		XugEdit()
		{
			quit = false;
			windowsLock = false;
			//CreateMainWindow();
		}
		~XugEdit()
		{
			if(windows.size() > 0)
			{
				for(unsigned int i = 0; i < windows.size(); i++)
				{
					delete(windows[i]);
				}
			}
		}
};

#endif

