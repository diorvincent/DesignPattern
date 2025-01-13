#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//抽象的网站
class WebSite
{
public:
	virtual void use() = 0;
};

//具体的共享网站
class ConcreteWebSite : public WebSite
{
private:
	string name;
public:
	ConcreteWebSite(string strName)
	{
		name = strName;
	}
	virtual void use()
	{
		cout << "网站分类:" << endl;
	}
};

//共享的网站
class ShareWebSite : public WebSite
{
private:
	string name;
public:
	ShareWebSite(string strName)
	{
		name = strName;
	}
	virtual void use()
	{
		cout << "共享的网站" << endl;
	}
};

//不共享的网站
class UnShareWebSite : public WebSite
{
private:
	string name;
public:
	UnShareWebSite(string strName)
	{
		name = strName;
	}
	virtual void use()
	{
		cout << "不共享的网站" << endl;
	}
};

//网站共享类，用于存放共享的website对象
class WebFactory
{
private:
	vector<WebSite*> website;
public:
	WebSite* GetWeb()
	{
		vector<WebSite*>::iterator p = website.begin();
		while (p != website.end())
		{
		   (*p)->use(); 
			p++;
		}
		return nullptr; // *p;
	}

	WebFactory()
	{
		website.push_back(new ConcreteWebSite("测试1"));
		website.push_back(new ShareWebSite("测试2"));
		website.push_back(new UnShareWebSite("测试3"));
	}
};
