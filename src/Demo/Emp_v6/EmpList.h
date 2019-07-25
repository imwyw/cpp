#pragma once
#include "Employee.h"

class EmpList
{
private:
	Employee** employeeList;//存放员工容器，指向指针的指针
	int size;//当前容器中的员工数量
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

