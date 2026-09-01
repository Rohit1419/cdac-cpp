#pragma once
#include"Player.h"


class CricketPlayer :public Player
{
private:
	int noOfRuns;
public:
	CricketPlayer(string name, int noOfRuns)
		:Player(name)
	{
		this->noOfRuns = noOfRuns;
	}

	void display()
	{
		Player::display();
		cout << "\n No of Runs-" << this->noOfRuns;
	}

	void play()
	{
		cout << "\n " << name << " is playing cricket";
	}

	void batting()
	{
		cout << "\n " << name << " is batting";
	}
};