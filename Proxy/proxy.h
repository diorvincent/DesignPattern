#pragma once

#include <iostream>
#include <string>

#ifndef _PROXY_H_
#define _PROXY_H_

//定义接口
class Interface
{
public:
	virtual void Request() = 0;
};

class RealClass : public Interface
{
public:
	void Request()
	{
		std::cout << "Real request.\t\n" << std::endl;
	}
};

class ProxyClass //: private Interface
{
private:
	RealClass* m_realclass;
public:
	void Request()
	{
		m_realclass = new RealClass();
		m_realclass->Request();
		delete m_realclass;
	}
};


#endif

