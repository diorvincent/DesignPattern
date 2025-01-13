#include "Context.h"
#include "State2.h"


Context::Context()
{
}

Context::Context(State2* state)
{
	this->_state = state;
}

Context::~Context()
{
	delete _state;
}

void Context::OperationInterface()
{
	_state->OperationInterface(this);
}

bool Context::ChangeState(State2* state)
{
	//_state->ChangeState(this, state);
	this->_state = state;

	return true;
}

void Context::OperationChangeState()
{
	_state->OperationChangeState(this);
}
