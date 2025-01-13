#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colleague;
//中介者类
class Mediator
{
public:
	virtual void Send(string message, Colleague* col) = 0;
};

//抽象同事类
class Colleague
{
protected:
	Mediator* mediator;
public:
	Colleague(Mediator* temp)
	{
		mediator = temp;
	}
};

//同事1
class Colleague1 : public Colleague
{
public:
	Colleague1(Mediator* media) : Colleague(media){}

	void Send(string message)
	{
		mediator->Send(message, this);
	}

	void Notify(string strMessage)
	{
		cout << "同事1获得了消息:" << strMessage << endl;
	}
};

//同事2
class Colleague2 : public Colleague
{
public:
	Colleague2(Mediator* media) : Colleague(media) {}

	void Send(string message)
	{
		mediator->Send(message, this);
	}

	void Notify(string strMessage)
	{
		cout << "同事2获得了消息:" <<strMessage<< endl;
	}
};

//具体的中介者类
class ConcreteMediator : public Mediator
{
public:
	Colleague1* col1 = NULL;
	Colleague2* col2 = NULL;

	virtual void Send(string message, Colleague* col)
	{
		if (col == col1)
			col1->Notify(message);
		else
			col2->Notify(message);
	}

};