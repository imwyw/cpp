# 类和对象
C++ 在 C 语言的基础上增加了面向对象编程，C++ 支持面向对象程序设计。类是 C++ 的核心特性，通常被称为用户定义的类型。
类用于指定对象的形式，它包含了数据表示法和用于处理数据的方法。类中的数据和方法称为类的成员。函数在一个类被称为类的成员。
## 定义
定义一个类，本质上是定义一个数据类型的蓝图。
这实际上并没有定义任何数据，但它定义了类的名称意味着什么，也就是说，它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。
类定义是以关键字 class 开头，后跟类的名称。类的主体是包含在一对花括号中。
类定义后必须跟着一个分号或一个声明列表。例如，我们使用关键字 class 定义 Box 数据类型，如下所示：
```cpp
class Box
{
public:
	//长度
	double length;
	//宽度
	double width;
	//高度
	double height;

	//计算体积
	double GetVolume() {
		return height*width*length;
	};

	//获取表面积
	double GetArea();
};

double Box::GetArea() {
	return (length*width + length*height + width*height) * 2;
};

int main()
{
	Box box1;//对象box1

	box1.length = 10;
	box1.width = 5;
	box1.height = 3;

	cout << "盒子体积：" << box1.GetVolume() << endl;
	cout << "盒子表面积：" << box1.GetArea() << endl;

	system("pause");

	return 0;
}
```

