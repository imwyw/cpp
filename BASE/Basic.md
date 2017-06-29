# 基本
## 数据类型

图中“type”表示任一种非void的类型

![](../assets/BASE/cpp_types.png)

一些基本类型可以使用一个或多个类型修饰符进行修饰：
* signed
* unsigned
* short
* long

下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。

类型 | 位 | 范围
---|---|---
char | 1 个字节 | -128 到 127 或者 0 到 255
unsigned char | 1 个字节 | 0 到 255
signed char | 1 个字节 | -128 到 127
int | 4 个字节 | -2147483648 到 2147483647
unsigned int | 4 个字节 | 0 到 4294967295
signed int | 4 个字节 | -2147483648 到 2147483647
short int | 2 个字节 | -32768 到 32767
unsigned short int | 2 个字节 | 0 到 65,535
signed short int | 2 个字节 | -32768 到 32767
long int | 8 个字节 | -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
signed long int | 8 个字节 | -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
unsigned long int | 8 个字节 | 0 to 18,446,744,073,709,551,615
float | 4 个字节 | +/- 3.4e +/- 38 (~7 个数字)
double | 8 个字节 | +/- 1.7e +/- 308 (~15 个数字)
long double | 8 个字节 | +/- 1.7e +/- 308 (~15 个数字)
wchar_t | 2 或 4 个字节 | 1 个宽字符

从上表可得知，变量的大小会根据编译器和所使用的电脑而有所不同。
下面实例会输出您电脑上各种数据类型的大小。

```cpp
#include <iostream>
using namespace std;

int main()
{
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   return 0;
}
```

### typedef 声明
您可以使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：
```cpp
typedef int newInt;
newInt width = 100;//等价于 int width = 100;
```

### 枚举类型
枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。
创建枚举，需要使用关键字 enum。枚举类型的一般形式为：
```cpp
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
```

如果枚举没有初始化, 即省掉"=整型常数"时, 则从第一个标识符开始,依次次赋给标识符0, 1, 2, ...。
但当枚举中的某个成员赋值后, 其后的成员按依次加1的规则确定其值。

```cpp
#include "stdafx.h"
#include "iostream"
using namespace std;

enum Weeks
{
	周日,
	周一 = 1,
	周二 = 2,
	周三 = 3,
	周四 = 4,
	周五 = 5,
	周六 = 6,
}week;

int main()
{
	week = 周日;

	cout << week << endl;//0

	Weeks xingqi;
	xingqi = 周三;

	cout << xingqi << endl;//3

	system("pause");

	return 0;
}
```

## 数组
C++ 支持数组数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。
数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量。
```cpp
type arrayName [ arraySize ];
float v[3];// 一个数组，包含三个浮点数：v[0],v[1],v[2]
char* a[32];//一个数组，包含32个到char的指针：a[0]...a[31]
```
数组元素的个数，即数组的界，必须是一个常量表达式。
如果需要可变化的界，请使用向量vector。

循环输出一个数组：
```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

int main()
{
	const int LEN = 5;
	int a[LEN] = { 0,2,4 };//等价于 { 0,2,4,0,0 }

	//以数组下标方式进行遍历
	for (int i = 0; i < LEN; i++)
	{
		cout << "第" << i << "个元素：" << a[i] << endl;
	}

	//以下打印的都是数组的地址，第一个元素的内存地址，所以简写为数组a即可
	cout << "a:" << a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a[0]:" << &a[0] << endl;

	//定义指针为数组地址
	int* pa = a;

	for (int i = 0; i < LEN; i++)
	{
		cout << "指针递增，地址：" << pa << "，元素：" << *pa << endl;
		pa++;
	}

	system("pause");

	return 0;
}
```

## 指针
指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。

就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。

定义时, 其`*`号的位置可以靠左( `int* pa;` ), 居中( `int * pa;` )或靠右( `int *pa;` ), 具体使用哪种形式可根据个人习惯。

指针变量声明的一般形式为：

`type *var-name;`

```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

int main()
{
	string zhName = "HelloWorld";

	//&zhName 取变量zhName地址并赋值给 p
	string* p = &zhName;

	cout << "======================简单========================" << endl;
	cout << "&zhName:" << &zhName << " zhName的地址" << endl;
	cout << "p:" << p << " zhName的地址" << endl;
	cout << "*p:" << *p << " zhName的值" << endl;

	cout << "======================升级========================" << endl;
	cout << "*&p:" << *&p << " 等同于 p" << endl;
	cout << "&*p:" << &*p << " 等同于 p" << endl;
	cout << "&p:" << &p << " 指针p保存在内存中的地址" << endl;

	//再定义一个指针指向指针p
	string** pp = &p;

	cout << "======================指针的指针========================" << endl;
	cout << "pp:" << pp << " 指针p的地址，等同于&p" << endl;
	cout << "*pp:" << *pp << " 间接引用所指的变量 即zhName" << endl;
	cout << "&pp:" << &pp << " 指针的指针，它的地址 " << endl;

	system("pause");

	return 0;
}
```

### NULL指针
NULL 指针是一个定义在标准库中的值为零的常量。
```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

int main()
{
	int *pa = NULL;

	string *pstr = NULL;

	cout << "pa指向的地址：" << pa << endl;
	cout << "pstr指向的地址：" << pstr << endl;

	system("pause");

	return 0;
}

```

## 函数
```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

//函数声明
void SayHello(string name);

int main()
{
	SayHello("Jack Ma");

	system("pause");

	return 0;
}

void SayHello(string name) {
	cout << "Hello " << name << endl;
}
```

* 传值调用
该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
实际传递的是值的副本。

* 指针调用
该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

* 引用调用
该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

//值传递
void Swap(int a, int b);

//指针传递
void Swap(int* a, int* b);

//引用传递
void SwapRef(int& a, int& b);

int main()
{
	int a = 1, b = 2;
	Swap(a, b);

	cout << "值传递，a:" << a << ",b:" << b << endl;//a:1,b:2

	Swap(&a, &b);

	cout << "指针传递，a:" << a << ",b:" << b << endl;//a:2,b:1

	SwapRef(a, b);

	cout << "引用传递，a:" << a << ",b:" << b << endl;//a:1,b:2

	system("pause");

	return 0;
}

void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
```

## 引用
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。
### 引用vs指针
引用很容易与指针混淆，它们之间有三个主要的不同：
* 不存在空引用。引用必须连接到一块合法的内存。
* 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
* 引用必须在创建时被初始化。指针可以在任何时间被初始化。

```cpp
//操作name和rName的效果是一致的
string name = "JackMa";
string& rName = name;
```

### 引用作为函数返回值
C++ 函数可以返回一个引用，方式与返回一个指针类似。
当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。
```cpp
#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

double& SetValue(int i, double arr[]);

int main()
{
	const int LEN = 5;
	double a[LEN] = { 1,2,3 };

	SetValue(3, a) = 3.14;

	for (int i = 0; i < LEN; i++)
	{
		cout << i << "###" << a[i] << endl;
	}

	system("pause");

	return 0;
}

double& SetValue(int i, double arr[]) {
	//注意，return时不需要&符号
	return arr[i];
}
```