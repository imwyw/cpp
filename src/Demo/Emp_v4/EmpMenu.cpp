#include "stdafx.h"
#include "EmpMenu.h"
#include "SalaryEmployee.h"
#include "HourEmployee.h"
#include "CommissionEmployee.h"


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

	cout << "��ӭʹ��xxԱ������ϵͳ V4.0" << endl;
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
	int index = -1; // ���ڲ���Ա��
	int empType = -1;// ����ѡ��Ա������

	switch (number)
	{
	case 1:
		cout << "���Ա��" << endl;
		do
		{
			cout << "��ѡ����Ҫ��ӵ�Ա������:" << endl;
			cout << "1.��ʱ��" << endl;
			cout << "2.Сʱ��" << endl;
			cout << "3.ҵ��Ա" << endl;
			cin >> empType;
			if (empType == 1) {
				emp = new SalaryEmployee();
				cout << "��������ʱ����н��" << endl;
				cin >> ((SalaryEmployee*)emp)->weeklySalary;
				break;
			}
			else if (empType == 2) {
				emp = new HourEmployee();
				cout << "������Сʱ��ʱн��" << endl;
				cin >> ((HourEmployee*)emp)->hourlyWage;
				cout << "������Сʱ������ʱ�䣨��λ:Сʱ����" << endl;
				cin >> ((HourEmployee*)emp)->hours;
				break;
			}
			else if (empType == 3) {
				emp = new CommissionEmployee();
				cout << "������ҵ��Ա���۶" << endl;
				cin >> ((CommissionEmployee*)emp)->grossSales;
				cout << "������ҵ��Ա������ɣ�" << endl;
				cin >> ((CommissionEmployee*)emp)->commissionRate;
				break;
			}
			else {
				cout << "��������ȷԱ�����ͣ�" << endl;
			}
		} while (true);

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
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i] == nullptr)
		{
			employeeArray[i] = emp;
			return true;
		}
	}
	return false;
}

bool EmpMenu::deleteEmp(string name)
{
	int index = -1;
	// �ҵ�ָ��Ա��������λ��
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i] == nullptr)
		{
			break;
		}
		if (employeeArray[i]->name == name)
		{
			index = i;// �ҵ�Ա�� ����ѭ��
			break;
		}
	}

	if (index == -1)
	{
		cout << "δ�ҵ���Ա��" << endl;
		return false;
	}

	// ����Ա���Ƴ�������������Ա����ǰ�ƶ�һλ
	for (int i = index; i < size(employeeArray); i++)
	{
		// ɾ����ǡ�������һλ
		if (i + 1 == size(employeeArray))
		{
			employeeArray[i] = nullptr;
		}
		// �������Ԫ��Ϊ��
		else if (employeeArray[i + 1] == nullptr) {
			employeeArray[i] = nullptr;
			break;
		}
		else
		{
			employeeArray[i] = employeeArray[i + 1];
		}
	}
	return true;
}

bool EmpMenu::updateEmp(string name, Employee * emp)
{
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i] == nullptr)
		{
			break;
		}
		if (employeeArray[i]->name == name)
		{
			employeeArray[i] = emp;
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
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i]->name == name)
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
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i] == nullptr)
		{
			break;
		}
		cout << employeeArray[i]->id << "\t" << employeeArray[i]->name << "\t"
			<< employeeArray[i]->phone << "\t" << employeeArray[i]->depart << endl;
	}
}

void EmpMenu::saveData()
{
	ofstream ofs;
	ofs.open("data.bin", ios::binary);
	if (ofs)
	{
		for (int i = 0; i < size(employeeArray); i++)
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
			employeeArray[index++] = temp;
		}
		ifs.close();
		cout << "��ȡ���" << endl;
	}
	else
	{
		cout << "��ȡʧ��" << endl;
	}
}
