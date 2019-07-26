#pragma once
#include "Employee.h"

class EmpMenu
{
public:
	EmpMenu();
	~EmpMenu();
	void start();//�����˵�
	bool addEmp(Employee* emp);
	bool deleteEmp(string name);
	bool updateEmp(string name, Employee* emp);
	int findEmp(string name);
	void list();
	void saveData();
	void loadData();
	Employee* employeeArray[20];//����Ա����Ϣ
	vector<Employee*> employeesVector;
	bool isExist;// ѭ����ǣ��Ƿ��˳�ϵͳ
};

