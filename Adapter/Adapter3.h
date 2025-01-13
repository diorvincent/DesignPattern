#pragma once
#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include <iostream>

class Target3
{
public:
	Target3() {};
	virtual ~Target3() {};
	virtual void Request() { std::cout << "Target::Request\t\n" << std::endl; };
protected:
private:
};

class Adaptee3
{
public:
	Adaptee3() {};
	~Adaptee3() {};
	void SpecificRequest() 
	{
		std::cout << "Adaptee ::SpecificRequest" << std::endl;
	};
protected:
private:
};

class Adapter3 : public Target3, private Adaptee3
{
public:
	Adapter3() {}
	~Adapter3() {}
	void Request() 
	{
		SpecificRequest();
		Target3::Request();
	};
protected:
private:
};

#endif//~_ADAPTER_H_
