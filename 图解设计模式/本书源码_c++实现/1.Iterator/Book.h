#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
public:
	Book() { name = string("luxun"); }
	Book(string outName) : name(outName){}
	string getName() { return this->name; }

private:
	string name;
};



#endif // !BOOK_H

