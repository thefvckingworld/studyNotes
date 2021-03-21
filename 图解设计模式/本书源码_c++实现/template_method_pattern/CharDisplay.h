#ifndef CHARDISPLAY_H
#define CHARDISPLAY_H

#include <iostream>
#include <string>
#include "AbstractDisplay.h"

using namespace std;

class CharDisplay : public AbstractDisplay{ // 注意继承时加上public，否则会默认Private，变得不可访问
public:
	CharDisplay(char ch) : ch(ch) {}
	void open()
	{
		cout << "<<";
	}

	void print()
	{
		cout << ch;
	}

	void close()
	{
		cout << ">>" << endl;
	}


private:
	char ch;
};

#endif // !CHARDISPLAT_H

