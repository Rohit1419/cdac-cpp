#pragma once
#include"Player.h"

class FootballPlayer :public Player
{
private:
	int noOfGoals;
public:
	FootballPlayer(string name, int noOfGoals)
		:Player(name)
	{
		this->noOfGoals = noOfGoals;
	}
	void display()
	{
		Player::display();
		cout << "\n the no of goals is-" << this->noOfGoals;
	}
	void play()
	{
		cout << "\n " << name << " is playing football";
	}
	void strike()
	{
		cout << "\n player is platin in forwd position";
	}
};
