#pragma once
#include "Employee.h"

// 业务员
class CommissionEmployee :public Employee
{
public:
	CommissionEmployee();
	CommissionEmployee(int id, string name, string phone, string depart, double grossSales, double commsionRate);
	~CommissionEmployee();
	double grossSales; //销售额
	double commissionRate; //提成比例
	void toString();
	void makeSalary();
};

