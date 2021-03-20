#ifndef PRINTBANNER_H
#define PRINTBANNER_H

#include <iostream>
#include <string>
#include "Banner.h"
#include "Print.h"

class PrintBanner : public Banner, public Print {
public:
	PrintBanner(string str) : Banner(str){}

	void printWeak() { showWithParen(); }
	void printStrong() { showWithAster(); }
};

#endif // !
