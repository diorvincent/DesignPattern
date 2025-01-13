#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Person
{
public:
	virtual void CreateHead() = 0;
	virtual void CreateHand() = 0;
	virtual void CreateBody() = 0;
	virtual void CreateFoot() = 0;
};

class ThinPerson :public Person
{
public:
	virtual void CreateHead()
	{
		cout << "ThinPerson head" << endl;
	}
	virtual void CreateHand()
	{
		cout << "ThinPerson hand" << endl;
	}
	virtual void CreateBody()
	{
		cout << "ThinPerson body" << endl;
	}
	virtual void CreateFoot()
	{
		cout << "ThinPerson foot" << endl;
	}
};

class ThickPerson : public Person
{
public:
	void CreateHead()
	{
		cout << "ThickPerson head" << endl;
	}
	void CreateHand()
	{
		cout << "ThickPerson hand" << endl;
	}
	void CreateBody()
	{
		cout << "ThickPerson body" << endl;
	}
	void CreateFoot()
	{
		cout << "ThickPerson foot" << endl;
	}
};

//Ö¸»ÓÕßÀà
class Direct2
{
private:
	Person* p;
public:
	Direct2(Person* temp) { p = temp; }
	void Create()
	{
		p->CreateHead();
		p->CreateBody();
		p->CreateHand();
		p->CreateFoot();
	}

};