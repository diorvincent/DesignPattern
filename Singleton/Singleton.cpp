// Singleton.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Singleton.h"
#include "Singleton2.h"

//on Singleton2 global obj 
Singleton2* Singleton2::_instance = 0;

int main()
{
    std::cout << "This is singleton design pattern!\n";
    
    std::cout << "singleton demo1" << endl;
    Singleton* s1 = Singleton::GetInstance();
    Singleton* s2 = Singleton::GetInstance();

    if (s1 == s2)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "no" << endl;
    }


    std::cout << "singleton demo2" << endl;
    Singleton2* single2 = Singleton2::Instance();

    return 0;
}


Singleton2::Singleton2()
{
    cout << "Singleton2....." << endl;
}

Singleton2* Singleton2::Instance()
{
    if (_instance == 0)
        _instance = new Singleton2();
    return _instance;
}