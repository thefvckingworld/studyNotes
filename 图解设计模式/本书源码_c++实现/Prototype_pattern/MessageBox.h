#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <iostream>
#include <string>
#include <exception>
#include "Product.h"

using namespace std;

class MessageBox : public Product{
public:
	MessageBox(char decoChar) : decoChar(decoChar) {}
	void use(string str)
	{
		cout << string(str.size() + 6, decoChar) << endl;

		cout << decoChar + " " + str + " " + decoChar << endl;
		
		cout << string(str.size() + 6, decoChar) << endl;
	}

	Product *createClone()
	{
		Product *p = nullptr;
		try {
			p = new MessageBox(decoChar);
		}
		catch (exception &e) {
			cout << "Haha" << endl;
		}
		
		return p;
	}
	


private:
	char decoChar;


};


#endif // !MESSAGEBOX_H
