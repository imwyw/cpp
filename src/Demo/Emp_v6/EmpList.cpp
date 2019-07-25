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
	// �ж������Ƿ������������Ļ�����Ҫ����
	if (size == maxSize)
	{
		Employee** tempList = new Employee*[size];
		for (int i = 0; i < size; i++)
		{
			tempList[i] = employeeList[i];
		}
		maxSize *= 2;
		// ����
		employeeList = new Employee*[maxSize];
		for (int i = 0; i < size; i++)
		{
			employeeList[i] = tempList[i];
		}
		delete[] tempList;
	}
	employeeList[size] = emp;
	size++;
	cout << "��ӳɹ���" << endl;
}

void EmpList::deleteEmp(string name)
{
	int index = -1;
	// �ҵ�ָ��Ա��������λ��
	for (int i = 0; i < size; i++)
	{
		if (employeeList[i]->name == name)
		{
			index = i;// �ҵ�Ա�� ����ѭ��
			break;
		}
	}

	if (index == -1)
	{
		cout << "δ�ҵ���Ա��" << endl;
	}

	// ����Ա���Ƴ�������������Ա����ǰ�ƶ�һλ
	for (int i = index; i < size; i++)
	{
		// ɾ����ǡ�������һλ
		if (i + 1 == size)
		{
			employeeList[i] = nullptr;
		}
		else
		{
			employeeList[i] = employeeList[i + 1];
		}
	}
	cout << "ɾ���ɹ���" << endl;
	size--;//��������һ��
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
			cout << "���³ɹ���" << endl;
			break;
		}
	}
	if (index == -1)
	{
		cout << "δ�ҵ���Ҫ�޸ĵ�Ա��" << endl;
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
	cout << "���\t����\t�绰\t����" << endl;
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