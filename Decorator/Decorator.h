#pragma once

#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string m_strName;
public:
	Person(string strName)
	{
		m_strName = strName;
	}

	Person(){}

	virtual void Show()
	{
		cout << "装扮的是:" << m_strName << endl;
	}
};

//装饰类
class Finery: public Person
{
protected:
	Person* m_component;
public:
	void Decorate(Person* component)
	{
		m_component = component;
	}
	virtual void Show()
	{
		m_component->Show();
	}
};

//T恤
class TShirts : public Finery
{
public:
	virtual void Show()
	{
		cout << "T Shirts" << endl;
		m_component->Show();
	}
};

//裤子
class BigTrouser : public Finery
{
public:
	virtual void Show()
	{
		cout << "Big Trouser" << endl;
		m_component->Show();
	}
};

#endif