// FllyWeight.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "FlyWeight.h"
#include "FlyWeight2.h"

int main()
{
    std::cout << "This is FlyWeight design pattern.\n";

    //std::cout << "FlyWeight design pattern 1."<<std::endl;
    //WebFactory* f = new WebFactory();
    //WebSite* ws = f->GetWeb();
    ////ws->use();

    ////WebSite* ws2 = f->GetWeb();
    ////ws2->use();

    ////WebSite* ws3 = f->GetWeb();
    ////ws3->use();
    //delete f;


    std::cout << "FlyWeight design pattern 2." << std::endl;
    FlyweightFactory* fc = new FlyweightFactory();
    
    Flyweight* fw1 = fc->GetFlyweight("one");
    fw1->Operation("part1");

    Flyweight* fw2 = fc->GetFlyweight("two");
    fw2->Operation("part2");

    Flyweight* fw3 = fc->GetFlyweight("one");
    fw3->Operation("part1");
    delete fc;

    return 0;
}

