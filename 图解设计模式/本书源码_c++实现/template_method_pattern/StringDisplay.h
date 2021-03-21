#ifndef STRINGDISPLAY_H
#define STRINGDISPLAY_H

#include <iostream>
#include <string>
#include "AbstractDisplay.h"

using namespace std;

class StringDisplay : public AbstractDisplay{ // 注意继承时加上public，否则会默认Private，变得不可访问
public:
	StringDisplay(string str) : str(str)
	{
		width = str.length();
	}

	void open()
	{
		printLine(); //c++先处理声明
	}

	void print()
	{
		cout << "|" << str << "|" << endl;
	}

	void close()
	{
		printLine();
	}

private:
	string str;
	int width;
	void printLine()
	{
		cout << "+";
		for (int i = 0; i < width; i++) {
			cout << "-";
		}
		cout << '+' << endl;
	}

};


#endif // !

