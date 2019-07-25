#include "stdafx.h"
#include "EmpList.h"


EmpList::EmpList()
{
	maxSize = 5;
	employeeList = new Employee*[maxSize];
	size = 0;
}


EmpList::~EmpList()
{
}

void EmpList::addEmp(Employee* emp)
{
	// 判断容器是否已满，已满的话则需要扩容
	if (size == maxSize)
	{
		Employee** tempList = new Employee*[size];
		for (int i = 0; i < size; i++)
		{
			tempList[i] = employeeList[i];
		}
		maxSize *= 2;
		// 扩容
		employeeList = new Employee*[maxSize];
		for (int i = 0; i < size; i++)
		{
			employeeList[i] = tempList[i];
		}
		delete[] tempList;
	}
	employeeList[size] = emp;
	size++;
	cout << "添加成功！" << endl;
}

void EmpList::deleteEmp(string name)
{
	int index = -1;
	// 找到指定员工的索引位置
	for (int i = 0; i < size; i++)
	{
		if (employeeList[i]->name == name)
		{
			index = i;// 找到员工 跳出循环
			break;
		}
	}

	if (index == -1)
	{
		cout << "未找到该员工" << endl;
	}

	// 将该员工移除，即后面所有员工往前移动一位
	for (int i = index; i < size; i++)
	{
		// 删除的恰好是最后一位
		if (i + 1 == size)
		{
			employeeList[i] = nullptr;
		}
		else
		{
			employeeList[i] = employeeList[i + 1];
		}
	}
	cout << "删除成功！" << endl;
	size--;//人数减少一个
}

void EmpList::updateEmp(string name, Employee * emp)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (employeeList[i]->name == name)
		{
			index = i;
			employeeList[i] = emp;
			cout << "更新成功！" << endl;
			break;
		}
	}
	if (index == -1)
	{
		cout << "未找到需要修改的员工" << endl;
	}
}

int EmpList::findEmp(string name)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (employeeList[i]->name == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

void EmpList::showList()
{
	cout << "编号\t姓名\t电话\t部门" << endl;
	for (int i = 0; i < size; i++)
	{
		if (employeeList[i] == nullptr)
		{
			break;
		}
		cout << employeeList[i]->id << "\t" << employeeList[i]->name << "\t"
			<< employeeList[i]->phone << "\t" << employeeList[i]->depart << endl;
	}
}

int EmpList::getSize()
{
	return size;
}