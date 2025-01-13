// AbstractFactory.cpp: 定义应用程序的入口点。
//

#include "AbstractFactory.h"
#include "AbstractFactory2.h"


int main()
{
	cout << "This is AbstractFactory desing pattern." << endl;

	cout << "AbstractFactory demo1" << endl;
	IFactory* factory = new SqlFactory();
	IUser* user = factory->CreateUser();
	IDepartment* depart = factory->CreateDepartment();
	user->GetUser();
	depart->GetDepartment();
	delete factory;

	cout << "AbstractFactory demo2" << endl;
	AbstractFactory* cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();

	AbstractFactory* cf2 = new ConcreteFactory2();
	cf2->CreateProductA();
	cf2->CreateProductB();

	delete cf1;
	delete cf2;

	return 0;
}
