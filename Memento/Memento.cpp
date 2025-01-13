// Memento.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Memento.h"
#include "Memento2.h"

int main()
{
    std::cout << "This Memento design pattern!\n";

    std::cout << "Memento demo 1 " << endl;
    Origniator* orig = new Origniator();
    orig->state = "on";
    orig->show();

    Caretaker* c = new Caretaker();
    c->memo = orig->CreateMemo();

    orig->state = "off";
    orig->show();

    orig->SetMemo(c->memo);
    orig->show();


    //std::cout << "Memento demo 2 " << endl;

    //Originator* o = new Originator();
    //o->SetState("old");//备忘前状态
    //o->PrintState();

    //Memento* m = o->CreateMemento();//将状态备忘
    //o->SetState("new");//修改状态
    //o->PrintState();
    //o->RestoreToMemento(m);//恢复修改前状态
    //o->PrintState();

 
}

