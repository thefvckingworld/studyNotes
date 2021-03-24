#ifndef UNDERLINEPEN_H
#define UNDERLINEPEN_H

#include <iostream>
#include <string>
#include <exception>
#include "Product.h"

using namespace std;

class UnderlinePen : public Product {
public:
	UnderlinePen(char ulChar) : ulChar(ulChar) {}
	void use(string s)
	{
		cout << "\"" + s + "\"" << endl;
		cout << " ";
		cout << string(s.size(), ulChar) << endl;
	}

	Product *createClone()
	{
		Product *p = nullptr;
		try {
			p = new UnderlinePen(ulChar);
		}
		catch (exception &e) {
			cout << "hha" << endl;
		}

		return p;
	}


private:
	char ulChar;



};



#endif // !

