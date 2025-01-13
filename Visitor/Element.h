#pragma once

#ifndef _ELEMENT_H_
#define _ELEMENT_H_

class Visitor2;

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor2* vis) = 0;
protected:
	Element();
	
private:
};

class ConcreteElementA : public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();
	
protected:
	void Accept(Visitor2* vis);
private:
};

class ConcreteElementB : public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();
	
protected:
	void Accept(Visitor2* vis);
private:
};

#endif//~_ELEMENT_H_

