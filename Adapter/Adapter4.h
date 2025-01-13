#pragma once

#ifndef _ADAPTER4_H_
#define _ADAPTER4_H_

class Target4
{
public:
	Target4() {}
	virtual ~Target4() {}
	virtual void Request() {
		std::cout << "Target4::Request\t\n" << std::endl;
	}

protected:
private:
};

class Adaptee4
{
public:
	Adaptee4() {}
	~Adaptee4() {}
	void SpecificRequest() {
		std::cout << "Adaptee4::SpecificRequest\t\n" << std::endl;
	}

protected:
private:
};

class Adapter4 : public Target4
{
public:
	Adapter4(Adaptee4* ade) { this->_ade = ade; }
	~Adapter4() {}
	void Request() { _ade->SpecificRequest(); }
protected:
private:
	Adaptee4* _ade;
};

#endif//~_ADAPTER_H_

