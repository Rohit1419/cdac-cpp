#include"SalesPerson.h"

int main()
{
	SalesPerson sp1;
	sp1.accept();
	sp1.display();


	SalesPerson sp2("john", 67000, 12, 3, 2025, 10000, 0.10);
	cout << "\n Sp2-----------------";
	sp2.display();  //compile time binding
	//compile time type of an object is check to associate 
	//the function with class. here display() is invoked from
	//SalesPerson


}