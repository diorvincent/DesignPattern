#pragma once

#ifndef _COLLEAGUE_H_
#define _COLLEAGUE_H_

#include <string>
#include <iostream>
using namespace std;

//class Mediator;
//class Colleague;

class Mediator
{
public:
	virtual ~Mediator() {}
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator() {}
private:
};

class Colleague
{
public:
	virtual ~Colleague() {}
	virtual void Action() = 0;
	virtual void SetState(const string& sdt) = 0;
	virtual string GetState() = 0;

protected:
	Colleague() {}
	Colleague(Mediator* mdt) 
	{
		this->_mdt = mdt;
	}
	Mediator* _mdt;
private:
};

class ConcreteColleagueA : public Colleague
{
public:
	ConcreteColleagueA() {}
	ConcreteColleagueA(Mediator* mdt) : Colleague(mdt){}
	~ConcreteColleagueA() {}
	void Action() 
	{
		_mdt->DoActionFromAtoB();
		cout << "State of ConcreteColleagueA: " << this->GetState() << endl;
	}
	
	void SetState(const string& sdt) { _sdt = sdt; }
	
	string GetState() { return _sdt; }
protected:
private:
	string _sdt;
};

class ConcreteColleagueB : public Colleague
{
public:
	ConcreteColleagueB() {}
	ConcreteColleagueB(Mediator* mdt) : Colleague(mdt){}
	~ConcreteColleagueB() {}

	void Action() 
	{
		_mdt->DoActionFromBtoA();
		cout << "State of ConcreteColleagueB: " << this->GetState() << endl;
	}
	void SetState(const string& sdt) { _sdt = sdt; }
	string GetState() { return _sdt; }
protected:
private:
	string _sdt;
};


class ConcreteMediator : public Mediator
{
public:
	ConcreteMediator() {}
	ConcreteMediator(Colleague* clgA, Colleague* clgB)
	{
		this->_clgA = clgA;
		this->_clgB = clgB;
	}
	~ConcreteMediator() {}

	void SetConcreteColleagueA(Colleague* clgA) { this->_clgA = clgA; }
	void SetConcreteColleagueB(Colleague* clgB) { this->_clgB = clgB; }
	Colleague* GetConcreteColleagueA() { return _clgA; }
	Colleague* GetConcreteColleagueB() { return _clgB; }

	void IntroColleague(Colleague* clgA, Colleague* clgB)
	{
		this->_clgA = clgA;
		this->_clgB = clgB;
	}
	void DoActionFromAtoB() 
	{
		_clgB->SetState(_clgA->GetState());
	}
	void DoActionFromBtoA() 
	{
		_clgA->SetState(_clgB->GetState());
	}
protected:
private:
	Colleague* _clgA;
	Colleague* _clgB;
};






#endif//~_COLLEAGUE_H_
