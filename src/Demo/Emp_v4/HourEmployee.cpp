#include "stdafx.h"
#include "HourEmployee.h"


HourEmployee::HourEmployee()
{
}

// ���ø�����Զ��幹�췽��
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
	cout << ",ʱн��" << hourlyWage << ",����Сʱ��" << hours;
}

void HourEmployee::makeSalary()
{
	cout << name << "��Сʱ����Ϊ��" << hourlyWage*hours << "Ԫ" << endl;
}