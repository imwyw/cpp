#include "stdafx.h"
#include "CommonHelper.h"
#include "NavForm.h"

using namespace WinFormDemo;

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	Application::Run(gcnew NavForm());
	Application::Exit();
	return 0;
}