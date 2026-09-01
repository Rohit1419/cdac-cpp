#include"SalesPerson.h"
#include"Manager.h"


class PrintoScreen
{
public:
	static void displayDetails(Employee* eptr)
	{
		eptr->display();
		cout << "\n the computed salary is " << eptr->computesalary();
	}
};

int main()
{

	/*SalesPerson sp1;
	sp1.accept();
	sp1.display();*/


	SalesPerson sp2("john", 67000, 12, 3, 2025, 10000, 0.10);
	cout << "\n SP2-----------------";


		SalesPerson &sp2ref = sp2;

			sp2ref.display();


			// PrintoScreen::displayDetails(&sp2);

	// sp2.display();  //compile time binding
	// cout<<"\n the comouted salary is "<<sp2.computesalary();
	//compile time type of an object is check to associate 
	//the function with class. here display() is invoked from
	//SalesPerson

	//Manager m1;
	//m1.display();  //display() invoked from Manager

	Manager m2("Kim", 89000, 3, 4, 2022, 50000);
	cout << "\n M2-----------------";
	// PrintoScreen::displayDetails(&m2);


	//m2.display(); //display() invoked from Manager
	//cout << "\n the comouted salary is " << m2.computesalary();



}