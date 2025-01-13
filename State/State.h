// State.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
using namespace std;


class Work;
class ForenoontState;
class NonnState;

class State
{
public:
	virtual void WriteProgram(Work* w) = 0;
};

class Work
{
private:
	State* current;
public:
	double hour;
public:
	Work();

	void SetState(State* temp)
	{
		current = temp;
	}

	void WriteProgram()
	{
		current->WriteProgram(this);
	}
};

class NoonState :public State
{
public:
	virtual void WriteProgram(Work* w)
	{
		cout << "execute" << endl;
		if ((w->hour) < 22)
			cout << "还不错啦" << endl;
		else
			cout << "不行了，还是睡觉吧" << endl;
	}
};

class ForenoonState :public State
{
public:
	virtual void WriteProgram(Work* w)
	{
		if ((w->hour) < 12)
			cout << "现在的精神无敌好" << endl;
		else {
			w->SetState(new NoonState());
			w->WriteProgram();//注意加上这句
		}
	}
};

Work::Work()
{
	current = new ForenoonState();
}