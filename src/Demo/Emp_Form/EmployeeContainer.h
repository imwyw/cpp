#pragma once
#include "stdafx.h"
#include "Employee.h"

class EmployeeContainer
{
public:
	EmployeeContainer();
	~EmployeeContainer();
	static vector<Employee*>* empVector;
};

