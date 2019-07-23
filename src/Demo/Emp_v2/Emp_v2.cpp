// Emp_v2.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
v1 �汾Ϊ������İ汾��Ա����Ϣ������Ա��������������ֻ������������ɾ�Ĳ�Ĳ���
v2 ���ַ�������Ļ�����ʵ�ֵ��ļ��Ķ�ȡ�ͱ���
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

	cout << "��ӭʹ��xxԱ������ϵͳ V2.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.���Ա��" << endl;
	cout << "2.ɾ��Ա��" << endl;
	cout << "3.�޸�Ա��" << endl;
	cout << "4.����Ա��" << endl;
	cout << "5.Ա���б�" << endl;
	cout << "6.����Ա��" << endl;
	cout << "7.��ȡԱ���б�" << endl;
	cout << "8.�˳�" << endl;
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
	case 6:
		cout << "����Ա��" << endl;
		save();
		break;
	case 7:
		cout << "��ȡԱ���б�" << endl;
		load();
		break;
	case 8:
		isExist = true;
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
	PAUSE;
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

void save()
{
	// ������Ϣ���ڴ�->Ӳ��,ios::out
	ofstream ofs("emp.txt", ios::out);
	if (ofs)
	{
		cout << "�ļ��򿪳ɹ���" << endl;
		for (int i = 0; i < size(employees); i++)
		{
			if (employees[i] == "")
			{
				break;
			}
			ofs << employees[i] << endl;
		}
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	ofs.close();
	PAUSE;
}

void load()
{
	// ��ȡ��Ϣ���ڴ� <- Ӳ��
	ifstream ifs("emp.txt", ios::in);
	if (ifs)
	{
		int index = 0;
		string line;
		while (getline(ifs, line))
		{
			employees[index++] = line;
		}
		cout << "��ȡ��ɣ�" << endl;
	}
	else
	{
		cout << "�ļ���ʧ�ܣ��޷���ȡ��Ϣ��" << endl;
	}
	ifs.close();
	PAUSE;
}