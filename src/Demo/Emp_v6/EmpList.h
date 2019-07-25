#pragma once
#include "Employee.h"

class EmpList
{
private:
	Employee** employeeList;//���Ա��������ָ��ָ���ָ��
	int size;//��ǰ�����е�Ա������
	int maxSize;
public:
	EmpList();
	~EmpList();
	void addEmp(Employee* emp);
	void deleteEmp(string name);
	void updateEmp(string name, Employee* emp);
	int findEmp(string name);
	void showList();
	int getSize();
};

