// Builder.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Builder.h"
#include "Person.h"

int main()
{
    std::cout << "This is builder design pattern!\n";

    std::cout << "Builder demo1" << std::endl;
    Direct* p = new Direct();
    Builder* b1 = new ConcreteBuilder1();
    Builder* b2 = new ConcreteBuilder2();

    p->Construct(b1);
    product* pb1 = b1->GetResult();
    pb1->Show();

    p->Construct(b2);
    product* pb2 = b2->GetResult();
    pb2->Show();
    delete pb2;
    delete pb1;
    delete b2;
    delete b1;
    delete p;

    std::cout << "Builder demo2" << std::endl;
    Person* p1 = new ThickPerson();
    Direct2* d = new Direct2(p1);
    d->Create();
    delete d;
    delete p1;

    Person* p2 = new ThinPerson();
    Direct2* d2 = new Direct2(p2);
    d2->Create();
    delete d2;
    delete p2;
}


