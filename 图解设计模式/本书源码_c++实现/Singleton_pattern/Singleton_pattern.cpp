#include <iostream>
#include "Singleton.h"

using namespace std;

int main()
{
	Singleton &obj1 = Singleton::getInstance();
	Singleton &obj2 = Singleton::getInstance();

	if (&(obj1) == &(obj2)) {
		cout << "Make more money!" << endl;
	}

	return 0;
}
