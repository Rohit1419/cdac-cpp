#include"FootballPlayer.h"
#include"CricketPlayer.h"


class PrintToScreen
{
public:
	static void displayDetails(Player* ptr)
	{
		ptr->display();
		ptr->play();

		if (typeid(*ptr) == typeid(CricketPlayer))
		{
			CricketPlayer* cptr;
			cptr = dynamic_cast<CricketPlayer*>(ptr);
			cptr->batting();
		}
		if (typeid(*ptr) == typeid(FootballPlayer))
		{
			FootballPlayer* cptr;
			cptr = dynamic_cast<FootballPlayer*>(ptr);
			cptr->strike();
		}
	}
};

int main()
{
	/*CricketPlayer cp1("Virat", 100);
	PrintToScreen::displayDetails(&cp1);

	FootballPlayer p2("Messi", 927);
	PrintToScreen::displayDetails(&p2);*/


	Player** parr;
	int nop;

	cout << "\n enter the no of player:";
	cin >> nop;  //3

	parr = new Player*[nop];  //array of pointers  to player instances

	int choice;
	for (int i = 0; i < nop; i++)
	{
		cout << "\n 1. Cricket Player \n 2. football player";
		cout << "entr the choice:";
		cin >> choice;
		int noOfRuns;
		string name;
		int noOfGoals;
		switch (choice)
		{
		case 1:
			
			cout << "\n enter the details:";
			cin >> name >> noOfRuns;
			parr[i] = new CricketPlayer(name, noOfRuns);
			break;
		case 2:
			cout << "\n enter the details:";
			cin >> name >> noOfGoals;
			parr[i] = new FootballPlayer(name, noOfGoals);
			break;
		}
		
	}

	for (int i = 0; i < nop; i++)
	{
		PrintToScreen::displayDetails(parr[i]);
	}

	for (int i = 0; i < nop; i++)
	{
		delete parr[i];
	}
	delete[] parr;

}