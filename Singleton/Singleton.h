#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Singleton
{
private:
	Singleton() {}
	~Singleton() {}

	static Singleton* single;

public:
	static Singleton* GetInstance()
	{
		if (single == NULL)
		{
			single = new Singleton();
		}
		return single;
	}
};
//静态变量类外初始化
Singleton* Singleton::single = NULL;