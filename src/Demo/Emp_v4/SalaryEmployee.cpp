#include "stdafx.h"
#include "SalaryEmployee.h"


SalaryEmployee::SalaryEmployee()
{
}

// 调用父类的自定义构造方法
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
	cout << ",周薪：" << weeklySalary;
}

void SalaryEmployee::makeSalary()
{
	cout << name << "的周薪为：" << weeklySalary << "元" << endl;
}