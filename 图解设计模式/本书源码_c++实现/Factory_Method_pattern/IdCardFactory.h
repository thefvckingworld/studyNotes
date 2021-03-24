#ifndef IDCARDFACTORY_H
#define IDCARDFACTORY_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Factory.h"
#include "Product.h"
#include "IdCard.h"

class IdCardFactory : public Factory {
public:
	vector<string> getOwner() { return owners; }
protected:
	Product *createProduct(string owner, int num) { return new IdCard(owner, num); }
	void registerProduct(Product *product, int num) { 
		owners.push_back(static_cast<IdCard *>(product)->getOwner()); 
		nums[num] = static_cast<IdCard *>(product)->getOwner();
	}
	
private:
	vector<string> owners;
	map<int, string> nums;
};

#endif // !IDCARDFACTORY_H

