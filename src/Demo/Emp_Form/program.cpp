#include "stdafx.h"
#include "MainForm.h"

//ʹ��MainForm.h �����е������ռ�
using namespace Emp_Form;

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	Application::Run(gcnew MainForm());
	return 0;
}