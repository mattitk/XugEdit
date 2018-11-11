// Look up README.txt & LICENSE.txt for information about the software

#ifndef __XUGTAB_H__
#define __XUGTAB_H__

#include "XugWindow.h"

class XugTab
{
	private:
		XugWindow *parent;
		//XugText *txt;
		//XugFile *file;
		//XugDate lastSave;

	public:
		XugTab(XugWindow *parent)
		{
			if(!parent) parent = new XugWindow();
			else this->parent = parent;
		}

		~XugTab()
		{
			if(parent->GetTabCount() == 1)
			{
				if(parent->ConfirmShutDown()) delete(parent);
			}

		}
};

#endif
