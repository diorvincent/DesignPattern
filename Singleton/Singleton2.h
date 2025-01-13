#pragma once
#include <iostream>

using namespace std;

class Singleton2
{
public:
	static Singleton2* Instance();
protected:
	Singleton2();//Singleton不可以被实例化，因此将其构造函数声明为protected或者直接声明为private
private:
	static Singleton2* _instance;
};