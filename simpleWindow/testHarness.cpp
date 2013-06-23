// testHarness.cpp
// Authored by Alex Shows
// Released under the MIT License (http://opensource.org/licenses/mit-license.php) 
// 
// A simple Win32 test harness to test the CGDIWindow child class

#include "testHarness.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	CGDIWindow simWin(500, 500);
	simWin.create_window();
	simWin.message_loop();

	return 0;
}