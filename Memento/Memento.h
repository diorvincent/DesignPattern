#pragma once

#include <iostream>
#include <string>

using namespace std;

class Memo
{
public:
	string state;
	Memo(string strState)
	{
		state = strState;
	}
};

class Origniator
{
public:
	string state;
	Memo* CreateMemo()
	{
		return new Memo(state);
	}
	void SetMemo(Memo* memo) 
	{
		state = memo->state;
	}
	void show()
	{
		cout << "״̬" << state << endl;
	}
};

class Caretaker
{
public:
	Memo* memo;
};

