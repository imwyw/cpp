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

	cout << "欢迎使用xx员工管理系统 V6.0" << endl;
	cout << "---------------------------" << endl;
	cout << "1.添加员工" << endl;
	cout << "2.删除员工" << endl;
	cout << "3.修改员工" << endl;
	cout << "4.查找员工" << endl;
	cout << "5.员工列表" << endl;
	cout << "6.保存员工" << endl;
	cout << "7.读取员工列表" << endl;
	cout << "8.排序" << endl;
	cout << "0.退出" << endl;
	cout << "---------------------------" << endl;
	cout << "请选择：" << endl;
	cin >> number;

	Employee *emp;
	string name;
	int index = -1;

	switch (number)
	{
	case 1:
		cout << "添加员工" << endl;
		emp = new Employee();
		cout << "请输入员工编号" << endl;
		cin >> emp->id;
		cout << "请输入员工姓名" << endl;
		cin >> emp->name;
		cout << "请输入员工手机" << endl;
		cin >> emp->phone;
		cout << "请输入员工部门" << endl;
		cin >> emp->depart;
		empList.addEmp(emp);
		PAUSE;
		break;
	case 2:
		cout << "删除员工" << endl;
		cout << "请输入要删除员工的姓名：" << endl;
		cin >> name;
		empList.deleteEmp(name);
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
		empList.updateEmp(name, emp);
		PAUSE;
		break;
	case 4:
		cout << "查找员工" << endl;
		cout << "请输入要查询员工的姓名：" << endl;
		cin >> name;
		index = empList.findEmp(name);
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
		empList.showList();
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
		cout << "按编号进行升序" << endl;
		empList.sort();
		cout << "排序完成" << endl;
		PAUSE;
		break;
	case 0:
		isExist = true;
		break;
	default:
		cout << "请输入正确的选项" << endl;
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
		cout << "保存成功！" << endl;
	}
	else
	{
		cout << "保存失败!!!" << endl;
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
		cout << "读取完成" << endl;
	}
	else
	{
		cout << "读取失败" << endl;
	}*/
}
