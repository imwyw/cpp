#pragma once
#include "CommonHelper.h"
#include "Employee.h"
#include "EmployeeContainer.h"

namespace Emp_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmAddEmp ժҪ
	/// </summary>
	public ref class FrmAddEmp : public System::Windows::Forms::Form
	{
	private:
		// �޸�Ա��ʱ����¼Ա�����������ش���ʱ��Ҫ�����ж�
		int empIndex = -1;
	public:
		FrmAddEmp(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
		FrmAddEmp(int index) {
			InitializeComponent();
			empIndex = index;
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~FrmAddEmp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtId;

	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtPhone;
	private: System::Windows::Forms::TextBox^  txtDepart;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pbHead;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnContinue;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtDepart = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pbHead = (gcnew System::Windows::Forms::PictureBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHead))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�ֻ�";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"����";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(97, 32);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(195, 25);
			this->txtId->TabIndex = 0;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(97, 68);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(195, 25);
			this->txtName->TabIndex = 1;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(97, 104);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(195, 25);
			this->txtPhone->TabIndex = 2;
			// 
			// txtDepart
			// 
			this->txtDepart->Location = System::Drawing::Point(97, 140);
			this->txtDepart->Name = L"txtDepart";
			this->txtDepart->Size = System::Drawing::Size(195, 25);
			this->txtDepart->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(386, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"��Ƭ";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(386, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 58);
			this->label6->TabIndex = 9;
			this->label6->Text = L"����Ҳ���Ƭ���и���";
			// 
			// pbHead
			// 
			this->pbHead->Location = System::Drawing::Point(470, 32);
			this->pbHead->Name = L"pbHead";
			this->pbHead->Size = System::Drawing::Size(146, 148);
			this->pbHead->TabIndex = 10;
			this->pbHead->TabStop = false;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(128, 230);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(114, 40);
			this->btnOK->TabIndex = 4;
			this->btnOK->Text = L"ȷ�����˳�";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &FrmAddEmp::btnOK_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(460, 230);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(114, 40);
			this->btnBack->TabIndex = 6;
			this->btnBack->Text = L"����";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FrmAddEmp::btnBack_Click);
			// 
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(294, 230);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(114, 40);
			this->btnContinue->TabIndex = 5;
			this->btnContinue->Text = L"ȷ��������";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Click += gcnew System::EventHandler(this, &FrmAddEmp::btnOK_Click);
			// 
			// FrmAddEmp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 282);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->pbHead);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDepart);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FrmAddEmp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���Ա��";
			this->Load += gcnew System::EventHandler(this, &FrmAddEmp::FrmAddEmp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHead))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
		Employee *emp = new Employee();
		// ��CLR������C++�����ͽ���ת��
		emp->id = Int32::Parse(txtId->Text);
		emp->name = CommonHelper::ConvertToString(txtName->Text);
		emp->phone = CommonHelper::ConvertToString(txtPhone->Text);
		emp->depart = CommonHelper::ConvertToString(txtDepart->Text);

		// Ĭ��Ϊ����
		if (empIndex == -1)
		{
			EmployeeContainer::empVector->push_back(emp);
			MessageBox::Show("��ӳɹ�-" + EmployeeContainer::empVector->size());
			// �ж����ĸ���ť�ĵ��
			if (((Button^)sender)->Text == "ȷ�����˳�")
			{
				this->Close();
			}
			else
			{
				txtId->Clear();
				txtName->Clear();
				txtPhone->Clear();
				txtDepart->Clear();
			}
		}
		else
		{
			// ����indexֵ����Ϊ�༭״̬
			EmployeeContainer::empVector->at(empIndex) = emp;
			MessageBox::Show("���³ɹ�-" + CommonHelper::ConvertToCLRString(emp->name));
			this->Close();
		}

	}
			 // ��������¼������ر༭Ա������Ϣ
	private: System::Void FrmAddEmp_Load(System::Object^  sender, System::EventArgs^  e) {
		// empid����-1�����༭״̬����Ҫ����Ա����Ϣ
		if (empIndex != -1)
		{
			this->Text = "����Ա����Ϣ";
			this->btnContinue->Hide();// ��������һ����ť
			this->btnOK->Text = "����";
			Employee* emp = EmployeeContainer::empVector->at(empIndex);
			this->txtId->Text = emp->id + "";
			this->txtName->Text = CommonHelper::ConvertToCLRString(emp->name);
			this->txtPhone->Text = CommonHelper::ConvertToCLRString(emp->phone);
			this->txtDepart->Text = CommonHelper::ConvertToCLRString(emp->depart);
		}

	}

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	};
}
