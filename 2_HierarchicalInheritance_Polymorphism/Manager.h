#pragma once
#include"Employee.h"

class Manager :public Employee
{
private:
	double incentives;
public:
	Manager()
	{
		incentives = 0.0;
	}
	Manager(string name, double salary, int dd, int mm, int yy, double incentives)
		:Employee(name,salary,dd,mm,yy)
	{
		this->incentives = incentives;
	}

	void accept()
	{
		Employee::accept();
		cout << "\n enter the incentives:";
		cin >> incentives;
	}

	void display()
	{
		Employee::display();
		cout << "\n incentives-" << incentives;
	}

	double computesalary()
	{
		return  salary + incentives;
	}
};


