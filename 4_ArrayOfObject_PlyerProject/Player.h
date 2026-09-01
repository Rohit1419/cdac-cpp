#pragma once
#include<iostream>
using namespace std;

class Player
{
protected:
	int id;
	string name;
	static int count;
public:
	Player(string name)
	{
		count++;
		this->id = count;
		this->name = name;
	}
	virtual void accept()
	{
		cout << "\n enter the namee:";
		cin >> name;
	}

	virtual void display()
	{
		cout << "\n the detaila are-------";
		cout << "\n id-" << id;
		cout << "\n name-" << name;
	}
	virtual void play()
	{
		cout << "\n " << name << " is playing";
	}
};

int Player::count = 0;