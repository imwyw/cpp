#pragma once
#include "stdafx.h"
#include "Student.h"
#include "Book.h"
#include "CommonHelper.h"

namespace LoginDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm ժҪ
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Button^  btnSaveArr;
	private: System::Windows::Forms::DataGridView^  dgvStu;


	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtStuNum;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtName;



	public:

	public:
		System::Windows::Forms::Form ^parentForm;

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Button^  btnLogout;

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
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtStuNum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSaveArr = (gcnew System::Windows::Forms::Button());
			this->dgvStu = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStu))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(11, 8);
			this->btnLogout->Margin = System::Windows::Forms::Padding(4);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(100, 29);
			this->btnLogout->TabIndex = 0;
			this->btnLogout->Text = L"ע��";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// dgv
			// 
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(119, 8);
			this->dgv->Margin = System::Windows::Forms::Padding(4);
			this->dgv->Name = L"dgv";
			this->dgv->RowTemplate->Height = 23;
			this->dgv->Size = System::Drawing::Size(1315, 191);
			this->dgv->TabIndex = 1;
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(11, 44);
			this->btnExit->Margin = System::Windows::Forms::Padding(4);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 29);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"�˳�";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1455, 666);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgv);
			this->tabPage1->Controls->Add(this->btnExit);
			this->tabPage1->Controls->Add(this->btnLogout);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1447, 637);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->txtStuNum);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->txtName);
			this->tabPage2->Controls->Add(this->btnAdd);
			this->tabPage2->Controls->Add(this->btnSaveArr);
			this->tabPage2->Controls->Add(this->dgvStu);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1447, 637);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(464, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"ѧ��";
			// 
			// txtStuNum
			// 
			this->txtStuNum->Location = System::Drawing::Point(510, 12);
			this->txtStuNum->Margin = System::Windows::Forms::Padding(4);
			this->txtStuNum->Name = L"txtStuNum";
			this->txtStuNum->Size = System::Drawing::Size(132, 25);
			this->txtStuNum->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(253, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"����";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(299, 12);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(132, 25);
			this->txtName->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(119, 8);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 29);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"���";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainForm::btnAdd_Click);
			// 
			// btnSaveArr
			// 
			this->btnSaveArr->Location = System::Drawing::Point(11, 8);
			this->btnSaveArr->Margin = System::Windows::Forms::Padding(4);
			this->btnSaveArr->Name = L"btnSaveArr";
			this->btnSaveArr->Size = System::Drawing::Size(100, 29);
			this->btnSaveArr->TabIndex = 7;
			this->btnSaveArr->Text = L"��������";
			this->btnSaveArr->UseVisualStyleBackColor = true;
			this->btnSaveArr->Click += gcnew System::EventHandler(this, &MainForm::btnSaveArr_Click);
			// 
			// dgvStu
			// 
			this->dgvStu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStu->Location = System::Drawing::Point(11, 45);
			this->dgvStu->Margin = System::Windows::Forms::Padding(4);
			this->dgvStu->Name = L"dgvStu";
			this->dgvStu->RowTemplate->Height = 23;
			this->dgvStu->Size = System::Drawing::Size(1425, 579);
			this->dgvStu->TabIndex = 6;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1455, 666);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStu))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		/************************************************************************/
		/* ����Ϊ��Ӵ��� add by wangyuanwei 2017-8-15
		*/
		/************************************************************************/

	public:
		//ί�н����������巽��
		Action^ action;

	private:
		//���˽�б���
		Color OldCellBackColor;
		Color OldCellForeColor;
		DataGridViewCell^ highlightedCell;

	private:
		System::Void btnLogout_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
			this->action->Invoke();
		}
	private:
		//����load�¼�
		System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			InitGrid();
			InitStuGridColumns();
			curDataPath = System::IO::Path::Combine(System::Windows::Forms::Application::StartupPath, "stu.bin");
			LoadStuentData();
		}

		//���ؼ��ĳ�ʼ��
		System::Void InitGrid() {
			//����
			string headers[] = { "�� ��","ISBN","�� ��","�� ��","�� �� ��" };

			dgv->Columns->Clear();

			//���� ��� ��ͷ
			dgv->ColumnCount = size(headers);
			for (int i = 0; i < size(headers); i++)
			{
				dgv->Columns[i]->Name = CommonHelper::ConvertToCLRString(headers[i]);
			}

			// ���� ��� ����
			vector<Book*>* list = GetBookTestList();
			for (int i = 0; i < list->size(); i++)
			{
				Book* book = list->at(i);
				int rowIndex = dgv->Rows->Add();//���һ�У�����������
				dgv->Rows[rowIndex]->Cells[0]->Value = CommonHelper::ConvertToCLRString(book->publishDate);
				dgv->Rows[rowIndex]->Cells[1]->Value = CommonHelper::ConvertToCLRString(book->ISBN);
				dgv->Rows[rowIndex]->Cells[2]->Value = CommonHelper::ConvertToCLRString(book->name);
				dgv->Rows[rowIndex]->Cells[3]->Value = CommonHelper::ConvertToCLRString(book->auth);
				dgv->Rows[rowIndex]->Cells[4]->Value = CommonHelper::ConvertToCLRString(book->publisher);
			}

			// ���ñ����ʽ
			dgv->AutoResizeColumns();
			dgv->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			dgv->EnableHeadersVisualStyles = true;/*����Ӧ�ó��������õģ����Ϊfalse������Լ�������������*/

			// ���ñ�ͷ������
			DataGridViewCellStyle^ headerStyle = gcnew DataGridViewCellStyle;
			headerStyle->Font = gcnew System::Drawing::Font("΢���ź�", 12, FontStyle::Bold);
			headerStyle->BackColor = Color::AliceBlue;
			headerStyle->ForeColor = Color::BurlyWood;
			dgv->ColumnHeadersDefaultCellStyle = headerStyle;

			// �ر�����ָʾ��
			dgv->AllowUserToAddRows = false;

			dgv->AutoResizeColumnHeadersHeight();

			//ע���¼���ʵ���������/�Ƴ���Ԫ��
			dgv->CellMouseEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::OnCellMouseEnter);
			dgv->CellMouseLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::OnCellMouseLeave);
		}

		// �����������
		vector<Book*>* GetBookTestList() {
			vector<Book*>* list = new vector<Book*>();
			Book* tempBook;

			tempBook = new Book("2011-1-8", "ISBN-01", "ƽ��������", "·ң", "�����ʵ������");
			list->push_back(tempBook);

			tempBook = new Book("2003-4-5", "ISBN-Vs", "��������", "Svte Johi", "������������");
			list->push_back(tempBook);

			tempBook = new Book("2008-10-20", "ISBN-06", "����ʱ��", "��ΰ", "�����ѧ������");
			list->push_back(tempBook);

			tempBook = new Book("1998-6-7", "ISBN-78", "�����", "��С��", "�ӱ����������");
			list->push_back(tempBook);

			tempBook = new Book("1990-4-15", "ISBN-Vt", "����ս��", "Jifsl SVe Micvvf", "�뵺��̨����");
			list->push_back(tempBook);

			tempBook = new Book("2004-5-18", "ISBN-89", "�ؼ�", "������", "�Ƽ�������");
			list->push_back(tempBook);

			tempBook = new Book("2006-12-20", "ISBN-6", "�ݺ�ս��", "������", "�����ܿ�");
			list->push_back(tempBook);

			return list;
		}


		//��������¼������ı䵥Ԫ�񱳾�ɫ��������ɫ
		void OnCellMouseEnter(Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (e->ColumnIndex >= 0 && e->RowIndex >= 0)
			{
				highlightedCell = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex];
				//����ɵ���ɫ
				OldCellBackColor = highlightedCell->Style->BackColor;
				OldCellForeColor = highlightedCell->Style->ForeColor;

				//���õ�ǰ����ɫ
				highlightedCell->Style->BackColor = Color::Blue;
				highlightedCell->Style->ForeColor = Color::Red;
				//DataGridViewCell^ cell=dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex];

			}
		}

		//����Ƴ����¼������ָ���Ԫ����ʽ
		void OnCellMouseLeave(Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (nullptr != highlightedCell && e->ColumnIndex >= 0 && e->RowIndex >= 0)
			{
				//DataGridViewCell^ cell=dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex];
				highlightedCell->Style->BackColor = OldCellBackColor;
				highlightedCell->Style->ForeColor = OldCellForeColor;
				OldCellForeColor = OldCellBackColor = Color::Empty;
				highlightedCell = nullptr;
			}
		}


	private:
		System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}

		/************************************************************************/
		/*
		tabPage2 ���� add by wangyuanwei 2017-8-22
		*/
		/************************************************************************/

		String^ curDataPath;//��ǰ�־û������·���������ļ����ƣ�
		vector<Student*>* vectorStus = new vector<Student*>();//���浱ǰѧ���б�

		//���ñ����⣬����һ�μ���
		void InitStuGridColumns() {
			//����
			string headers[] = { "����","ѧ��" };

			dgvStu->Columns->Clear();

			//����dataGridView��ͷ
			dgvStu->ColumnCount = size(headers);
			// �ر�����ָʾ��
			dgvStu->AllowUserToAddRows = false;

			for (int i = 0; i < size(headers); i++)
			{
				dgvStu->Columns[i]->Name = CommonHelper::ConvertToCLRString(headers[i]);
			}
		}

		// ��ȡ���ID
		int GetID() {
			srand((int)time(0));
			return rand();
		}

		// ���ѧ����vector
		System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			string name = CommonHelper::ConvertToString(this->txtName->Text);
			int id = Int32::Parse(this->txtStuNum->Text);
			Student* stu = new Student(name, id);
			vectorStus->push_back(stu);

			RefreshStuTable();
		}

		System::Void RefreshStuTable() {
			dgvStu->Rows->Clear();
			for (int i = 0; i < vectorStus->size(); i++)
			{
				Student* stu = vectorStus->at(i);
				int rowIndex = dgvStu->Rows->Add();
				dgvStu->Rows[rowIndex]->Cells[0]->Value = CommonHelper::ConvertToCLRString(stu->Name);
				dgvStu->Rows[rowIndex]->Cells[1]->Value = stu->NO;
			}
		}

		System::Void LoadStuentData() {
			ifstream ifs(CommonHelper::ConvertToString(curDataPath), ios::binary);
			if (ifs)
			{
				Student *st = new Student();
				while (ifs.read((char*)st, sizeof(Student)))
				{
					vectorStus->push_back(st);
				}
			}
			ifs.close();
			RefreshStuTable();
		}

		// ����ѧ������
		System::Void btnSaveArr_Click(System::Object^  sender, System::EventArgs^  e) {
			ofstream filesave;
			filesave.open(CommonHelper::ConvertToString(curDataPath), ios::binary);
			for (int i = 0; i < vectorStus->size(); i++)
			{
				Student* stu = vectorStus->at(i);
				filesave.write((char*)stu, sizeof(Student));
			}
			filesave.close();
			MessageBox::Show("����ɹ���", "��ʾ");
		}
	};
}
