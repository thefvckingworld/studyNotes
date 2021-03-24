#include <iostream>
#include <string>
#include "Manager.h"
#include "UnderLinePen.h"
#include "MessageBox.h"
#include "Product.h"

using namespace std;

int main()
{
    Manager *manager = new Manager();
    UnderlinePen *upen = new UnderlinePen('~');
    MessageBox *mbox = new MessageBox('*');
    MessageBox *sbox = new MessageBox('/');

    manager->registerObj("strong message", upen);
    manager->registerObj("warning box", mbox);
    manager->registerObj("slash box", sbox);


    Product *p1 = manager->create("strong message");
    p1->use("Hello world.");

    Product *p2 = manager->create("warning box");
    p2->use("Hello world.");

    Product *p3 = manager->create("slash box");
    p3->use("Hello world.");

    return 0;
}
