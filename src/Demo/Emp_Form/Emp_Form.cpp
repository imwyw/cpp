#include "stdafx.h"
#include "MainForm.h"
#include "Employee.h"
#include "EmployeeContainer.h"

//ʹ��MainForm.h �����е������ռ�
using namespace Emp_Form;

// �Գ����еľ�̬�ֶν��г�ʼ��
vector<Employee*>* EmployeeContainer::empVector = new vector<Employee*>();

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	Application::Run(gcnew MainForm());
	Application::Exit();
	return 0;
}