// Decorator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Decorator.h"

int main()
{
    std::cout << "This Decorator design pattern demo!\n";

    Person* p = new Person("小李");
    BigTrouser* bt = new BigTrouser();
    TShirts* ts = new TShirts();

    bt->Decorate(p);
    ts->Decorate(bt);
    ts->Show();

    return 0;
}


