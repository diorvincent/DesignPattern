#include "Command2.h"
#include "Receiver.h"
#include <iostream>

Commander2::Commander2()
{}

Commander2::~Commander2()
{}

ConcreteCommand::ConcreteCommand(Receiver* rev)
{
	this->_recv = rev;
}

ConcreteCommand::~ConcreteCommand()
{
	delete this->_recv;
}

void ConcreteCommand::Excute()
{
	_recv->Action();
	std::cout << "ConcreteCommand ..." << std::endl;
}