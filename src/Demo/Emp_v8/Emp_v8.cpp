// Emp_v8.cpp : 定义控制台应用程序的入口点。
//
/*
v1 版本为最基本的版本，员工信息仅包含员工基本姓名，且只针对数组进行增删改查的操作
v2 在字符串数组的基础上实现的文件的读取和保存
v3 使用面向对象设计，实现对象的二进制序列号保存和读取
v4-5 在面向对象的基础上，增加继承的应用，从员工类Employee派生出SalaryEmployee、HourEmployee、CommissionEmployee不同类型
通过计算工资方式进行多态的实践应用
v6-7 在v3基础上基于顺序表实现，并对编号进行冒泡排序
v8 在v3基础上，使用向量vector方式实现
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

