// Adapter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Adapter.h"
#include "Adapter2.h"
#include "Adapter3.h"
#include "Adapter4.h"

int main()
{
    std::cout << "This is Adapter design pattern!\n";
    
    std::cout << "适配器示例1\t\n" << endl;
    Adapter* ada = new Adapter();
    ada->Request();
    delete ada;

    std::cout << "适配器示例2\t\n" << endl;
    Player* p = new Translater("Rolard");
    p->Attack();
    p->Defence();
    delete p;

    std::cout << "适配器示例(类模式)3\t\n" << endl;
    Target3* adt0 = new Adapter3();
    adt0->Request();
    delete adt0;

    std::cout << "适配器示例(对象模式)4\t\n" << endl;
    Adaptee4* ade = new Adaptee4;
    Target4* adt = new Adapter4(ade);

    adt->Request();
    delete adt;
    delete ade;
}


