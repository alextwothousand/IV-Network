//========== IV:Multiplayer - https://github.com/IVMultiplayer/IVMultiplayer ==========
//
// File: CMainMenu.h
// Project: Client.Core
// Author: ViruZz <blazee14@gmail.com>
// License: See LICENSE in root directory
//
//==============================================================================
	
#include "CCore.h"

class CMainMenu : public Gwen::Controls::PanelListPanel
{
	public:
			CMainMenu(Gwen::Controls::Canvas* pCanvas);
				
			void HideAbout(Gwen::Controls::Base* pControl);
			void ShowAbout(Gwen::Controls::Base* pControl);
			void Exit(Gwen::Controls::Base* pControl);
};			