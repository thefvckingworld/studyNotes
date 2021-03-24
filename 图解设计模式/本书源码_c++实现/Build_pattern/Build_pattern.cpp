#include <iostream>

#include "Director.h"
#include "TextBuilder.h"

int main()
{
    TEXTBuilder *textBuilder = new TEXTBuilder();
    Director *director = new Director(textBuilder);
    director->construct();

    string result = textBuilder->getResult();
    cout << result << endl;


    return 0;
}
