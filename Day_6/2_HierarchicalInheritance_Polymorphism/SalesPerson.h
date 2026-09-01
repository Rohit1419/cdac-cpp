#pragma once
#include"Employee.h"

class SalesPerson :public Employee
{
private:
	int nos;
	double comm;
public:
	SalesPerson()
	{
		nos = 0;
		comm = 0.0;
	}

	SalesPerson(string name,double salary,int dd,int mm, int yy,int nos,double comm)
		:Employee(name,salary,dd,mm,yy)
	{
		this->nos = nos;
		this->comm = comm;
	}

	void display()
	{
		Employee::display();
		cout << "\n Nos-" << nos;
		cout << "\n Comm-" << comm;
	}
	void accept()
	{
		Employee::accept();
		cout << "\n enter nos:";
		cin >>nos;
		cout << "\n enter th comm:";
		cin >> comm;
	}

	double computesalary()
	{
		return salary + (nos * comm);
	}
};
