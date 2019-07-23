#include "stdafx.h"
#include "HourEmployee.h"


HourEmployee::HourEmployee()
{
}

// 调用父类的自定义构造方法
HourEmployee::HourEmployee(int id, string name, string phone, string depart, double hourlyWage, double hours)
	:Employee::Employee(id, name, phone, depart)
{
	this->hourlyWage = hourlyWage;
	this->hours = hours;
}

HourEmployee::~HourEmployee()
{
}

void HourEmployee::toString()
{
	Employee::toString();
	cout << ",时薪：" << hourlyWage << ",工作小时：" << hours;
}

void HourEmployee::makeSalary()
{
	cout << name << "的小时工资为：" << hourlyWage*hours << "元" << endl;
}