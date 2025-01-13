#pragma once
#include <iostream>

#ifndef _PROXY2_H_
#define _PROXY2_H_

class Subject
{
public:
	virtual ~Subject() {};
	virtual void Request() = 0;
protected:
	Subject() {};
};

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject() {};
	~ConcreteSubject() {};

	void Request()
	{
		std::cout << "ConceteSubject...request..." << std::endl;
	}
};

class Proxy
{
private:
	Subject* _sub;

public:
	Proxy() 
	{
		_sub = 0;
	}

	~Proxy() 
	{
		delete _sub;
	}

	Proxy(Subject* sub)
	{
		_sub = sub;
	}
	
	void Request()
	{
		std::cout << "Proxy request..." << std::endl;
		_sub->Request();
	}
};

#endif