#include<Windows.h>
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hprevinstance, LPSTR lpcmdline, INT ncmdshow)
{
	MessageBox(NULL, "hello word", "Messagebox",MB_ICONQUESTION|MB_ICONEXCLAMATION);
	return 0;
}