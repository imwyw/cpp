#pragma once
#include "stdafx.h"
#include "MainForm.h"
#include "KeyTestForm.h"
#include "PersistenceForm.h"
#include "Student.h"
#include "CommonHelper.h"

namespace LoginDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginForm ժҪ
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::TextBox^  txtUserName;
	private: System::Windows::Forms::TextBox^  txtPwd;
	private: System::Windows::Forms::Button^  btnArrow;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnPersistence;

	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtPwd = (gcnew System::Windows::Forms::TextBox());
			this->btnArrow = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnPersistence = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(131, 181);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"��¼";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(131, 38);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(195, 21);
			this->txtUserName->TabIndex = 1;
			// 
			// txtPwd
			// 
			this->txtPwd->Location = System::Drawing::Point(131, 106);
			this->txtPwd->Name = L"txtPwd";
			this->txtPwd->Size = System::Drawing::Size(195, 21);
			this->txtPwd->TabIndex = 2;
			// 
			// btnArrow
			// 
			this->btnArrow->Location = System::Drawing::Point(12, 251);
			this->btnArrow->Name = L"btnArrow";
			this->btnArrow->Size = System::Drawing::Size(75, 23);
			this->btnArrow->TabIndex = 3;
			this->btnArrow->Text = L"���������";
			this->btnArrow->UseVisualStyleBackColor = true;
			this->btnArrow->Click += gcnew System::EventHandler(this, &LoginForm::btnArrow_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(224, 181);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"ȡ��";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// btnPersistence
			// 
			this->btnPersistence->Location = System::Drawing::Point(93, 251);
			this->btnPersistence->Name = L"btnPersistence";
			this->btnPersistence->Size = System::Drawing::Size(75, 23);
			this->btnPersistence->TabIndex = 5;
			this->btnPersistence->Text = L"�־û�";
			this->btnPersistence->UseVisualStyleBackColor = true;
			this->btnPersistence->Click += gcnew System::EventHandler(this, &LoginForm::btnPersistence_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 286);
			this->ControlBox = false;
			this->Controls->Add(this->btnPersistence);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnArrow);
			this->Controls->Add(this->txtPwd);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->btnLogin);
			this->Name = L"LoginForm";
			this->Text = L"��¼";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		String^ USER_TIP;//��¼�ı����placeholder��ʾ
		String^ PWD_TIP;//�����ı����placeholder��ʾ

	private:
		//��ǰ�����������¼�
		System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
			USER_TIP = "�û���������";
			PWD_TIP = "����";
			this->txtUserName->Text = USER_TIP;
			this->txtPwd->Text = PWD_TIP;

			//���¼� ��ý���ʱ
			this->txtUserName->GotFocus += gcnew System::EventHandler(this, &LoginForm::RemoveTextValue);
			this->txtPwd->GotFocus += gcnew System::EventHandler(this, &LoginForm::RemoveTextValue);

			//���¼� ʧȥ����ʱ
			this->txtUserName->LostFocus += gcnew System::EventHandler(this, &LoginForm::RefreshTextValue);
			this->txtPwd->LostFocus += gcnew System::EventHandler(this, &LoginForm::RefreshTextValue);

			// ������Ƶ��Դ
			System::Media::SoundPlayer^ sp = gcnew System::Media::SoundPlayer("e:\\temp\\load.wav");
			sp->Load();
			sp->Play();
		}

	private:
		System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
			MainForm^ frm = gcnew MainForm();
			frm->action = gcnew Action(this, &LoginForm::ShowSelf);
			//this->Hide();
			frm->ShowDialog();

		}

	private:
		//���ı����ý���ʱ���Ƴ�placeholder��ʾ��Ϣ
		System::Void RemoveTextValue(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ tbox = (TextBox^)sender;

			//û��������Ϣʱ���������ʾ��Ϣ
			if (tbox->Text == USER_TIP && tbox->Name == "txtUserName")
			{
				tbox->Text = "";
			}
			if (tbox->Text == PWD_TIP && tbox->Name == "txtPwd")
			{
				tbox->Text = "";
				this->txtPwd->PasswordChar = '*';
			}
		}

	private:
		//��ǰ�ı���Ϊ��ʱ�������placeholderֵ��text
		System::Void RefreshTextValue(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ tbox = (TextBox^)sender;

			if (System::String::IsNullOrEmpty(tbox->Text))
			{
				if (tbox->Name == "txtUserName")
				{
					tbox->Text = USER_TIP;
				}
				else if (tbox->Name == "txtPwd")
				{
					tbox->Text = PWD_TIP;
					this->txtPwd->PasswordChar = '\0';//��ʾ�����ı�
				}

			}
		}

	private:
		//����ί�е���
		void ShowSelf() {
			this->Show();
		}

	private:
		System::Void btnArrow_Click(System::Object^  sender, System::EventArgs^  e) {
			KeyTestForm^ frm = gcnew KeyTestForm();
			frm->ShowDialog();
		}
	private:
		System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}
	private:
		System::Void btnPersistence_Click(System::Object^  sender, System::EventArgs^  e) {
			PersistenceForm^ frm = gcnew PersistenceForm();
			frm->ShowDialog();
		}
	};
}
