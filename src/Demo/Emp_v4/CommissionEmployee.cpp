#include "stdafx.h"
#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{
}

// ���ø�����Զ��幹�췽��
CommissionEmployee::CommissionEmployee(int id, string name, string phone, string depart, double grossSales, double commissionRate)
	:Employee::Employee(id, name, phone, depart)
{
	this->grossSales = grossSales;
	this->commissionRate = commissionRate;
}


CommissionEmployee::~CommissionEmployee()
{
}

void CommissionEmployee::toString()
{
	Employee::toString();
	cout << ",���۶" << grossSales << ",��ɱ�����" << commissionRate;
}

void CommissionEmployee::makeSalary()
{
	cout << name << "�����۹���Ϊ��" << grossSales*commissionRate << "Ԫ" << endl;
}