// Visitor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "Visitor.h"
#include "Element.h"
#include "Visitor2.h"
#include <iostream>


using namespace std;

int main()
{
    std::cout << "This is visitor design pattern!\n";

    /*示例1：Visitor */
    //ObjectStructure* os = new ObjectStructure();
    //os->Add(new Man());
    //os->Add(new Woman());

    //Success* success = new Success();
    //os->Display(success);

    //Failure* failure = new Failure();
    //os->Display(failure);


    /*示例2：Visitor2*/
    Visitor2* vis = new ConcreteVisitorA();
    Element* elm = new ConcreteElementA();
    elm->Accept(vis);

    Visitor2* visB = new ConcreteVisitorB();
    Element* elmB = new ConcreteElementB();
    elmB->Accept(visB);

    return 0;
}
