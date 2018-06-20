#pragma once

using namespace std;

class Label
{

		int backColor = 0;
		int fontColor = 0;
		string text;
		int size;
	public:
		Label() {};
		~Label() {};
		
		string getValue() { return this->text; };
		void mousePressed(int x, int y, bool isLeft) {};
		void keyDown(int keyCode, char charater) {};
		void SetValue(string value);
		void putText();



}