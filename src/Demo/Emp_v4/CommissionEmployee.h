#pragma once
#include "Employee.h"

// ҵ��Ա
class CommissionEmployee :public Employee
{
public:
	CommissionEmployee();
	CommissionEmployee(int id, string name, string phone, string depart, double grossSales, double commsionRate);
	~CommissionEmployee();
	double grossSales; //���۶�
	double commissionRate; //��ɱ���
	void toString();
	void makeSalary();
};

