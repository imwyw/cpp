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
	/// LoginForm 摘要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
			this->btnLogin->Text = L"登录";
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
			this->btnArrow->Text = L"方向键测试";
			this->btnArrow->UseVisualStyleBackColor = true;
			this->btnArrow->Click += gcnew System::EventHandler(this, &LoginForm::btnArrow_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(224, 181);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"取消";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// btnPersistence
			// 
			this->btnPersistence->Location = System::Drawing::Point(93, 251);
			this->btnPersistence->Name = L"btnPersistence";
			this->btnPersistence->Size = System::Drawing::Size(75, 23);
			this->btnPersistence->TabIndex = 5;
			this->btnPersistence->Text = L"持久化";
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
			this->Text = L"登录";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		String^ USER_TIP;//登录文本框的placeholder提示
		String^ PWD_TIP;//密码文本框的placeholder提示

	private:
		//当前窗体加载完毕事件
		System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
			USER_TIP = "用户名或邮箱";
			PWD_TIP = "密码";
			this->txtUserName->Text = USER_TIP;
			this->txtPwd->Text = PWD_TIP;

			//绑定事件 获得焦点时
			this->txtUserName->GotFocus += gcnew System::EventHandler(this, &LoginForm::RemoveTextValue);
			this->txtPwd->GotFocus += gcnew System::EventHandler(this, &LoginForm::RemoveTextValue);

			//绑定事件 失去焦点时
			this->txtUserName->LostFocus += gcnew System::EventHandler(this, &LoginForm::RefreshTextValue);
			this->txtPwd->LostFocus += gcnew System::EventHandler(this, &LoginForm::RefreshTextValue);
		}

	private:
		System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
			MainForm^ frm = gcnew MainForm();
			frm->action = gcnew Action(this, &LoginForm::ShowSelf);
			//this->Hide();
			frm->ShowDialog();

		}

	private:
		//当文本框获得焦点时，移除placeholder提示信息
		System::Void RemoveTextValue(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ tbox = (TextBox^)sender;

			//没有填入信息时进行情况提示信息
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
		//当前文本框为空时重新添加placeholder值到text
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
					this->txtPwd->PasswordChar = '\0';//显示正常文本
				}

			}
		}

	private:
		//用于委托调用
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
