// Proxy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "proxy.h"
#include "proxy2.h"

int main()
{
    std::cout << "This is Proxy design pattern demo!\n";
    
    //std::cout << "proxy demo 1" << std::endl;
    //ProxyClass* test = new ProxyClass();
    //test->Request();

    std::cout << "proxy demo 2" << std::endl;
    Subject* sub = new ConcreteSubject();
    Proxy* p = new Proxy(sub);
    p->Request();

}

