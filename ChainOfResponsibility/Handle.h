#pragma once

#ifndef _HANDLE_H_
#define _HANDLE_H_

class Handle
{
public:
	~Handle();
	virtual void HandleRequest() = 0;

	void SetSuccessor2(Handle* succ);
	Handle* GetSuccessor();

protected:
	Handle();
	Handle(Handle* succ);

private:
	Handle* _succ;
};

class ConcreteHandleA : public Handle
{
public:
	ConcreteHandleA();
	~ConcreteHandleA();

	ConcreteHandleA(Handle* succ) : Handle(succ) {}
	void HandleRequest();
};

class ConcreteHandleB : public Handle
{
public:
	ConcreteHandleB();
	~ConcreteHandleB();

	ConcreteHandleB(Handle* succ) : Handle(succ) {}
	void HandleRequest();
};


#endif
