// Addapter_pattern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Print.h"
#include "PrintBanner.h"

using namespace std;

int main()
{
    Print *p = new PrintBanner(string("Hello"));

    p->printStrong();
    p->printWeak();

    delete p;


    return 0;
}
