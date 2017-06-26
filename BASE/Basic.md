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
	cout << "pp:" << pp << "指针p的地址，等同于&p" << endl;
	cout << "*pp:" << *pp << " 间接引用所指的变量 即zhName" << endl;
	cout << "&pp:" << &pp << "指针的指针，它的地址 " << endl;

	system("pause");

	return 0;
}
```