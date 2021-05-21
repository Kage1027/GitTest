#include <DxLib.h>
//#include "_debug/_DebugConOut.h"
//#include "_debug/_DebugDispOut.h"

bool SysInit(void)
{
	SetWindowText("2016022_å∑ñ{ó¥êm");
	SetGraphMode(640, 480, 32);
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
	{
		return false;
	}
	//_dbgSetup(1024, 768, 255);

	return true;
}

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	if (SysInit() == false)
	{
		return -1;
	}


	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//_dbgStartDraw();

		//Drawèàóù-------------------------------------------------------------------
		ClsDrawScreen();



		//_dbgDraw();
		ScreenFlip();
	}

	return 0;
}