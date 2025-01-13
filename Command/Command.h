#pragma once

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//烤肉师傅
class Barbucer
{
public:
	void MakeMutton()
	{
		cout << "烤羊肉" << endl;
	}
	void MakeChickenWing()
	{
		cout << "烤鸡翅" << endl;
	}
};

//抽象命令类
class Command
{
protected:
	Barbucer* receiver;
public:
	Command(Barbucer* temp)
	{
		receiver = temp;
	}
	virtual void ExcuteCmd() = 0;
};

//烤羊肉命令
class BakeMuttonCmd : public Command
{
public:
	BakeMuttonCmd(Barbucer* temp) : Command(temp){}
	virtual void ExcuteCmd()
	{
		receiver->MakeMutton();
	}
};

//烤鸡翅
class ChickenWingCmd : public Command
{
public:
	ChickenWingCmd(Barbucer* temp) : Command(temp){}
	virtual void ExcuteCmd()
	{
		receiver->MakeChickenWing();
	}
};

//服务员类
class Waiter
{
protected:
	vector<Command*> m_commandlist;
public:
	void SetCmd(Command* cmd)
	{
		m_commandlist.emplace_back(cmd);
		cout << "增加订单" << endl;
	}

	//通知执行
	void Notify()
	{
		vector<Command*>::iterator p = m_commandlist.begin();
		while (p != m_commandlist.end())
		{
			(*p)->ExcuteCmd();
			p++;
		}
	}
};





#endif