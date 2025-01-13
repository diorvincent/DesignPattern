#pragma once

#ifndef _VISITOR2_H_
#define _VISITOR2_H_

class Element;

class Visitor2
{
public:
	virtual ~Visitor2();
	virtual void VisitConcreteElementA(Element* elm) = 0;
	virtual void VisitConcreteElementB(Element* elm) = 0;

protected:
	Visitor2();

};

class ConcreteVisitorA : public Visitor2
{
public:
	ConcreteVisitorA();
	virtual ~ConcreteVisitorA();

	void VisitConcreteElementA(Element* elm);
	void VisitConcreteElementB(Element* elm);
protected:
	
};

class ConcreteVisitorB : public Visitor2
{
public:
	ConcreteVisitorB();
	virtual ~ConcreteVisitorB();

	void VisitConcreteElementA(Element* elm);
	void VisitConcreteElementB(Element* elm);
protected:
	
};


#endif

