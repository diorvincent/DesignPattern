// Observer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "Observer.h"
#include "Subject.h"
#include "CObserverBase.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    std::cout << "This is Observer design pattern exmple!\n";

	////实例化Subject子类ConcreteSubject,实际上是在实例化ConcreteSubject父类Subject时实例化了Observer对象链表
	//ConcreteSubject* sub = new ConcreteSubject();
	////将ConcreteObserverA对象放入Observer对象链表
	//Observer* o1 = new ConcreteObserverA(sub);
	////将ConcreteObserverB对象放入Observer对象链表
	//Observer* o2 = new ConcreteObserverB(sub);

	//sub->SetState("old");
	//sub->Notify();
	//sub->SetState("new");//也可以由Observer调用
	//sub->Notify();

	//实例2
	SecretaryBase* p = new Secretary();

	//被观察者对象
	CObserverBase* s1 = new NBAObserver("袁世凯", p);
	CObserverBase* s2 = new StockObserver("孙中山", p);
	//加入观察队列
	p->Attach(s1);
	p->Attach(s2);

	//事件
	p->action = "蒋介石来了";
	//通知
	p->Notify();
}


Observer::Observer()
{
	_st = '\0';
}

Observer::~Observer()
{

}

ConcreteObserverA::ConcreteObserverA(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sub->Detach(this);

	if (_sub != 0)
		delete _sub;
}

Subject* ConcreteObserverA::GetSubject()
{
	return _sub;
}

void ConcreteObserverA::PrintInfo()
{
	cout << "ConcreteObserverA observer ..." << _sub->GetState() << endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sub->Detach(this);

	if (_sub != 0)
		delete _sub;
}

Subject* ConcreteObserverB::GetSubject()
{
	return _sub;
}

void ConcreteObserverB::PrintInfo()
{
	cout << "ConcreteObserverB observer ..." << _sub->GetState() << endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}