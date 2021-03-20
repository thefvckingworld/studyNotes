#ifndef BANNER_H
#define BANNER_H

#include <iostream>
#include <string>

using namespace std;

class Banner {
public:
	Banner(string str) : str(str){}

	void showWithParen() { cout << "Hello+" << endl; }
	void showWithAster() { cout << "Hello-" << endl; }

private:
	string str;

};


#endif // !
