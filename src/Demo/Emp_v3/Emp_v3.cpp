// Emp_v3.cpp : 定义控制台应用程序的入口点。
//
/*
v1 版本为最基本的版本，员工信息仅包含员工基本姓名，且只针对数组进行增删改查的操作
v2 在字符串数组的基础上实现的文件的读取和保存
v3 使用面向对象设计，实现对象的二进制序列号保存和读取
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

