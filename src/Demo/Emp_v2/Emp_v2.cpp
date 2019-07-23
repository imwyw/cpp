// Emp_v2.cpp : 定义控制台应用程序的入口点。
//
/*
v1 版本为最基本的版本，员工信息仅包含员工基本姓名，且只针对数组进行增删改查的操作
v2 在字符串数组的基础上实现的文件的读取和保存
*/

#include "stdafx.h"
int number;

string employees[20];
bool isExist = false;

void menu();
void addEmp();
void deleteEmp();
void listEmp();
void updateEmp();
void findEmpUI();
int findEmp();
void save();
void load();

int main()
{
	while (!isExist)
	{
		menu();
	}
	return 0;
}

void menu()
{

	cout << "欢迎使用xx员工管理系统 V2.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.添加员工" << endl;
	cout << "2.删除员工" << endl;
	cout << "3.修改员工" << endl;
	cout << "4.查找员工" << endl;
	cout << "5.员工列表" << endl;
	cout << "6.保存员工" << endl;
	cout << "7.读取员工列表" << endl;
	cout << "8.退出" << endl;
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
	case 6:
		cout << "保存员工" << endl;
		save();
		break;
	case 7:
		cout << "读取员工列表" << endl;
		load();
		break;
	case 8:
		isExist = true;
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
	PAUSE;
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

void save()
{
	// 保存信息，内存->硬盘,ios::out
	ofstream ofs("emp.txt", ios::out);
	if (ofs)
	{
		cout << "文件打开成功！" << endl;
		for (int i = 0; i < size(employees); i++)
		{
			if (employees[i] == "")
			{
				break;
			}
			ofs << employees[i] << endl;
		}
		cout << "保存成功！" << endl;
	}
	else
	{
		cout << "文件打开失败！" << endl;
	}
	ofs.close();
	PAUSE;
}

void load()
{
	// 读取信息，内存 <- 硬盘
	ifstream ifs("emp.txt", ios::in);
	if (ifs)
	{
		int index = 0;
		string line;
		while (getline(ifs, line))
		{
			employees[index++] = line;
		}
		cout << "读取完成！" << endl;
	}
	else
	{
		cout << "文件打开失败，无法读取信息！" << endl;
	}
	ifs.close();
	PAUSE;
}