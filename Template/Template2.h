#pragma once

class AbstractClass2
{
public:
	virtual ~AbstractClass2();
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	AbstractClass2();
};

class ConcreteClass1 : public AbstractClass2
{
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};

class ConcreteClass2 : public AbstractClass2
{
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};

