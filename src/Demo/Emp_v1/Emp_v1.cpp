// Emp_v1.cpp : �������̨Ӧ�ó������ڵ㡣
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

	cout << "��ӭʹ��xxԱ������ϵͳ V1.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.���Ա��" << endl;
	cout << "2.ɾ��Ա��" << endl;
	cout << "3.�޸�Ա��" << endl;
	cout << "4.����Ա��" << endl;
	cout << "5.Ա���б�" << endl;
	cout << "---------------------------" << endl;
	cout << "��ѡ��" << endl;
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "���Ա��" << endl;
		addEmp();
		break;
	case 2:
		cout << "ɾ��Ա��" << endl;
		deleteEmp();
		break;
	case 3:
		cout << "�޸�Ա��" << endl;
		updateEmp();
		break;
	case 4:
		cout << "����Ա��" << endl;
		findEmpUI();
		break;
	case 5:
		cout << "Ա���б�" << endl;
		listEmp();
		break;
	default:
		cout << "��������ȷ��ѡ��" << endl;
		break;
	}
}

void addEmp()
{
	string name;
	cout << "������Ա��������" << endl;
	cin >> name;
	for (int i = 0; i < size(employees); i++)
	{
		if ("" == employees[i])
		{
			employees[i] = name;
			break;
		}
	}
	cout << "���Ա���ɹ���" << endl;
	PAUSE;
}

void listEmp()
{
	cout << "���\t����" << endl;
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
	int index = -1;//��¼�ҵ�������λ��
	cout << "������Ҫɾ��Ա����������" << endl;
	cin >> name;

	// �ҵ�ָ��Ա��������λ��
	for (int i = 0; i < size(employees); i++)
	{
		if (employees[i] == name)
		{
			index = i;// �ҵ�Ա�� ����ѭ��
			break;
		}
	}

	if (index == -1)
	{
		cout << "δ�ҵ���Ա��" << endl;
		return;
	}

	// ����Ա���Ƴ�������������Ա����ǰ�ƶ�һλ
	for (int i = index; i < size(employees); i++)
	{
		// ɾ����ǡ�������һλ
		if (i + 1 == size(employees))
		{
			employees[i] = "";
		}
		// �������Ԫ��Ϊ��
		else if (employees[i + 1] == "") {
			employees[i] = "";
			break;
		}
		else
		{
			employees[i] = employees[i + 1];
		}
	}
	cout << "ɾ���ɹ���" << endl;
	PAUSE;
}

void updateEmp()
{
	int index = findEmp();
	if (index > -1)
	{
		string name;
		cout << "�������µ�Ա��������" << endl;
		cin >> name;
		employees[index] = name;
		cout << "���³ɹ���" << endl;
	}
	else
	{
		cout << "δ�ҵ���Ա���������Ϣ��" << endl;
	}
	PAUSE;
}

int findEmp()
{
	string name;
	cout << "������Ա��������" << endl;
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
	cout << "����Ա��" << endl;
	int index = findEmp();
	if (index > -1)
	{
		cout << "��Ա�����Ϊ" << (index + 1) << endl;
	}
	else
	{
		cout << "δ�ҵ���Ա����" << endl;
	}
	PAUSE;
}