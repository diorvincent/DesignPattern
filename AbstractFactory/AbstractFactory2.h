#pragma once
#include <iostream>
using namespace std;

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class AbstractProductA
{
public:
	virtual ~AbstractProductA() {}

protected:
	AbstractProductA() { }

private:
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB() {}

protected:
	AbstractProductB() {}

private:
};

class ProductA1 : public AbstractProductA
{
public:
	ProductA1() { cout << "ProductA1 ..." << endl; }
	~ProductA1() {  }

protected:
private:
};

class ProductA2 : public AbstractProductA
{
public:
	ProductA2() { cout << "ProductA2 ..." << endl; }
	~ProductA2() {  }

protected:
private:
};

class ProductB1 : public AbstractProductB
{
public:
	ProductB1() { cout << "ProductB1 ..." << endl; }
	~ProductB1() {}

protected:
private:
};

class ProductB2 : public AbstractProductB
{
public:
	ProductB2() { cout << "ProductB2 ..." << endl; }
	~ProductB2() {}

protected:
private:
};

#endif//~_PRODUCT_H_


#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

class AbstractFactory
{
public:
	virtual ~AbstractFactory(){}
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;

protected:
	AbstractFactory() {}

private:
};

class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1() {}
	~ConcreteFactory1() {}
	AbstractProductA* CreateProductA() { return new ProductA1(); }
	AbstractProductB* CreateProductB() { return new ProductB1(); }

protected:
private:
};

class ConcreteFactory2 : public AbstractFactory
{
public:
	ConcreteFactory2() {}
	~ConcreteFactory2() {}
	AbstractProductA* CreateProductA() { return new ProductA2(); }
	AbstractProductB* CreateProductB() { return new ProductB2(); }

protected:
private:
};

#endif//~_ABSTRACTFACTORY_H_




