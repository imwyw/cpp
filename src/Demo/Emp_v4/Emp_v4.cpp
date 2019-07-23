// Emp_v4.cpp : 定义控制台应用程序的入口点。
//
/*
v1 版本为最基本的版本，员工信息仅包含员工基本姓名，且只针对数组进行增删改查的操作
v2 在字符串数组的基础上实现的文件的读取和保存
v3 使用面向对象设计，实现对象的二进制序列号保存和读取
v4 在面向对象的基础上，增加继承的应用，从员工类Employee派生出SalaryEmployee、HourEmployee、CommissionEmployee不同类型
	通过计算工资方式进行多态的实践应用
*/

#include "stdafx.h"
#include "EmpMenu.h"

#include "SalaryEmployee.h"
#include "HourEmployee.h"
#include "CommissionEmployee.h"

int main()
{
	/*
	继承测试

	SalaryEmployee *semp = new SalaryEmployee(1, "jack", "12306", "内科", 1500);
	HourEmployee *hemp = new HourEmployee(2, "lucy", "12313", "保卫科", 100, 20);
	CommissionEmployee *cemp = new CommissionEmployee(3, "will", "12315", "门诊", 20000, 0.1);

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

