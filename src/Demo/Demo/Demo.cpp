// Demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Person {
public:
	Person(string name) {
		this->name = name;
	}
	string name;
	void sayHi() {
		cout << "i'm " << name << endl;
	}
};

class Student :public Person {
public:
	Student(string name, string no) :Person(name) {
		this->stuNo = no;
	}
	string stuNo;
	void sayHi() {
		Person::sayHi();
		cout << "my stu no is " << stuNo << endl;
	}
};

int main()
{
	Student *s1 = new Student("jack", "s001");
	Student *s2 = new Student("lucy", "s002");
	Person* parr[] = { s1,s2 };

	parr[0]->sayHi();
	parr[1]->sayHi();

	// 暂停
	system("pause");

	return 0;
}

