#pragma once
#include "Employee.h"

class EmpMenu
{
public:
	EmpMenu();
	~EmpMenu();
	void start();//启动菜单
	bool addEmp(Employee* emp);
	bool deleteEmp(string name);
	bool updateEmp(string name, Employee* emp);
	int findEmp(string name);
	void list();
	void saveData();
	void loadData();
	Employee* employeeArray[20];//保存员工信息
	vector<Employee*> employeesVector;
	bool isExist;// 循环标记，是否退出系统
};

