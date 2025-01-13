// Template.cpp: 定义应用程序的入口点。
//

#include "Template.h"
#include "Template2.h"

using namespace std;

int main()
{
	cout << "This is template design patter demo1." << endl;
	Naruto* man = new Naruto();
	man->Show();
	OnePice* man2 = new OnePice();
	man2->Show();

	cout << "This is template design patter demo2." << endl;
	AbstractClass2* p1 = new ConcreteClass1();
	AbstractClass2* p2 = new ConcreteClass2();
	p1->TemplateMethod();
	p2->TemplateMethod();

	return 0;
}
