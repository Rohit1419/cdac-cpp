#pragma once

#include"Date.h"

class Employee
{
protected:
	int id;
	string name;
	double salary;
	Date doj;

	static int count;
public:
	Employee()
	{
		count++;
		id = count;
		name = "NA";
		salary = 0.0;
	}

	Employee(string name, double salary, int dd, int mm, int yy)
		:doj(dd,mm,yy)
	{
		count++;
		this->id = count;
		this->name = name;
		this->salary = salary;
	}

	void accept()
	{
		cout << "Enter the name:";
		cin >> name;
		cout << "\n enter the salary:";
		cin >> salary;
		doj.acceptDate();
	}

	virtual void display()
	{
		cout << "\n the details aare::----------";
		cout << "\n id-" << id;
		cout << "\n name-" << name;
		cout << "\n salary-" << salary;
		doj.displayDate();
	}

	virtual double computesalary()
	{
		return salary;
	}
};


int Employee::count = 0;