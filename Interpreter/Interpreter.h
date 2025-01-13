// Interpreter.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Context
{
public:
	string input;
	string output;
};

class AbstractExpression
{
public:
	virtual void Interpret(Context* context) = 0;
};

class Expression :public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "终端解释器" << endl;
	}
};

class NonterminalExpression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "非终端解释器" << endl;
	}
};