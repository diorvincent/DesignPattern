#pragma once

#ifndef _VISITOR_H_
#define _VISITOR_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Man;
class Woman;

//行为
class Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA) = 0;
	virtual void GetWomanConclusion(Woman* concreteElementB) = 0;
};

//成功
class Success : public Action
{
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "男人成功时，背后有个伟大的女人" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "女人成功时，背后有个没用的男人" << endl;
	}
};

//失败
class Failure : public Action
{
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "男人失败时，背后有个伟大的女人" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "女人失败时，背后有个没用的男人" << endl;
	}
};

//抽象人类
class Person
{
public:
	virtual void Accept(Action* visitor) = 0;
};

//男人
class Man : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetManConclusion(this);
	}
};

//女人
class Woman : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetWomanConclusion(this);
	}
};

//对象结构类
class ObjectStructure
{
private:
	vector<Person*> m_personlist;

public:
	void Add(Person* p) 
	{
		m_personlist.emplace_back(p);
	}

	void Display(Action* a)
	{
		vector<Person*>::iterator p = m_personlist.begin();
		while (p != m_personlist.end())
		{
			(*p)->Accept(a);
			p++;
		}
	}
};


#endif // !_VISITOR_H_
