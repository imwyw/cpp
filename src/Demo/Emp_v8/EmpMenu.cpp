#include "stdafx.h"
#include "EmpMenu.h"



EmpMenu::EmpMenu()
{
	for (int i = 0; i < size(employeeArray); i++)
	{
		employeeArray[i] = nullptr;
	}
	isExist = false;
}


EmpMenu::~EmpMenu()
{
}

void EmpMenu::start()
{
	int number = -1;

	cout << "��ӭʹ��xxԱ������ϵͳ V3.0" << endl;
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

	Employee *emp;
	string name;
	int index = -1;

	switch (number)
	{
	case 1:
		cout << "���Ա��" << endl;
		emp = new Employee();
		cout << "������Ա�����" << endl;
		cin >> emp->id;
		cout << "������Ա������" << endl;
		cin >> emp->name;
		cout << "������Ա���ֻ�" << endl;
		cin >> emp->phone;
		cout << "������Ա������" << endl;
		cin >> emp->depart;
		if (addEmp(emp))
		{
			cout << "��ӳɹ���" << endl;
		}
		else
		{
			cout << "���ʧ��" << endl;
		}
		PAUSE;
		break;
	case 2:
		cout << "ɾ��Ա��" << endl;
		cout << "������Ҫɾ��Ա����������" << endl;
		cin >> name;
		if (deleteEmp(name))
		{
			cout << "��ɾ��" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�" << endl;
		}
		PAUSE;
		break;
	case 3:
		cout << "�޸�Ա��" << endl;
		cout << "������Ҫ�޸�Ա����������";
		cin >> name;
		emp = new Employee();
		cout << "������Ա���±�ţ�" << endl;
		cin >> emp->id;
		cout << "������Ա����������" << endl;
		cin >> emp->name;
		cout << "������Ա�����ֻ���" << endl;
		cin >> emp->phone;
		cout << "������Ա���²��ţ�" << endl;
		cin >> emp->depart;
		if (updateEmp(name, emp))
		{
			cout << "���³ɹ���" << endl;
		}
		else
		{
			cout << "����ʧ�ܣ�" << endl;
		}
		PAUSE;
		break;
	case 4:
		cout << "����Ա��" << endl;
		cout << "������Ҫ��ѯԱ����������" << endl;
		cin >> name;
		index = findEmp(name);
		if (index > -1)
		{
			cout << "��Ա�����Ϊ" << (index + 1) << endl;
		}
		else
		{
			cout << "δ�ҵ���Ա����" << endl;
		}
		PAUSE;
		break;
	case 5:
		cout << "Ա���б�" << endl;
		list();
		PAUSE;
		break;
	case 6:
		cout << "����Ա��" << endl;
		saveData();

		break;
	case 7:
		cout << "��ȡԱ���б�" << endl;
		loadData();
		break;
	case 8:
		isExist = true;
		break;
	default:
		cout << "��������ȷ��ѡ��" << endl;
		break;
	}
}

bool EmpMenu::addEmp(Employee * emp)
{
	employeesVector.push_back(emp);
	return true;
}

bool EmpMenu::deleteEmp(string name)
{
	int index = -1;
	// �ҵ�ָ��Ա��������λ��
	for (int i = 0; i < employeesVector.size(); i++)
	{
		if (employeesVector[i]->name == name)
		{
			index = i;
			break;
		}
	}

	if (index == -1)
	{
		cout << "δ�ҵ���Ա��" << endl;
		return false;
	}

	employeesVector.erase(employeesVector.begin() + index);
	return true;
}

bool EmpMenu::updateEmp(string name, Employee * emp)
{
	for (int i = 0; i < employeesVector.size(); i++)
	{
		if (employeesVector[i]->name == name)
		{
			employeesVector[i] = emp;
			return true;
		}
	}
	return false;
}

int EmpMenu::findEmp(string name)
{
	cout << "������Ա��������" << endl;
	cin >> name;
	int index = -1;
	for (int i = 0; i < employeesVector.size(); i++)
	{
		if (employeesVector[i]->name == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

void EmpMenu::list()
{
	cout << "���\t����\t�绰\t����" << endl;
	for (int i = 0; i < employeesVector.size(); i++)
	{
		cout << employeesVector[i]->id << "\t" << employeesVector[i]->name << "\t"
			<< employeesVector[i]->phone << "\t" << employeesVector[i]->depart << endl;
	}

	cout << "ʹ�õ��������б���" << endl;
	Employee* emp;
	// ����һ��������
	vector<Employee*>::iterator it;
	for (it = employeesVector.begin(); it != employeesVector.end(); it++)
	{
		emp = *it;
		cout << emp->id << "\t" << emp->name << "\t" << emp->phone << "\t" << emp->depart << endl;
	}

}

void EmpMenu::saveData()
{
	ofstream ofs;
	ofs.open("data.bin", ios::binary);
	if (ofs)
	{
		for (int i = 0; i < employeesVector.size(); i++)
		{
			ofs.write((char*)employeesVector[i], sizeof(Employee));
		}
		ofs.close();
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ��!!!" << endl;
	}
}

void EmpMenu::loadData()
{
	ifstream ifs;
	ifs.open("data.bin", ios::binary);
	if (ifs)
	{
		Employee *temp = new Employee();
		int index = 0;
		while (ifs.read((char*)temp, sizeof(Employee)))
		{
			employeesVector.push_back(temp);
		}
		ifs.close();
		cout << "��ȡ���" << endl;
	}
	else
	{
		cout << "��ȡʧ��" << endl;
	}
}

