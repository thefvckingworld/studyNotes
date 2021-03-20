#ifndef BANNER_H
#define BANNER_H

#include <iostream>
#include <string>

using namespace std;

class Banner {
public:
	Banner() = default;
	Banner(string str) : str(str) {}

	void showWithParen() { cout << "Hello+" << endl; }
	void showWithAster() { cout << "Hello-" << endl; }

	void setStr(string str) { this->str = str; }

private:
	string str;

};


#endif // !
