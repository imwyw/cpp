#include "stdafx.h"
#include "Employee.h"
#include "EmpMenu.h"

EmpMenu::EmpMenu()
{
	isExist = false;
}


EmpMenu::~EmpMenu()
{
}

void EmpMenu::start()
{
	int number = -1;

	cout << "��ӭʹ��xxԱ������ϵͳ V6.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.���Ա��" << endl;
	cout << "2.ɾ��Ա��" << endl;
	cout << "3.�޸�Ա��" << endl;
	cout << "4.����Ա��" << endl;
	cout << "5.Ա���б�" << endl;
	cout << "6.����Ա��" << endl;
	cout << "7.��ȡԱ���б�" << endl;
	cout << "8.����" << endl;
	cout << "0.�˳�" << endl;
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
		empList.addEmp(emp);
		PAUSE;
		break;
	case 2:
		cout << "ɾ��Ա��" << endl;
		cout << "������Ҫɾ��Ա����������" << endl;
		cin >> name;
		empList.deleteEmp(name);
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
		empList.updateEmp(name, emp);
		PAUSE;
		break;
	case 4:
		cout << "����Ա��" << endl;
		cout << "������Ҫ��ѯԱ����������" << endl;
		cin >> name;
		index = empList.findEmp(name);
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
		empList.showList();
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
		cout << "����Ž�������" << endl;
		empList.sort();
		cout << "�������" << endl;
		PAUSE;
		break;
	case 0:
		isExist = true;
		break;
	default:
		cout << "��������ȷ��ѡ��" << endl;
		break;
	}
}

void EmpMenu::saveData()
{
	/*ofstream ofs;
	ofs.open("data.bin", ios::binary);
	if (ofs)
	{
		for (int i = 0; i < empList; i++)
		{
			if (employeeArray[i] == nullptr)
			{
				break;
			}
			ofs.write((char*)employeeArray[i], sizeof(Employee));
		}
		ofs.close();
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ��!!!" << endl;
	}*/
}

void EmpMenu::loadData()
{
	/*ifstream ifs;
	ifs.open("data.bin", ios::binary);
	if (ifs)
	{
		Employee *temp = new Employee();
		int index = 0;
		while (ifs.read((char*)temp, sizeof(Employee)))
		{
			employeeArray[index++] = temp;
		}
		ifs.close();
		cout << "��ȡ���" << endl;
	}
	else
	{
		cout << "��ȡʧ��" << endl;
	}*/
}
