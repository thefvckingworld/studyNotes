#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product {
public:
	virtual void use(string s) = 0;
	virtual Product *createClone() = 0;
};


#endif // !PRODUCT_H
