#include "State2.h"
#include "Context.h"
#include <iostream>

using namespace std;

State2::State2()
{

}

State2::~State2()
{

}

void State2::OperationInterface(Context* con)
{
	cout << "State:: ..." << endl;
}

bool State2::ChangeState(Context* con, State2* st)
{
	con->ChangeState(st);
	return true;
}

void State2::OperationChangeState(Context* con)
{

}

ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::OperationInterface(Context* con)
{
	cout << "ConcreteStateA::OperationInterface ..." << endl;
}

void ConcreteStateA::OperationChangeState(Context* con)
{
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::OperationInterface(Context* con)
{
	cout << "ConcreteStateB::OperationInterface ..." << endl;
}

void ConcreteStateB::OperationChangeState(Context* con)
{
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateA());
}
