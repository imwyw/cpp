#include "stdafx.h"
#include "MainForm.h"
#include "Employee.h"
#include "EmployeeContainer.h"

//使用MainForm.h 代码中的命名空间
using namespace Emp_Form;

// 对程序中的静态字段进行初始化
vector<Employee*>* EmployeeContainer::empVector = new vector<Employee*>();

//单线程特性，有些组件要求单线程
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//创建主窗口并运行它
	Application::Run(gcnew MainForm());
	Application::Exit();
	return 0;
}