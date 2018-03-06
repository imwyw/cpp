<!-- TOC -->

- [STL Standard Template Library](#stl-standard-template-library)
    - [string](#string)

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