#pragma once

#include <string>
using namespace std;

///////////////////////////////////Flyweight////////////////////////////////////////////////////////

class Flyweight {
public:
	virtual ~Flyweight() {}
	virtual void Operation(const string& extrinsicState) 
	{
	
	}
	string GetIntrinsicState()
	{
		return this->_intrinsicState;
	}

protected:
	Flyweight(string intrinsicState) 
	{
		this->_intrinsicState = intrinsicState;
	}

private:
	string _intrinsicState;
};


class ConcreteFlyweight : public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState) :Flyweight(intrinsicState)
	{
		cout << "ConcreteFlyweight Build ..." << intrinsicState << endl;
	}
	~ConcreteFlyweight() {}
	void Operation(const string& extrinsicState) 
	{
		cout << "ConcreteFlyweight: [" << this->GetIntrinsicState() << "] [" << extrinsicState << "]" << endl;
	}
protected:
private:
};




///////////////////////////////////FlyweightFactory////////////////////////////////////////////////////////
#include <vector>
#include <iostream>
#include <cassert>

class FlyweightFactory
{
public:
	FlyweightFactory(){}
	~FlyweightFactory(){}

	Flyweight* GetFlyweight(const string& key)
	{
		vector<Flyweight*>::iterator it = _fly.begin();
		for (; it != _fly.end(); it++)
		{
			if ((*it)->GetIntrinsicState() == key)
			{
				cout << "already created by users..." << endl;
				return *it;
			}
		}

		//根据需求不同，在此可扩展新的子对象实例化
		Flyweight* fn = new ConcreteFlyweight(key);
		_fly.push_back(fn);
		return fn;
	}

private:
	vector<Flyweight*> _fly;
};


