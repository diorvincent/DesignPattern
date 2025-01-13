#include "Element.h"
#include "Visitor2.h"
#include <iostream>

using namespace std;

Element::Element()
{

}

Element::~Element()
{

}

void Element::Accept(Visitor2* vis)
{

}

ConcreteElementA::ConcreteElementA()
{

}

ConcreteElementA::~ConcreteElementA()
{

}

void ConcreteElementA::Accept(Visitor2* vis)
{
	vis->VisitConcreteElementA(this);
	cout << "visiting ConcreteElementA ..." << endl;
}

ConcreteElementB::ConcreteElementB()
{

}

ConcreteElementB::~ConcreteElementB()
{

}

void ConcreteElementB::Accept(Visitor2* vis)
{
	vis->VisitConcreteElementB(this);
	cout << "visiting ConcreteElementB ..." << endl;
}
