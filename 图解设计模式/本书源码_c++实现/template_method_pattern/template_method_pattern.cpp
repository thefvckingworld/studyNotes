// template_method_pattern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"

int main()
{
	AbstractDisplay *d1 = new CharDisplay('H');
	AbstractDisplay *d2 = new StringDisplay("Hello, world");
	AbstractDisplay *d3 = new StringDisplay("你好，世界。");
	AbstractDisplay *d4 = new StringDisplay("I love this world。");


	d1->display();
	d2->display();
	d3->display();
	d4->display();

	return 0;
}

