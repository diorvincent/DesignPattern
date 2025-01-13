#include "Memento2.h"
#include <iostream>

typedef string State;

Originator::Originator()
{
	_sdt = "";
	_mt = 0;
}

Originator::Originator(const State& sdt)
{
	_sdt = sdt;
	_mt = 0;
}

Originator::~Originator() { }

Memento* Originator::CreateMemento()
{
	return new Memento(_sdt);
}

State Originator::GetState()
{
	return _sdt;
}

void Originator::SetState(const State& sdt)
{
	_sdt = sdt;
}

void Originator::PrintState()
{
	cout << this->_sdt << "......" << endl;
}

void Originator::SetMomento(Memento* men)
{
}

void Originator::RestoreToMemento(Memento* men)
{
	this->_sdt = men->GetState();
}

Memento::Memento()
{
}

Memento::~Memento()
{
}

void Memento::SetState(const State& sdt)
{
	_sdt = sdt;
}

Memento::Memento(const State& sdt)
{
	_sdt = sdt;
}

State Memento::GetState()
{
	return _sdt;
}

