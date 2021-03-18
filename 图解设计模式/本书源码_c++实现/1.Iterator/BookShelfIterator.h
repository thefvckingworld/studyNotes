#ifndef BOOKSHELFITERATOR_H
#define BOOKSHELFITERATOR_H

#include "Iterator.h"
#include "Book.h"
#include "Aggreate.h"

class BookShelfIterator : public Iterator<Book> {
public:
	BookShelfIterator(Aggreate *bookShelf) : bookShelf(bookShelf), index(0) {}
	bool hasNext() {
		if (index < bookShelf->getCount()) {
			return true;
		}
		else {
			return false;
		}
	}

	Book next() {
		Book book = bookShelf->getAt(index);
		index++;
		return book;
	}

private:
	Aggreate *bookShelf;
	int index;

};


#endif // !

