// Prototype.cpp: 定义应用程序的入口点。
//

#include "Prototype.h"
#include "Prototype2.h"
using namespace std;

int main()
{
	cout << "This is Prototype design pattern demo1." << endl;

	ConcretePrototype1* test1 = new ConcretePrototype1("小王");
	ConcretePrototype2* test2 = (ConcretePrototype2*)test1->Clone();
	test1->Show();
	test2->Show();

	cout << "This is Prototype design pattern demo2." << endl;

	Prototype2* p = new ConcretePrototype();
	Prototype2* p1 = p->Clone();

	return 0;
}
