#include "stdafx.h"
#include "SalaryEmployee.h"


SalaryEmployee::SalaryEmployee()
{
}

// ���ø�����Զ��幹�췽��
SalaryEmployee::SalaryEmployee(int id, string name, string phone, string depart, double weeklySalary)
	:Employee::Employee(id, name, phone, depart)
{
	this->weeklySalary = weeklySalary;
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::toString()
{
	Employee::toString();
	cout << ",��н��" << weeklySalary;
}

void SalaryEmployee::makeSalary()
{
	cout << name << "����нΪ��" << weeklySalary << "Ԫ" << endl;
}