#ifndef IDCARD_H
#define IDCARD_H

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class IdCard : public Product {
public:
	IdCard(string owner, int num) : owner(owner), num(num){
		cout << "制作" + owner + "的ID卡" + " 编号: " << num << endl;
	}
	
	void use() { cout << "使用" + owner + "的ID卡" + " 编号: "<< num << endl; }
	string getOwner() { return owner; }
	int getNum() { return num; }

private:
	string owner;
	int num;
};



#endif // !IDCARD_H

