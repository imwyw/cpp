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
	cout << "��ţ�" << id << ",������" << name << ",�ֻ��ţ�" << phone << ",���ţ�" << depart;
}

void Employee::makeSalary()
{
	cout << "Ĭ�Ϲ��ʣ�0Ԫ" << endl;
}
