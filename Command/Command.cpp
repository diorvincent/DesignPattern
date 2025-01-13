// Command.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "Command.h"

#include "Command2.h"
#include "Invoker.h"
#include "Receiver.h"


int main()
{
    std::cout << "This is Command design pattern!\n";

    //示例1：
    //店里添加烤肉师傅、菜单、服务员
    Barbucer* barbucer = new Barbucer();
    Command* cmd = new BakeMuttonCmd(barbucer);
    Command* cmd2 = new ChickenWingCmd(barbucer);
    Waiter* girl = new Waiter();
    //点菜
    girl->SetCmd(cmd);
    girl->SetCmd(cmd2);
    //服务员通知
    girl->Notify();

    delete barbucer;
    delete girl;
    //_


    //示例2：
    Receiver* rev = new Receiver();
    Commander2* cmd3 = new ConcreteCommand(rev);
    Invoker* inv = new Invoker(cmd3);
    inv->invoke();
    delete inv;
}

