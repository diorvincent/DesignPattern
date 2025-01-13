#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player
{
protected:
	string name;
public:
	Player(string strName) { name = strName; }
	virtual void Attack() = 0;
	virtual void Defence() = 0;
};

class Forwards : public Player
{
private:
	string m_strName;
public:
	Forwards(string strName) :Player(strName) { m_strName = strName; }

	virtual void Attack()
	{
		cout << m_strName << "前锋进攻" << endl;
	}
	virtual void Defence()
	{
		cout << m_strName<<"前锋防守\t\n" << endl;
	}
};

class Center : public Player
{
private:
	string m_strName;
public:
	Center(string strName):Player(strName) { m_strName = strName; }

	virtual void Attack()
	{
		cout << m_strName << "中场进攻" << endl;
	}
	virtual void Defence()
	{
		cout << m_strName << "中场防守\t\n" << endl;
	}
};

class Translater : public Player
{
private:
	Center* player;
	Forwards* player2;

public:
	Translater(string strName) : Player(strName)
	{
		player = new Center(strName);
		player2 = new Forwards(strName);
	}
	~Translater()
	{
		if(player!=nullptr)
			delete player;
		if (player2 != nullptr)
			delete player2;
	}

	virtual void Attack()
	{
		//player->Attack();
		player2->Attack();
	}

	virtual void Defence()
	{
		player->Defence();
		//player2->Defence();
	}
};