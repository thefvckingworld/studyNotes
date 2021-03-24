#ifndef TEXTBUILDER_H
#define TEXTBUILDER_H

#include <iostream>
#include <string>
#include <vector>
#include "Builder.h"

using namespace std;

class TEXTBuilder : public Builder {
public:
	void makeTitle(string title) 
	{
		buffer += "==============================\n";
		buffer += "『" + title + "』\n";
		buffer += "\n";
	}
	
	void makeString(string str) 
	{
		buffer += "■" + str + "\n";
		buffer += "\n";
	}

	void makeItems(string items[], int n) {
		for (int i = 0; i < n; i++) {
			buffer += "　・" + items[i] + "\n";
		}

		buffer += "\n";
	}

	void close() { buffer += "==============================\n";}

	string getResult() { return buffer; }

private:
	string buffer;
};


#endif // !HTMLBUILDER_H


