#pragma once
public class Employee
{
public:
	Employee();
	Employee(int id, string name, string phone, string depart);
	~Employee();
	int id;//���
	string name;//����
	string phone;//�绰
	string depart;//����
	void toString();
	virtual void makeSalary(); //���㹤�ʣ��麯��
};

