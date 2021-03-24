#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director{
public:
	Director(Builder *builder) : builder(builder) {}
	void construct() {
		builder->makeTitle("Greeting");
		builder->makeString("从早上到下午");
		builder->makeItems(new string[]{ "早上好", "下午好" }, 2);
		builder->makeString("晚上");
		builder->makeItems(new string[]{ "晚上好", "晚安", "再见" }, 3);
		builder->close();
	}

private:
	Builder *builder;
};



#endif // !DIRECTOR_H

