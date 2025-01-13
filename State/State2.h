#ifndef _STATE_H_
#define _STATE_H_

class Context;//Ç°ÖÃÉùÃ÷

class State2
{
public:
	State2();
	virtual ~State2();
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeState(Context*) = 0;
protected:
	bool ChangeState(Context* con, State2* st);
};

class ConcreteStateA : public State2
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
protected:
private:
};

class ConcreteStateB : public State2
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
protected:
private:
};

#endif//~_STATE_H_
