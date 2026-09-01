#include"SalesPerson.h"
#include"Manager.h"


class PrintoScreen
{
public:
	static void displayDetails(Employee* eptr)
	{
		eptr->display();
		cout << "\n the computed salary is " << eptr->computesalary();

		//RTTI- run time type identification and downcasting
		//downcasting is performed for invoking special methods using derived class pointer

		//typeid operator check the runtime type of eptr
		if (typeid(*eptr) == typeid(Manager))
		{
			Manager* mptr = dynamic_cast<Manager*>(eptr);
			//dynamic cast operator perform a downcasting
			//of a generic pointer eptr type Employee* to Manager*
			mptr->payBonus();
		}

		if (typeid(*eptr) == typeid(SalesPerson))
		{
			SalesPerson* sptr = dynamic_cast<SalesPerson*>(eptr);
			sptr->payTravelAll();
		}
	}
};

int main()
{

	/*SalesPerson sp1;
	sp1.accept();
	sp1.display();*/


	SalesPerson sp2("john", 67000, 12, 3, 2025, 10000, 0.10);
	cout << "\n SP2-----------------";

	PrintoScreen::displayDetails(&sp2);

	//sp2.display();  //compile time binding
	//cout<<"\n the comouted salary is "<<sp2.computesalary();
	//compile time type of an object is check to associate 
	//the function with class. here display() is invoked from
	//SalesPerson

	//Manager m1;
	//m1.display();  //display() invoked from Manager

	Manager m2("Kim", 89000, 3, 4, 2022, 50000);
	cout << "\n M2-----------------";
	PrintoScreen::displayDetails(&m2);


	//m2.display(); //display() invoked from Manager
	//cout << "\n the comouted salary is " << m2.computesalary();



}