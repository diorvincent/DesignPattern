// SampleFactory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "CCalculatorFactory.h"

int main()
{
    std::cout << "This is simply factory design pattern!\n";

	CCalculatorFactory* calFactory = new CCalculatorFactory();
	int type = 0;
	double a = 10, b = 2;

	type = 1;
	COperation* operation = calFactory->CreateOperation((PRODUCTTYPE)type, a, b);
	if (operation) {
		cout << operation->GetResult() << endl;
		delete operation;
		operation = NULL;
	}

	type = 2;
	operation = calFactory->CreateOperation((PRODUCTTYPE)type, a, b);
	if (operation) {
		cout << operation->GetResult() << endl;
		delete operation;
		operation = NULL;
	}

	type = 3;
	operation = calFactory->CreateOperation((PRODUCTTYPE)type, a, b);
	if (operation) {
		cout << operation->GetResult() << endl;
		delete operation;
		operation = NULL;
	}

	type = 4;
	operation = calFactory->CreateOperation((PRODUCTTYPE)type, a, b);
	if (operation) {
		cout << operation->GetResult() << endl;
		delete operation;
		operation = NULL;
	}

	if (calFactory) {
		delete calFactory;
		calFactory = NULL;
	}

}


