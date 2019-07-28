#include "stdafx.h"
#include "Employee.h"

Employee::Employee() {}

Employee::~Employee() {}

Employee::Employee(int id, string name, string phone, string depart, int headerIndex)
{
	this->id = id;
	this->name = name;
	this->phone = phone;
	this->depart = depart;
	this->headerIndex = headerIndex;
}

void Employee::toString()
{
	cout << "编号：" << id << ",姓名：" << name << ",手机号：" << phone << ",部门：" << depart;
}

void Employee::makeSalary()
{
	cout << "默认工资：0元" << endl;
}
