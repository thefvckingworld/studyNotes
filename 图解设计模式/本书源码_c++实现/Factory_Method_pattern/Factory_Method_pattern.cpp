#include <iostream>
#include "Factory.h"
#include "IdCardFactory.h"
#include "Product.h"

int main()
{
	Factory *factory = new IdCardFactory();
	Product *card1 = factory->create("小明", 0);
	Product *card2 = factory->create("小红", 1);
	Product *card3 = factory->create("小刚", 2);

	card1->use();
	card2->use();
	card3->use();

	return 0;
}


