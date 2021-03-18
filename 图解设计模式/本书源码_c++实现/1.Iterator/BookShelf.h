#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <vector>
#include <string>
#include "Book.h"
#include "BookShelfIterator.h"
#include "Aggreate.h"
#include "Iterator.h"


class BookShelf : public Aggreate{
public:
	BookShelf() {}
	Book getAt(int index) { return books[index]; }
	void appendBook(Book* book) { books.push_back(*book); last++; }
	int getCount() { return last; }

	Iterator<Book> *iterator() { return new BookShelfIterator(this); }

private:
	vector<Book> books;
	int last = 0;
};



#endif // !

