#pragma once
#include "Employee.h"

// ¡Ÿ ±π§
class SalaryEmployee :public Employee
{
public:
	SalaryEmployee();
	SalaryEmployee(int id, string name, string phone, string depart, double weeklySalary);
	~SalaryEmployee();
	double weeklySalary; //÷‹–Ω
	void toString();
	void makeSalary();
};

