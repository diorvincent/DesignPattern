#include "Invoker.h"
#include "Command2.h"
#include <iostream>

Invoker::Invoker(Commander2* cmd)
{
	_cmd = cmd;
}

Invoker::~Invoker()
{
	delete _cmd;
}

void Invoker::invoke()
{
	_cmd->Excute();
}