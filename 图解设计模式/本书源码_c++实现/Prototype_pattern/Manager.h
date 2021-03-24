#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include <map>
#include "Product.h"

using namespace std;

class Manager {
public:
	void registerObj(string name, Product *p)
	{
		showCase[name] = p;
	}

	Product *create(string name)
	{
		Product *p = showCase[name];
		return p->createClone();
	}


private:
	map<string, Product *> showCase;
};


#endif // !MANAGER_H
