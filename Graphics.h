#pragma once

#include <string>
#include <Windows.h>

using namespace std;


class Graphics
{
public:
	void write(string s);
	void write(wstring s);
	void write(int x, int y, string s);
	void write(int x, int y, wstring s);
	void setCursorVisibility(bool isVisible);
	void moveTo(int x, int y);
	void clearScreen();
private:
	static Graphics *instance;
	void updateConsoleAttributes();


};

// bool isInside(int x, int y, int left, int top, int width, int height);
