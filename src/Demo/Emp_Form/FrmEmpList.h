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
	/// FrmEmpList 摘要
	/// </summary>
	public ref class FrmEmpList : public System::Windows::Forms::Form
	{
	public:
		FrmEmpList(void)
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
			this->label1->Text = L"姓名-";
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
			this->btnQuery->Text = L"查询";
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
			this->columnHeader1->Text = L"编号";
			this->columnHeader1->Width = 76;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"姓名";
			this->columnHeader2->Width = 77;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"手机";
			this->columnHeader3->Width = 75;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"部门";
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
			this->tsmiModify->Text = L"修改";
			this->tsmiModify->Click += gcnew System::EventHandler(this, &FrmEmpList::tsmiModify_Click);
			// 
			// tsmiDelete
			// 
			this->tsmiDelete->Name = L"tsmiDelete";
			this->tsmiDelete->Size = System::Drawing::Size(175, 24);
			this->tsmiDelete->Text = L"删除";
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
			this->Text = L"员工列表";
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
		// 用于存放筛选结果
		vector<Employee*>* tempList = new vector<Employee*>();

		for (int i = 0; i < EmployeeContainer::empVector->size(); i++)
		{
			Employee* emp = EmployeeContainer::empVector->at(i);
			String^ empname = CommonHelper::ConvertToCLRString(emp->name);
			// 模糊查询，如果有包含关键字则添加至临时容器中
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
			MessageBox::Show("没有结果");
		}
	}

			 // 加载员工列表至 ListView
	private:void LoadEmpData(vector<Employee*>* list)
	{
		// 加载前清空所有项
		lvEmp->Items->Clear();
		for (int i = 0; i < list->size(); i++)
		{
			Employee* emp = list->at(i);

			// 构造 ListViewItem，用于显示数据
			ListViewItem^ item = gcnew ListViewItem(emp->id + "");
			lvEmp->Items->Add(item);

			// 添加每项详细信息
			String^ name = CommonHelper::ConvertToCLRString(emp->name);
			String^ phone = CommonHelper::ConvertToCLRString(emp->phone);
			String^ depart = CommonHelper::ConvertToCLRString(emp->depart);
			item->SubItems->Add(name);
			item->SubItems->Add(phone);
			item->SubItems->Add(depart);

		}
	}


	private: System::Void tsmiDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		// 获取选中项的索引
		int index = lvEmp->SelectedIndices[0];
		Employee* emp = EmployeeContainer::empVector->at(index);
		String^ empName = CommonHelper::ConvertToCLRString(emp->name);
		// 想用户询问是否确认删除？ DialogResult是枚举类型，非引用类型，所以不需要^
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"确定要删除【" + empName + "】这条数据吗？",
			"删除提示",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// 从静态vector中删除该员工
			EmployeeContainer::empVector->erase(EmployeeContainer::empVector->begin() + index);
			LoadEmpData(EmployeeContainer::empVector);
			MessageBox::Show("删除成功！");
		}

	}

	private: System::Void tsmiModify_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	};
}
