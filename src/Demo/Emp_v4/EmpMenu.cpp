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

	cout << "欢迎使用xx员工管理系统 V4.0" << endl;
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

	Employee *emp;
	string name;
	int index = -1; // 用于查找员工
	int empType = -1;// 用于选择员工类型

	switch (number)
	{
	case 1:
		cout << "添加员工" << endl;
		do
		{
			cout << "请选择需要添加的员工类型:" << endl;
			cout << "1.临时工" << endl;
			cout << "2.小时工" << endl;
			cout << "3.业务员" << endl;
			cin >> empType;
			if (empType == 1) {
				emp = new SalaryEmployee();
				cout << "请输入临时工月薪：" << endl;
				cin >> ((SalaryEmployee*)emp)->weeklySalary;
				break;
			}
			else if (empType == 2) {
				emp = new HourEmployee();
				cout << "请输入小时工时薪：" << endl;
				cin >> ((HourEmployee*)emp)->hourlyWage;
				cout << "请输入小时工工作时间（单位:小时）：" << endl;
				cin >> ((HourEmployee*)emp)->hours;
				break;
			}
			else if (empType == 3) {
				emp = new CommissionEmployee();
				cout << "请输入业务员销售额：" << endl;
				cin >> ((CommissionEmployee*)emp)->grossSales;
				cout << "请输入业务员销售提成：" << endl;
				cin >> ((CommissionEmployee*)emp)->commissionRate;
				break;
			}
			else {
				cout << "请输入正确员工类型！" << endl;
			}
		} while (true);

		cout << "请输入员工编号" << endl;
		cin >> emp->id;
		cout << "请输入员工姓名" << endl;
		cin >> emp->name;
		cout << "请输入员工手机" << endl;
		cin >> emp->phone;
		cout << "请输入员工部门" << endl;
		cin >> emp->depart;
		if (addEmp(emp))
		{
			cout << "添加成功！" << endl;
		}
		else
		{
			cout << "添加失败" << endl;
		}
		PAUSE;
		break;
	case 2:
		cout << "删除员工" << endl;
		cout << "请输入要删除员工的姓名：" << endl;
		cin >> name;
		if (deleteEmp(name))
		{
			cout << "已删除" << endl;
		}
		else
		{
			cout << "删除失败！" << endl;
		}
		PAUSE;
		break;
	case 3:
		cout << "修改员工" << endl;
		cout << "请输入要修改员工的姓名：";
		cin >> name;
		emp = new Employee();
		cout << "请输入员工新编号：" << endl;
		cin >> emp->id;
		cout << "请输入员工新姓名：" << endl;
		cin >> emp->name;
		cout << "请输入员工新手机：" << endl;
		cin >> emp->phone;
		cout << "请输入员工新部门：" << endl;
		cin >> emp->depart;
		if (updateEmp(name, emp))
		{
			cout << "更新成功！" << endl;
		}
		else
		{
			cout << "更新失败！" << endl;
		}
		PAUSE;
		break;
	case 4:
		cout << "查找员工" << endl;
		cout << "请输入要查询员工的姓名：" << endl;
		cin >> name;
		index = findEmp(name);
		if (index > -1)
		{
			cout << "该员工编号为" << (index + 1) << endl;
		}
		else
		{
			cout << "未找到该员工！" << endl;
		}
		PAUSE;
		break;
	case 5:
		cout << "员工列表" << endl;
		list();
		PAUSE;
		break;
	case 6:
		cout << "保存员工" << endl;
		saveData();

		break;
	case 7:
		cout << "读取员工列表" << endl;
		loadData();
		break;
	case 8:
		isExist = true;
		break;
	default:
		cout << "请输入正确的选项" << endl;
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
	// 找到指定员工的索引位置
	for (int i = 0; i < size(employeeArray); i++)
	{
		if (employeeArray[i] == nullptr)
		{
			break;
		}
		if (employeeArray[i]->name == name)
		{
			index = i;// 找到员工 跳出循环
			break;
		}
	}

	if (index == -1)
	{
		cout << "未找到该员工" << endl;
		return false;
	}

	// 将该员工移除，即后面所有员工往前移动一位
	for (int i = index; i < size(employeeArray); i++)
	{
		// 删除的恰好是最后一位
		if (i + 1 == size(employeeArray))
		{
			employeeArray[i] = nullptr;
		}
		// 如果后面元素为空
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
	cout << "请输入员工姓名：" << endl;
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
	cout << "编号\t姓名\t电话\t部门" << endl;
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
		cout << "保存成功！" << endl;
	}
	else
	{
		cout << "保存失败!!!" << endl;
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
		cout << "读取完成" << endl;
	}
	else
	{
		cout << "读取失败" << endl;
	}
}
