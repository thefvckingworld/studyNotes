#ifndef AGGREATE_H
#define AGGREATE_H

#include "Iterator.h"
#include "Book.h"

class Aggreate {
public:
	virtual int getCount() = 0;
	virtual Book getAt(int index) = 0;
	virtual Iterator<Book> *iterator() = 0;
};

#endif // !Aggreate.h

