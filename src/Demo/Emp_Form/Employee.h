#pragma once
public class Employee
{
public:
	Employee();
	Employee(int id, string name, string phone, string depart);
	~Employee();
	int id;//编号
	string name;//姓名
	string phone;//电话
	string depart;//部门
	void toString();
	virtual void makeSalary(); //计算工资，虚函数
};

