#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Request {
public:
	string m_strContent;
	int m_nNumber;
};

class Manager
{
protected:
	Manager* manager;
	string name;

public:
	Manager(string temp) 
	{
		name = temp;
	}

	void SetSuccessor(Manager* temp)
	{
		manager = temp;
	}

	virtual void GetRequest(Request* request) = 0;
};

class CommanManager :public Manager
{
public:
	CommanManager(string strTemp) : Manager(strTemp){}

	virtual void GetRequest(Request* request)
	{
		if (request->m_nNumber >= 0 && request->m_nNumber < 40)
		{
			cout << "\t\n职责链模式示例1：\t\n" ;
			cout << name << "处理了" << request->m_nNumber << "个请求" << endl;
		}
		else
			manager->GetRequest(request);
	}
};

class MajorDemo : public Manager
{
public:
	MajorDemo(string name) : Manager(name){}

	virtual void GetRequest(Request* request)
	{
		if (request->m_nNumber < 50)
			cout << name << "处理了" << request->m_nNumber << "个请求" << endl;
	}
};