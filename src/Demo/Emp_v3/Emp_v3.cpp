// Emp_v3.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
v1 �汾Ϊ������İ汾��Ա����Ϣ������Ա��������������ֻ������������ɾ�Ĳ�Ĳ���
v2 ���ַ�������Ļ�����ʵ�ֵ��ļ��Ķ�ȡ�ͱ���
v3 ʹ�����������ƣ�ʵ�ֶ���Ķ��������кű���Ͷ�ȡ
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
}

