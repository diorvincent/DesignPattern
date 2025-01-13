// Iterator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Iterator.h"
#include "Aggregate.h"
using namespace std;

int main()
{
    std::cout << "This is Iterator design pattern!\n";

    Aggregate* ag = new ConcreteAggregate();
    Iterator* it = new ConcreteIterator(ag);

    for (; !(it->IsDone()); it->Next())
    {
        cout << it->CurrentItem() << endl;
    }
}

Iterator::Iterator() {}

Iterator::~Iterator(){}

ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx)
{
    this->_ag = ag;
    this->_idx = idx;
}

ConcreteIterator::~ConcreteIterator()
{

}

Object ConcreteIterator::CurrentItem()
{
    return _ag->GetItem(_idx);
}

void ConcreteIterator::First()
{
    _idx = 0;
}

void ConcreteIterator::Next()
{
    if (_idx < _ag->GetSize())
        _idx++;
}

bool ConcreteIterator::IsDone()
{
    return (_idx == _ag->GetSize());
}