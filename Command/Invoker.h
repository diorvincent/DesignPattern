#pragma once
#ifndef _INVOKE_H_
#define _INVOKE_H_

class Commander2;

class Invoker
{
public:
	Invoker(Commander2* cmd);
	~Invoker();
	void invoke();

private:
	Commander2* _cmd;
};






#endif