// Emp_v8.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
v1 �汾Ϊ������İ汾��Ա����Ϣ������Ա��������������ֻ������������ɾ�Ĳ�Ĳ���
v2 ���ַ�������Ļ�����ʵ�ֵ��ļ��Ķ�ȡ�ͱ���
v3 ʹ�����������ƣ�ʵ�ֶ���Ķ��������кű���Ͷ�ȡ
v4-5 ���������Ļ����ϣ����Ӽ̳е�Ӧ�ã���Ա����Employee������SalaryEmployee��HourEmployee��CommissionEmployee��ͬ����
ͨ�����㹤�ʷ�ʽ���ж�̬��ʵ��Ӧ��
v6-7 ��v3�����ϻ���˳���ʵ�֣����Ա�Ž���ð������
v8 ��v3�����ϣ�ʹ������vector��ʽʵ��
*/

#include "stdafx.h"
#include "EmpMenu.h"


int main()
{
	EmpMenu menu;
	while (true)
	{
		menu.start();
		if (menu.isExist)
		{
			break;
		}
	}
	return 0;
}

