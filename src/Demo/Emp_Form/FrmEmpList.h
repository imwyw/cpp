#pragma once
#include "Employee.h"
#include "EmployeeContainer.h"
#include "CommonHelper.h"

namespace Emp_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmEmpList ժҪ
	/// </summary>
	public ref class FrmEmpList : public System::Windows::Forms::Form
	{
	public:
		FrmEmpList(void)
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
		~FrmEmpList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::Button^  btnQuery;
	private: System::Windows::Forms::ListView^  lvEmp;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiModify;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiDelete;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnQuery = (gcnew System::Windows::Forms::Button());
			this->lvEmp = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tsmiModify = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����-";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(62, 17);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(298, 25);
			this->txtName->TabIndex = 1;
			// 
			// btnQuery
			// 
			this->btnQuery->Location = System::Drawing::Point(380, 12);
			this->btnQuery->Name = L"btnQuery";
			this->btnQuery->Size = System::Drawing::Size(81, 34);
			this->btnQuery->TabIndex = 2;
			this->btnQuery->Text = L"��ѯ";
			this->btnQuery->UseVisualStyleBackColor = true;
			this->btnQuery->Click += gcnew System::EventHandler(this, &FrmEmpList::btnQuery_Click);
			// 
			// lvEmp
			// 
			this->lvEmp->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->lvEmp->ContextMenuStrip = this->contextMenuStrip1;
			this->lvEmp->FullRowSelect = true;
			this->lvEmp->GridLines = true;
			this->lvEmp->Location = System::Drawing::Point(14, 65);
			this->lvEmp->MultiSelect = false;
			this->lvEmp->Name = L"lvEmp";
			this->lvEmp->Size = System::Drawing::Size(495, 327);
			this->lvEmp->TabIndex = 3;
			this->lvEmp->UseCompatibleStateImageBehavior = false;
			this->lvEmp->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"���";
			this->columnHeader1->Width = 76;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"����";
			this->columnHeader2->Width = 77;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"�ֻ�";
			this->columnHeader3->Width = 75;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"����";
			this->columnHeader4->Width = 123;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tsmiModify,
					this->tsmiDelete
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(176, 80);
			// 
			// tsmiModify
			// 
			this->tsmiModify->Name = L"tsmiModify";
			this->tsmiModify->Size = System::Drawing::Size(175, 24);
			this->tsmiModify->Text = L"�޸�";
			this->tsmiModify->Click += gcnew System::EventHandler(this, &FrmEmpList::tsmiModify_Click);
			// 
			// tsmiDelete
			// 
			this->tsmiDelete->Name = L"tsmiDelete";
			this->tsmiDelete->Size = System::Drawing::Size(175, 24);
			this->tsmiDelete->Text = L"ɾ��";
			this->tsmiDelete->Click += gcnew System::EventHandler(this, &FrmEmpList::tsmiDelete_Click);
			// 
			// FrmEmpList
			// 
			this->AcceptButton = this->btnQuery;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 465);
			this->Controls->Add(this->lvEmp);
			this->Controls->Add(this->btnQuery);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Name = L"FrmEmpList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ա���б�";
			this->Load += gcnew System::EventHandler(this, &FrmEmpList::FrmEmpList_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FrmEmpList_Load(System::Object^  sender, System::EventArgs^  e) {
		LoadEmpData(EmployeeContainer::empVector);
	}

	private: System::Void btnQuery_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ searchName = txtName->Text;
		// ���ڴ��ɸѡ���
		vector<Employee*>* tempList = new vector<Employee*>();

		for (int i = 0; i < EmployeeContainer::empVector->size(); i++)
		{
			Employee* emp = EmployeeContainer::empVector->at(i);
			String^ empname = CommonHelper::ConvertToCLRString(emp->name);
			// ģ����ѯ������а����ؼ������������ʱ������
			if (empname->Contains(searchName))
			{
				tempList->push_back(emp);
			}
		}
		if (tempList->size() > 0)
		{
			LoadEmpData(tempList);
		}
		else
		{
			MessageBox::Show("û�н��");
		}
	}

			 // ����Ա���б��� ListView
	private:void LoadEmpData(vector<Employee*>* list)
	{
		// ����ǰ���������
		lvEmp->Items->Clear();
		for (int i = 0; i < list->size(); i++)
		{
			Employee* emp = list->at(i);

			// ���� ListViewItem��������ʾ����
			ListViewItem^ item = gcnew ListViewItem(emp->id + "");
			lvEmp->Items->Add(item);

			// ���ÿ����ϸ��Ϣ
			String^ name = CommonHelper::ConvertToCLRString(emp->name);
			String^ phone = CommonHelper::ConvertToCLRString(emp->phone);
			String^ depart = CommonHelper::ConvertToCLRString(emp->depart);
			item->SubItems->Add(name);
			item->SubItems->Add(phone);
			item->SubItems->Add(depart);

		}
	}


	private: System::Void tsmiDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		// ��ȡѡ���������
		int index = lvEmp->SelectedIndices[0];
		Employee* emp = EmployeeContainer::empVector->at(index);
		String^ empName = CommonHelper::ConvertToCLRString(emp->name);
		// ���û�ѯ���Ƿ�ȷ��ɾ���� DialogResult��ö�����ͣ����������ͣ����Բ���Ҫ^
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"ȷ��Ҫɾ����" + empName + "������������",
			"ɾ����ʾ",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// �Ӿ�̬vector��ɾ����Ա��
			EmployeeContainer::empVector->erase(EmployeeContainer::empVector->begin() + index);
			LoadEmpData(EmployeeContainer::empVector);
			MessageBox::Show("ɾ���ɹ���");
		}

	}

	private: System::Void tsmiModify_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	};
}
