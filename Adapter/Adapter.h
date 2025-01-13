#pragma once

#include <istream>

using namespace std;

class Target
{
public:
	virtual void Request()
	{
		cout << "普通请求\t\n" << endl;
	}
};

class Adaptee
{
public:
	void SpecificalRequest()
	{
		cout << "特殊请求" << endl;
	}
};

class Adapter : public Target
{
private:
	Adaptee* ada;
public:
	virtual void Request()
	{
		ada->SpecificalRequest();
		Target::Request();
	}

	Adapter()
	{
		ada = new Adaptee();
	}

	~Adapter()
	{
		delete ada;
	}
};
