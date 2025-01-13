#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State2;

class Context
{
public:
	Context();
	Context(State2* state);
	~Context();
	void OperationInterface();
	void OperationChangeState();

private:
	friend class State2; //表明在State2类中可以访问Context类的private字段
	bool ChangeState(State2* state);

private:
	State2* _state;
};







#endif //_CONTEXT_H_