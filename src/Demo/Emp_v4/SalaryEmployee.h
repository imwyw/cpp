#pragma once
#include "Employee.h"

// ��ʱ��
class SalaryEmployee :public Employee
{
public:
	SalaryEmployee();
	SalaryEmployee(int id, string name, string phone, string depart, double weeklySalary);
	~SalaryEmployee();
	double weeklySalary; //��н
	void toString();
	void makeSalary();
};

