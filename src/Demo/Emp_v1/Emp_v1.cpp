// Emp_v1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int number;

string employees[20];

void menu();
void addEmp();
void deleteEmp();
void listEmp();
void updateEmp();
void findEmpUI();
int findEmp();

int main()
{
	while (true)
	{
		menu();
	}
	return 0;
}

void menu()
{

	cout << "欢迎使用xx员工管理系统 V1.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.添加员工" << endl;
	cout << "2.删除员工" << endl;
	cout << "3.修改员工" << endl;
	cout << "4.查找员工" << endl;
	cout << "5.员工列表" << endl;
	cout << "---------------------------" << endl;
	cout << "请选择：" << endl;
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "添加员工" << endl;
		addEmp();
		break;
	case 2:
		cout << "删除员工" << endl;
		deleteEmp();
		break;
	case 3:
		cout << "修改员工" << endl;
		updateEmp();
		break;
	case 4:
		cout << "查找员工" << endl;
		findEmpUI();
		break;
	case 5:
		cout << "员工列表" << endl;
		listEmp();
		break;
	default:
		cout << "请输入正确的选项" << endl;
		break;
	}
}

void addEmp()
{
	string name;
	cout << "请输入员工姓名：" << endl;
	cin >> name;
	for (int i = 0; i < size(employees); i++)
	{
		if ("" == employees[i])
		{
			employees[i] = name;
			break;
		}
	}
	cout << "添加员工成功！" << endl;
	PAUSE;
}

void listEmp()
{
	cout << "编号\t姓名" << endl;
	for (int i = 0; i < size(employees); i++)
	{
		if ("" == employees[i])
		{
			break;
		}
		cout << (i + 1) << "\t" << employees[i] << endl;
	}
	cin.get();
}

void deleteEmp()
{
	string name;
	int index = -1;//记录找到的索引位置
	cout << "请输入要删除员工的姓名：" << endl;
	cin >> name;

	// 找到指定员工的索引位置
	for (int i = 0; i < size(employees); i++)
	{
		if (employees[i] == name)
		{
			index = i;// 找到员工 跳出循环
			break;
		}
	}

	if (index == -1)
	{
		cout << "未找到该员工" << endl;
		return;
	}

	// 将该员工移除，即后面所有员工往前移动一位
	for (int i = index; i < size(employees); i++)
	{
		// 删除的恰好是最后一位
		if (i + 1 == size(employees))
		{
			employees[i] = "";
		}
		// 如果后面元素为空
		else if (employees[i + 1] == "") {
			employees[i] = "";
			break;
		}
		else
		{
			employees[i] = employees[i + 1];
		}
	}
	cout << "删除成功！" << endl;
	PAUSE;
}

void updateEmp()
{
	int index = findEmp();
	if (index > -1)
	{
		string name;
		cout << "请输入新的员工姓名：" << endl;
		cin >> name;
		employees[index] = name;
		cout << "更新成功！" << endl;
	}
	else
	{
		cout << "未找到该员工的相关信息！" << endl;
	}
	PAUSE;
}

int findEmp()
{
	string name;
	cout << "请输入员工姓名：" << endl;
	cin >> name;
	int index = -1;
	for (int i = 0; i < size(employees); i++)
	{
		if (employees[i] == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

void findEmpUI()
{
	cout << "查找员工" << endl;
	int index = findEmp();
	if (index > -1)
	{
		cout << "该员工编号为" << (index + 1) << endl;
	}
	else
	{
		cout << "未找到该员工！" << endl;
	}
	PAUSE;
}