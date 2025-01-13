// ChainOfResponsibility.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "ChainOfResponsibility.h"
#include "Handle.h"


int main()
{
    std::cout << "This is Chain of responsibility design pattern!\n";
    //实例1.
    Manager* common = new CommanManager("张经理");
    Manager* major = new MajorDemo("何总监");

    common->SetSuccessor(major);

    Request* req = new Request();
    req->m_nNumber = 35;
    common->GetRequest(req);

    req->m_nNumber = 48;
    common->GetRequest(req);

    //实例2.
    Handle* h1 = new ConcreteHandleA();
    Handle* h2 = new ConcreteHandleB();

    h1->SetSuccessor2(h2);
    h1->HandleRequest();
}

Handle::Handle()
{
    _succ = 0;
}

Handle::~Handle()
{
    delete _succ;
}

Handle::Handle(Handle* succ)
{
    this->_succ = succ;
}

void Handle::SetSuccessor2(Handle* succ)
{
    _succ = succ;
}

Handle* Handle::GetSuccessor()
{
    return _succ;
}

void Handle::HandleRequest()
{

}

ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

void ConcreteHandleA::HandleRequest()
{
    if (this->GetSuccessor() != 0) {
        cout << "\t\n职责链模式示例2：\t\nConcreteHandleA 我把处理权给后继节点 ..." << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
        cout << "ConcreteHandleA 没有后继了， 我必须自己处理 ..." << endl;
}

ConcreteHandleB::ConcreteHandleB()
{

}

ConcreteHandleB::~ConcreteHandleB()
{

}

void ConcreteHandleB::HandleRequest()
{
    if (this->GetSuccessor() != 0) {
        cout << "ConcreteHandleB 我把处理权给后继节点 ..." << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
        cout << "ConcreteHandleB 没有后继了，我必须自己处理 ..." << endl;
}