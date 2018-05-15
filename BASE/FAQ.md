<!-- TOC -->

- [常见问题](#常见问题)
    - [LNK1123](#lnk1123)
    - [`#include< >` 和 `#include" "` 的区别](#include--和-include--的区别)
    - [构造函数重载](#构造函数重载)

<!-- /TOC -->

<a id="markdown-常见问题" name="常见问题"></a>
# 常见问题
<a id="markdown-lnk1123" name="lnk1123"></a>
## LNK1123
error LNK1123:转换到 COFF 期间失败：文件无效或损坏

参考：
[转换到 COFF 期间失败: 文件无效或损坏](http://blog.csdn.net/zengraoli/article/details/39081901)

[LNK1123: 转换到 COFF 期间失败: 文件无效或损坏](http://www.cnblogs.com/newpanderking/articles/3372969.html)

<a id="markdown-include--和-include--的区别" name="include--和-include--的区别"></a>
## `#include< >` 和 `#include" "` 的区别

`#include< >` 引用的是编译器的类库路径里面的头文件，一般是引用自带的一些头文件，如： stdio.h、conio.h、string.h、stdlib.h 等等。

`#include" "` 引用的是你程序目录的相对路径中的头文件，在程序目录的相对路径中找不到该头文件时会继续在类库路径里搜寻该头文件。

<a id="markdown-构造函数重载" name="构造函数重载"></a>
## 构造函数重载

stu.h
```cpp
class Stu
{
public:
	Stu();
	Stu(bool a, string b);
	Stu(bool a, bool b);
	Stu(bool a, int b);
	~Stu();
};
```

stu.cpp
```cpp
#include "stdafx.h"
#include "Stu.h"


Stu::Stu()
{
}


Stu::~Stu()
{
}

Stu::Stu(bool a, string b) {
	cout << "Stu::Stu(bool a,string b)" << endl;
}

Stu::Stu(bool a, bool b)
{
	cout << "Stu::Stu(bool a, bool b)" << b << endl;
}


Stu::Stu(bool a, int b)
{
	cout << "Stu::Stu(bool a, int b)" << endl;
}
```

main入口
```cpp
int main() {


	Stu *s = new Stu(false, "");

	Stu *s1 = new Stu(false, 123);

	Stu *s2 = new Stu(false, true);

	return 0;
}
```

以上代码的实际构造函数调用出乎意料。。。 todo 有空研究