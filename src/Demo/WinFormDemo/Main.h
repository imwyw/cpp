#pragma once

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main ժҪ
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::CheckBox^  chkRemember;
	private: System::Windows::Forms::TextBox^  txtConsole;

	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->chkRemember = (gcnew System::Windows::Forms::CheckBox());
			this->txtConsole = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(12, 466);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(112, 50);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"ȷ��";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Main::btnOK_Click);
			// 
			// chkRemember
			// 
			this->chkRemember->AutoSize = true;
			this->chkRemember->Location = System::Drawing::Point(69, 12);
			this->chkRemember->Name = L"chkRemember";
			this->chkRemember->Size = System::Drawing::Size(89, 19);
			this->chkRemember->TabIndex = 1;
			this->chkRemember->Text = L"��ס�˺�";
			this->chkRemember->UseVisualStyleBackColor = true;
			// 
			// txtConsole
			// 
			this->txtConsole->Location = System::Drawing::Point(558, 12);
			this->txtConsole->Multiline = true;
			this->txtConsole->Name = L"txtConsole";
			this->txtConsole->Size = System::Drawing::Size(581, 188);
			this->txtConsole->TabIndex = 2;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 528);
			this->Controls->Add(this->txtConsole);
			this->Controls->Add(this->chkRemember);
			this->Controls->Add(this->btnOK);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
		txtConsole->Clear();
		String^ content;

		if (chkRemember->Checked)
		{
			content = "�ѹ�ѡ";
		}
		else
		{
			content = "δ��ѡ";
		}
		txtConsole->Text = content;
	}
	};
}
