#include "stdafx.h"
#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{
}

// 调用父类的自定义构造方法
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
	cout << ",销售额：" << grossSales << ",提成比例：" << commissionRate;
}

void CommissionEmployee::makeSalary()
{
	cout << name << "的销售工资为：" << grossSales*commissionRate << "元" << endl;
}