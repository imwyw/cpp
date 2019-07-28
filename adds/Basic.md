<!-- TOC -->

- [针对讲解](#针对讲解)
    - [函数相关](#函数相关)
    - [数组删除元素](#数组删除元素)
    - [输入输出流](#输入输出流)
    - [指针、引用](#指针引用)
    - [svn冲突等等](#svn冲突等等)
    - [随机函数](#随机函数)
    - [继承中函数调用](#继承中函数调用)
    - [继承及多态、虚函数](#继承及多态虚函数)
    - [继承多态UML](#继承多态uml)

<!-- /TOC -->

<a id="markdown-针对讲解" name="针对讲解"></a>
# 针对讲解

<a id="markdown-函数相关" name="函数相关"></a>
## 函数相关
函数定义、调用、构造函数、函数重载等概念
```cpp
int add(int a,int b){ }

add("1","2");

class Calc {
public:
	int sub(int a, int b) { return a - b; }
};

Calc cl;
cl.sub("4", "6");
```

<a id="markdown-数组删除元素" name="数组删除元素"></a>
## 数组删除元素
不知道index的返回值为什么是-1，数组有点不太清楚

```cpp
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
```

<a id="markdown-输入输出流" name="输入输出流"></a>
## 输入输出流
输入输出流、ofstream、ifstream的用法

流是个抽象的概念，是对输入输出设备的抽象

```cpp
ofstream ofs("data", ios::out);
//ofs.write("hello world", 11);
ofs << "hello world" << endl;
ofs.close();
```

```cpp
ifstream ifs("data", ios::in);
string content;
getline(ifs, content);
cout << content << endl;
```

```cpp
Student *stu = new Student();
stu->name = "trump";
ofstream ofs("data", ios::binary);
ofs.write((char*)stu, sizeof(Student));
ofs.close();

Student *stuRes = new Student();
ifstream ifs("data", ios::binary);
ifs.read((char*)stuRes, sizeof(Student));
cout << stuRes->name << endl;
```

<a id="markdown-指针引用" name="指针引用"></a>
## 指针、引用
指针、引用及作为形参区别

指针
```cpp
int a = 1;
int *pa = &a;

*pa = 5;
cout << a << endl;
```

值复制
```cpp
int a = 1;
int b = a;

b = 5;
cout << a << endl;
```

指针复制
```cpp
int a = 1;
int *pa = &a;
int *pb = pa;

*pb = 5;
cout << a << endl;
```

引用最简单，直接替换即可
```cpp
int a = 1;
int &ra = a;

ra = 5;
cout << a << endl;
```

作为形参：
```cpp
void change(int a, int *p, int &r) {
	a = 6;
	*p = 6;
	r = 6;
}

int a = 1;

int b = 1;
int *pb = &b;

int c = 1;
int &rc = c;

change(a, pb, rc);

cout << a << endl;
cout << *pb << endl;
cout << rc << endl;
```

<a id="markdown-svn冲突等等" name="svn冲突等等"></a>
## svn冲突等等
svn前后两次提交的代码文件发生冲突

cleanup操作和revert操作，介绍演示

<a id="markdown-随机函数" name="随机函数"></a>
## 随机函数

```cpp
#include <time.h>
// 生成并指定随机因子
long seed = time(nullptr);
srand(seed);
for (int i = 0; i < 10; i++)
{
    // 如无指定随机因子，则每次生成随机数是相同的
    cout << rand() << endl;
}
```

<a id="markdown-继承中函数调用" name="继承中函数调用"></a>
## 继承中函数调用
salaryemployee，houremployee在继承employee属性时，对HourEmployee::toString()不懂

简化案例：
```cpp
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
	Student s1("jack", "s001");
	cout << s1.name << "--" << s1.stuNo << endl;

	s1.sayHi();

	// 暂停
	system("pause");

	return 0;
}
```

<a id="markdown-继承及多态虚函数" name="继承及多态虚函数"></a>
## 继承及多态、虚函数

```cpp
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
```

<a id="markdown-继承多态uml" name="继承多态uml"></a>
## 继承多态UML
在继承及多态（工资管理系统）实现过程中，对UML图不是很理解，自行画出UML图有困难

vs提供类图