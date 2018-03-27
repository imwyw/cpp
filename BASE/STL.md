<!-- TOC -->

- [STL Standard Template Library](#stl-standard-template-library)
    - [string](#string)
        - [strlen和sizeof](#strlen和sizeof)

<!-- /TOC -->

<a id="markdown-stl-standard-template-library" name="stl-standard-template-library"></a>
# STL Standard Template Library
标准模板库

<a id="markdown-string" name="string"></a>
## string
C++ 标准库提供了 string 类类型，支持字符串的常用操作，另外还增加了其他更多的功能。我们将学习 C++ 标准库中的这个类，现在让我们先来看看下面这个实例：

```cpp
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	//传统char形式
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11] = "";

	//字符串的形式
	string s1 = "Hello";
	string s2 = "World";
	string s3 = "";

	//将str1内容复制到str3，不保留原先str3的内容
	strcpy_s(str3, str1);
	cout << "strcpy_s(str3, str1):" << str3 << endl;

	//将str2内容拼接到str1末尾
	strcat_s(str1, str2);
	cout << "strcat_s(str1, str2):" << str1 << endl;

	//长度
	cout << "str1 长度：" << strlen(str1) << endl;

	//字符串的直接拼接方式
	cout << "s1 + s2:" << s1 + s2 << endl;

	return 0;
}
```

<a id="markdown-strlen和sizeof" name="strlen和sizeof"></a>
### strlen和sizeof
sizeof(...)是运算符，其值在编译时即计算好了，参数可以是数组、指针、类型、对象、函数等。

实际上，用sizeof来返回类型以及静态分配的对象、结构或数组所占的空间，返回值跟对象、结构、数组所存储的内容没有关系。

当参数分别如下时，sizeof返回的值表示的含义如下：
* 数组——编译时分配的数组空间大小；
* 指针——存储该指针所用的空间大小（存储该指针的地址的长度，是长整型，应该为4）；
* 类型——该类型所占的空间大小；
* 对象——对象的实际占用空间大小；
* 函数——函数的返回类型所占的空间大小。函数的返回类型不能是void。

strlen(...)是函数，要在运行时才能计算。参数必须是字符型指针（char*）。当数组名作为参数传入时，实际上数组就退化成指针了。

返回字符串的长度，但不包括NULL。

观察下面的例子，strlen检查存储的内容长度，而sizeof则检查占用空间大小，并不关心内容长度。
```cpp
cout << "=====================" << endl;
char arr1[10] = "abc";
cout << "strlen(arr1):" << strlen(arr1) << endl;//arr1中内容的长度
cout << "sizeof(arr1) / sizeof(arr1[0]):" << sizeof(arr1) / sizeof(arr1[0]) << endl;//arr1所占用空间单位长度

cout << "=====================" << endl;
char arr2[] = "abc";
cout << "strlen(arr2):" << strlen(arr2) << endl;//arr2内容长度
cout << "sizeof(arr2) / sizeof(arr2[0]):" << sizeof(arr2) / sizeof(arr2[0]) << endl;//arr2占用空间长度，包括结尾的'\0'

cout << "=====================" << endl;
char *parr1 = new char[10]{};
cout << "strlen(parr1):" << strlen(parr1) << endl;//parr1的内容长度，不包含NULL
cout << "sizeof(parr1):" << sizeof(parr1) << endl;//指针的长度，即长整型所占用的空间，在这里是固定的
cout << "sizeof(*parr1):" << sizeof(*parr1) << endl;//parr1数组名称是首元素的地址，*取该地址空间的值长度为1
```

> http://www.cnblogs.com/carekee/articles/1630789.html
> http://www.cnblogs.com/nzbbody/p/3553222.html
