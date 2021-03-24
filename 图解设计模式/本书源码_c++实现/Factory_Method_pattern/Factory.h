#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class Factory {
public:
	virtual Product *create(string owner, int num)
	{
		Product *p = createProduct(owner, num);
		registerProduct(p, num);
		return p;
	}
protected:
	virtual Product *createProduct(string onwer, int num) = 0;
	virtual void registerProduct(Product *product, int num) = 0;
};


#endif // !FACTORY_H

