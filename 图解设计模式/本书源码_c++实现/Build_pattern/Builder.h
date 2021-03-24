#ifndef BUILDER_H
#define BUILDER_H

#include <string>

using namespace std;

class Builder {
public:
	virtual void makeTitle(string title) = 0;
	virtual void makeString(string str) = 0;
	virtual void makeItems(string items[], int n) = 0;
	virtual void close() = 0;
};




#endif // !

