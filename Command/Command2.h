#pragma once

#ifndef _COMMAND2_H_
#define _COMMAND2_H_

class Receiver;

class Commander2
{
public:
	virtual ~Commander2();
	virtual void Excute() = 0;
protected:
	Commander2();
};

class ConcreteCommand : public Commander2
{
public:
	ConcreteCommand(Receiver* recv);
	~ConcreteCommand();
	void Excute();
private:
	Receiver* _recv;
};


#endif