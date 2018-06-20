#include "Graphics.h"


void Graphics::clearScreen()
{
	DWORD d;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(_console, &csbi);
	auto size = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputAttribute(_console, csbi.wAttributes, size, { 0, 0 }, &d);
	FillConsoleOutputCharacter(_console, L' ', size, { 0, 0 }, &d);
}

void Graphics::setCursorVisibility(bool isVisible)
{
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(_console, &cci);
	cci.bVisible = isVisible;
	SetConsoleCursorInfo(_console, &cci);
}

void Graphics::write(wstring s)
{
	WriteConsoleW(_console, s.c_str(), s.size(), nullptr, nullptr);
}
void Graphics::write(int x, int y, wstring s)
{
	moveTo(x, y);
	write(s);
}
void Graphics::write(string s)
{
	WriteConsoleA(_console, s.c_str(), s.size(), nullptr, nullptr);
}
void Graphics::write(int x, int y, string s)
{
	moveTo(x, y);
	write(s);
}

