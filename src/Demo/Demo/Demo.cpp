// Demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Person {
public:
	Person() {}
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

class Emp {
public:
	Person p1;
	Person *pp;
};

int main()
{
	Emp e;
	e.p1.name = "";
	e.pp->name = "";

	Student *s1 = new Student("jack", "s001");
	Student *s2 = new Student("lucy", "s002");
	Person* parr[] = { s1,s2 };

	parr[0]->sayHi();
	parr[1]->sayHi();

	vector<Student> vec1;
	vec1.push_back(*s1);
	vec1.push_back(*s2);

	vector<Student*> vec2;
	vec2.push_back(s1);
	vec2.push_back(s2);

	vector<Student*>* vec3 = new vector<Student*>;
	vec3->push_back(s1);
	vec3->push_back(s2);

	vector<Student>* vec4 = new vector<Student>;
	vec4->push_back(*s1);
	vec4->push_back(*s2);

	Person* parr1 = new Person[20];
	Person* parr2 = new Person[20]{};

	Person** pparr1 = new Person*[10];


	// 暂停
	system("pause");

	return 0;
}

