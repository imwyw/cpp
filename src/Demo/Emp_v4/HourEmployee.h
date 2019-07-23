#pragma once
#include "Employee.h"

// Ð¡Ê±¹¤
class HourEmployee :public Employee
{
public:
	HourEmployee();
	HourEmployee(int id, string name, string phone, string depart, double hourlyWage, double hours);
	~HourEmployee();
	double hourlyWage;
	double hours;
	void toString();
	void makeSalary();
};

