#pragma once

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main 摘要
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			this->KeyPreview = true;
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::ComboBox^  cmbPost;
	private: System::Windows::Forms::RadioButton^  radMale;
	private: System::Windows::Forms::RadioButton^  radFemale;
	private: System::Windows::Forms::RadioButton^  radMarry;
	private: System::Windows::Forms::RadioButton^  radUnMarry;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;






	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->chkRemember = (gcnew System::Windows::Forms::CheckBox());
			this->txtConsole = (gcnew System::Windows::Forms::TextBox());
			this->cmbPost = (gcnew System::Windows::Forms::ComboBox());
			this->radMale = (gcnew System::Windows::Forms::RadioButton());
			this->radFemale = (gcnew System::Windows::Forms::RadioButton());
			this->radMarry = (gcnew System::Windows::Forms::RadioButton());
			this->radUnMarry = (gcnew System::Windows::Forms::RadioButton());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(69, 240);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(112, 50);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"确定取值";
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
			this->chkRemember->Text = L"记住账号";
			this->chkRemember->UseVisualStyleBackColor = true;
			// 
			// txtConsole
			// 
			this->txtConsole->Location = System::Drawing::Point(558, 10);
			this->txtConsole->Multiline = true;
			this->txtConsole->Name = L"txtConsole";
			this->txtConsole->Size = System::Drawing::Size(581, 188);
			this->txtConsole->TabIndex = 2;
			// 
			// cmbPost
			// 
			this->cmbPost->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbPost->FormattingEnabled = true;
			this->cmbPost->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"校长", L"副校长", L"院长", L"副院长", L"主任" });
			this->cmbPost->Location = System::Drawing::Point(69, 50);
			this->cmbPost->Name = L"cmbPost";
			this->cmbPost->Size = System::Drawing::Size(121, 23);
			this->cmbPost->TabIndex = 3;
			// 
			// radMale
			// 
			this->radMale->AutoSize = true;
			this->radMale->Location = System::Drawing::Point(6, 24);
			this->radMale->Name = L"radMale";
			this->radMale->Size = System::Drawing::Size(43, 19);
			this->radMale->TabIndex = 4;
			this->radMale->TabStop = true;
			this->radMale->Text = L"男";
			this->radMale->UseVisualStyleBackColor = true;
			this->radMale->Click += gcnew System::EventHandler(this, &Main::radMale_Click);
			// 
			// radFemale
			// 
			this->radFemale->AutoSize = true;
			this->radFemale->Location = System::Drawing::Point(55, 24);
			this->radFemale->Name = L"radFemale";
			this->radFemale->Size = System::Drawing::Size(43, 19);
			this->radFemale->TabIndex = 5;
			this->radFemale->TabStop = true;
			this->radFemale->Text = L"女";
			this->radFemale->UseVisualStyleBackColor = true;
			this->radFemale->Click += gcnew System::EventHandler(this, &Main::radMale_Click);
			// 
			// radMarry
			// 
			this->radMarry->AutoSize = true;
			this->radMarry->Location = System::Drawing::Point(3, 3);
			this->radMarry->Name = L"radMarry";
			this->radMarry->Size = System::Drawing::Size(58, 19);
			this->radMarry->TabIndex = 6;
			this->radMarry->TabStop = true;
			this->radMarry->Text = L"已婚";
			this->radMarry->UseVisualStyleBackColor = true;
			// 
			// radUnMarry
			// 
			this->radUnMarry->AutoSize = true;
			this->radUnMarry->Location = System::Drawing::Point(67, 3);
			this->radUnMarry->Name = L"radUnMarry";
			this->radUnMarry->Size = System::Drawing::Size(58, 19);
			this->radUnMarry->TabIndex = 7;
			this->radUnMarry->TabStop = true;
			this->radUnMarry->Text = L"未婚";
			this->radUnMarry->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->radMarry);
			this->flowLayoutPanel1->Controls->Add(this->radUnMarry);
			this->flowLayoutPanel1->Location = System::Drawing::Point(69, 172);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(141, 28);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radMale);
			this->groupBox1->Controls->Add(this->radFemale);
			this->groupBox1->Location = System::Drawing::Point(69, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(139, 57);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"性别";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(558, 228);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(581, 221);
			this->tabControl1->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lblTime);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(573, 192);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"男";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblTime->Location = System::Drawing::Point(63, 40);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(62, 31);
			this->lblTime->TabIndex = 0;
			this->lblTime->Text = L"时间";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(573, 192);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"女";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 81);
			this->button2->TabIndex = 0;
			this->button2->Text = L"女";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 528);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->cmbPost);
			this->Controls->Add(this->txtConsole);
			this->Controls->Add(this->chkRemember);
			this->Controls->Add(this->btnOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->Text = L"Main";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::Main_KeyDown);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
		txtConsole->Clear();
		String^ content;

		if (chkRemember->Checked)
		{
			content = "已勾选";
		}
		else
		{
			content = "未勾选";
		}
		content += "\r\n" + cmbPost->Text;

		content += "\r\n" + (radMale->Checked ? "男" : "女");

		content += "\r\n" + (radMarry->Checked ? "已婚" : "未婚");

		txtConsole->Text = content;
	}

	private: System::Void radMale_Click(System::Object^  sender, System::EventArgs^  e) {
		if (radMale->Checked)
		{
			tabControl1->SelectedIndex = 0;
		}
		else
		{
			tabControl1->SelectedIndex = 1;
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		refreshTime();
	}

			 void refreshTime() {
				 lblTime->Text = DateTime::Now.ToString();
			 }
	private: System::Void Main_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		MessageBox::Show(e->KeyData.ToString());
	}
	};
}
