// designPatterInCpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "Book.h"
#include "Aggreate.h"
#include "BookShelf.h"
#include "BookShelfIterator.h"
#include "Iterator.h"


int main(int argn, char *argv[])
{
	BookShelf *bookShelf = new BookShelf;
	bookShelf->appendBook(new Book("I love you"));
	bookShelf->appendBook(new Book("How to make money"));
	bookShelf->appendBook(new Book("To Be healthy"));

	Iterator<Book> *it = bookShelf->iterator();

	while (it->hasNext()) {
		Book book = it->next();
		cout << book.getName() << endl;
	}


	return 0;
}
