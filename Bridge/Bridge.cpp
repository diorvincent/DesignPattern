// Bridge.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Bridge.h"

#include "abstraction.h"
#include "abstractionImp.h"

using namespace std;

int main()
{
    std::cout << "This is bridge design pattern!\n";

    //std::cout << "bridge demo 1" << endl;
    //HandsetBrand* brand = new HandsetBrandM();
    //brand->SetHandsetSoft(new HandsetGame());
    //brand->Run();

    //brand->SetHandsetSoft(new HandSetAddressList());
    //brand->Run();

    //delete brand; brand = NULL;


    std::cout << "bridge demo 2" << endl;
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    Abstraction* abs = new RefinedAbstraction(imp);
    abs->Operation();
    delete abs;
    abs = NULL;
    delete imp;
    imp = NULL;
    
    /* result:
        ConcreteAbstractionImpA ....
    */


    return 0;

}


