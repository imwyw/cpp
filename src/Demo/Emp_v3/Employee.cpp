#include "stdafx.h"
#include "Employee.h"

Employee::Employee() {}

Employee::~Employee() {}

Employee::Employee(int id, string name, string phone, string depart)
{
	this->id = id;
	this->name = name;
	this->phone = phone;
	this->depart = depart;
}
