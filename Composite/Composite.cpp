// Composite.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Composite.h"

int main()
{
    std::cout << "This is Composite design pattern!\n";
    //示例1：
    //Composite* p = new Composite("一线歌星");
    //p->add(new Leaf("周杰伦"));
    //p->add(new Leaf("张学友"));
    //p->add(new Leaf("王菲"));

    //Composite* p1 = new Composite("二线歌星");
    //p1->add(new Leaf("陈奕迅"));
    //p1->add(new Leaf("李克勤"));
    //p1->add(new Leaf("谭咏麟"));

    //p->add(p1);
    //p->display(1);
    //_

    //示例2:
    ConcreteCompany* p = new ConcreteCompany("Tsinghua University");
    p->add(new HrDepartment("TsingHua University HR dpt."));

    ConcreteCompany* p1 = new ConcreteCompany("Mathmatic college");
    p1->add(new HrDepartment("Talents dpt. of Mathmatic college"));

    ConcreteCompany* p2 = new ConcreteCompany("Physics college");
    p2->add(new HrDepartment("Talents dpt. of Physics college"));

    p->add(p1);
    p->add(p2);

    p->display(1);
    p->LineOfDuty();
    //_
}


Component::Component(string strName)
{
    m_strName = strName;
}

void Leaf::add(Component* com)
{
    cout << "leaf can't add" << endl;
}

void Leaf::display(int nDepth)
{
    string strtemp;
    for (int i = 0; i < nDepth; i++)
    {
        strtemp += "-";
    }
    strtemp += m_strName;
    cout << strtemp << endl;
}

void Composite::add(Component* com)
{
    m_component.push_back(com);
}

void Composite::display(int nDepth)
{
    string strtemp;
    for (int i = 0; i < nDepth; i++)
        strtemp += "-";
    
    strtemp += m_strName;
    cout << strtemp << endl;

    vector<Component*>::iterator p = m_component.begin();
    while (p != m_component.end())
    {
        (*p)->display(nDepth + 2);
        p++;
    }
}

void ConcreteCompany::add(Company* c)
{
    m_company.push_back(c);
}

void ConcreteCompany::display(int nDepth)
{
    string strtemp;
    for (int i = 0; i < nDepth; i++)
        strtemp += ">>";
    strtemp += m_strName;
    cout << strtemp << endl;

    vector<Company*>::iterator p = m_company.begin();
    while(p != m_company.end()) {
        (*p)->display(nDepth + 1);
        p++;
    }
}

void ConcreteCompany::LineOfDuty()
{
    vector<Company*>::iterator p = m_company.begin();
    while (p != m_company.end()) {
        (*p)->LineOfDuty();
        p++;
    }
}

void HrDepartment::add(Company* c)
{
    cout << "error" << endl;
}
void HrDepartment::display(int nDepth)
{
    string strtemp;

    for (int i = 0; i < nDepth; i++)
        strtemp += "-";

    strtemp += m_strName;
    cout << strtemp << endl;
}
void HrDepartment::LineOfDuty()
{
    cout << m_strName << ":Recruit talent" << endl;
}