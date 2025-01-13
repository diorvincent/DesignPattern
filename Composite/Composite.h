#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Ê¾Àý1£º
class Component
{
protected:
	string m_strName;

public:
	Component(string strName);

	virtual void add(Component* com) = 0;
	virtual void display(int nDepth) = 0;
};

class Leaf : public Component
{
public:
	Leaf(string strName) : Component(strName){}

	void add(Component* com);
	void display(int nDepth);
};

class Composite : public Component
{
private:
	vector<Component*> m_component;
public:
	Composite(string strName) : Component(strName) {}

	void add(Component* com);
	void display(int nDepth);
};
//_


//Ê¾Àý2£º
class Company {
protected:
	string m_strName;
public:
	Company(string strName) { m_strName = strName; };

	virtual void add(Company* c) = 0;
	virtual void display(int nDepth) = 0;
	virtual void LineOfDuty() = 0;
};

class ConcreteCompany : public Company
{
private:
	vector<Company*> m_company;
public:
	ConcreteCompany(string strName) : Company(strName){}

	void add(Company* c);
	void display(int nDepth);
	void LineOfDuty();
};

class HrDepartment : public Company
{
public:
	HrDepartment(string strName) : Company(strName){}

	void add(Company* c);
	void display(int nDepth);
	void LineOfDuty();
};
//_