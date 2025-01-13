// Mediator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Mediator.h"       //for eaxmple1
//#include "Colleague.h" //for example2

int main()
{
    std::cout << "This is Mediator design pattern!\n";

    std::cout << "This is Mediator demo1!" <<std::endl;;
    ConcreteMediator* m = new ConcreteMediator();
    //让同事认识中介
    Colleague1* col1 = new Colleague1(m);
    Colleague2* col2 = new Colleague2(m);

    //让中介认识具体的同事类
    m->col1 = col1;
    m->col2 = col2;

    col1->Send("Did u have lanuched?");
    col2->Send("Not yet, r u wanna invent me?");


    //std::cout << "This is Mediator demo2!" << std::endl;

    //ConcreteMediator* m = new ConcreteMediator();
    //ConcreteColleagueA* c1 = new ConcreteColleagueA(m);
    //ConcreteColleagueB* c2 = new ConcreteColleagueB(m);

    //m->IntroColleague(c1, c2);

    //c1->SetState("old");
    //c2->SetState("old");
    //c1->Action();
    //c2->Action();
    //
    //c1->SetState("new");
    //c1->Action();
    //c2->Action();

    //c2->SetState("old");
    //c1->Action();
    //c2->Action();
    
}

