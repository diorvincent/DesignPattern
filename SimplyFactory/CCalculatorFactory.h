#pragma once
#include <iostream>
using namespace std;

typedef enum ProductTypeTag
{
	ADD = 1,
	SUB = 2,
	MUL = 3,
	DIV = 4
}PRODUCTTYPE;

//基类
class COperation
{
public:
	COperation() : m_numA(0.0), m_numB(0.0)
	{
		cout << "COperation constructor" << endl;
	}

	virtual ~COperation()
	{
		cout << "COperation destructor" << endl;
	}

	virtual double GetResult() = 0;

protected:
	double m_numA;
	double m_numB;
};

//加法
class CAddOperation : public COperation
{
public:
	CAddOperation(double a, double b)
	{
		cout << "CAddOperation constructor" << endl;
		m_numA = a;
		m_numB = b;
	}

	virtual ~CAddOperation()
	{
		cout << "CAddOperation destructor" << endl;
	}

	virtual double GetResult()
	{
		return (m_numA + m_numB);
	}
};

//减法
class CSubOperation : public COperation
{
public:
	CSubOperation(double a, double b)
	{
		cout << "CSubOperation constructor" << endl;
		m_numA = a;
		m_numB = b;
	}

	virtual ~CSubOperation()
	{
		cout << "CSubOperation destructor" << endl;
	}

	virtual double GetResult()
	{
		return (m_numA - m_numB);
	}
};

//乘法
class CMulOperation : public COperation
{
public:
	CMulOperation(double a, double b)
	{
		cout << "CMulOperation constructor" << endl;
		m_numA = a;
		m_numB = b;
	}

	virtual ~CMulOperation()
	{
		cout << "CMulOperation destructor" << endl;
	}

	virtual double GetResult()
	{
		return (m_numA * m_numB);
	}
};

//除法
class CDivOperation : public COperation
{
public:
	CDivOperation(double a, double b)
	{
		cout << "CDivOperation constructor" << endl;
		m_numA = a;
		m_numB = b;
	}

	virtual ~CDivOperation()
	{
		cout << "CDivOperation destructor" << endl;
	}

	virtual double GetResult()
	{
		return (m_numA / m_numB);
	}
};

//工厂类
class CCalculatorFactory
{
public:
	COperation* CreateOperation(PRODUCTTYPE type, double a, double b)
	{
		switch (type)
		{
		case 1:
			return new CAddOperation(a, b);
			break;
		case 2:
			return new CSubOperation(a, b);
			break;
		case 3:
			return new CMulOperation(a, b);
			break;
		case 4:
			return new CDivOperation(a, b);
			break;
		default:
			return NULL;
		}
	}
};