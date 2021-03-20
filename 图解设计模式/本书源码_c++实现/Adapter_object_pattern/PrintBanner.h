#ifndef PRINTBANNER_H
#define PRINTBANNER_H

#include <iostream>
#include <string>
#include "Banner.h"
#include "Print.h"

class PrintBanner : public Print {
public:
	PrintBanner(string str) { banner.setStr(str); }

	void printWeak() { banner.showWithParen(); }
	void printStrong() { banner.showWithAster(); }

private:
	Banner banner;
};

#endif // !