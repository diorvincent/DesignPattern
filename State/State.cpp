// State.cpp: 定义应用程序的入口点。
//

#include "State.h"
#include "State2.h"
#include "Context.h"

int main()
{
	cout << "This is state design pattern demo1." << endl;

	Work* myWork = new Work();
	myWork->hour = 9;
	myWork->WriteProgram();

	myWork->hour = 23;
	myWork->WriteProgram();


	//cout << "This is state design pattern demo2." << endl;
	//State2* st = new ConcreteStateA();
	//Context* con = new Context(st);
	//con->OperationChangeState();
	//con->OperationChangeState();
	//con->OperationChangeState();

	//if (con != NULL)
	//	delete con;

	//if (st != NULL)
	//	st = NULL;

	return 0;
}
