#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//最终产品类
class product
{
private:
	vector<string> m_product;
public:
	void Add(string strtemp)
	{
		m_product.push_back(strtemp);
	}

	void Show()
	{
		vector<string>::iterator p = m_product.begin();
		while (p != m_product.end())
		{
			cout << *p << endl;
			p++;
		}
	}
};

//建造者基类
class Builder
{
public:
	virtual void BuilderA() = 0;
	virtual void BuilderB() = 0;
	virtual product* GetResult() = 0;
};

//第一种建造方式
class ConcreteBuilder1 :public Builder
{
private:
	product* m_product;

public:
	ConcreteBuilder1()
	{
		m_product = new product();
	}

	virtual void BuilderA()
	{
		m_product->Add("one");
	}

	virtual void BuilderB()
	{
		m_product->Add("two");
	}

	virtual product* GetResult()
	{
		return m_product;
	}
};

//第二种建造方式
class ConcreteBuilder2 : public Builder
{
private:
	product* m_product;

public:
	ConcreteBuilder2()
	{
		m_product = new product();
	}

	virtual void BuilderA()
	{
		m_product->Add("A");
	}

	virtual void BuilderB()
	{
		m_product->Add("B");
	}

	virtual product* GetResult()
	{
		return m_product;
	}
};

//指挥者类
class Direct
{
public:
	void Construct(Builder* temp)
	{
		temp->BuilderA();
		temp->BuilderB();
	}
};