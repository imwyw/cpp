// Emp_v4.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
v1 �汾Ϊ������İ汾��Ա����Ϣ������Ա��������������ֻ������������ɾ�Ĳ�Ĳ���
v2 ���ַ�������Ļ�����ʵ�ֵ��ļ��Ķ�ȡ�ͱ���
v3 ʹ�����������ƣ�ʵ�ֶ���Ķ��������кű���Ͷ�ȡ
v4 ���������Ļ����ϣ����Ӽ̳е�Ӧ�ã���Ա����Employee������SalaryEmployee��HourEmployee��CommissionEmployee��ͬ����
	ͨ�����㹤�ʷ�ʽ���ж�̬��ʵ��Ӧ��
*/

#include "stdafx.h"
#include "EmpMenu.h"

#include "SalaryEmployee.h"
#include "HourEmployee.h"
#include "CommissionEmployee.h"

int main()
{
	/*
	�̳в���

	SalaryEmployee *semp = new SalaryEmployee(1, "jack", "12306", "�ڿ�", 1500);
	HourEmployee *hemp = new HourEmployee(2, "lucy", "12313", "������", 100, 20);
	CommissionEmployee *cemp = new CommissionEmployee(3, "will", "12315", "����", 20000, 0.1);

	semp->toString();
	cout << endl;
	hemp->toString();
	cout << endl;
	cemp->toString();
	cout << endl;

	Employee* arr[3] = { semp,hemp,cemp };
	for (int i = 0; i < size(arr); i++)
	{
		arr[i]->makeSalary();
	}
	*/

	EmpMenu menu;
	while (true)
	{
		menu.start();
		if (menu.isExist)
		{
			break;
		}
	}
}

