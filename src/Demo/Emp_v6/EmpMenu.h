#pragma once
#include "EmpList.h"

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
	EmpList empList;// ����Ա������
	bool isExist;// ѭ����ǣ��Ƿ��˳�ϵͳ
};

