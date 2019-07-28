#pragma once

namespace Emp_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmChooseImage ժҪ
	/// </summary>
	public ref class FrmChooseImage : public System::Windows::Forms::Form
	{
	private:
		// ����ί�У���������һ�������з��������ã����ǿ細����÷���
		Action<int>^ changeAction;

	public:
		FrmChooseImage(Action<int>^ act)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			changeAction = act;
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~FrmChooseImage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  lvPhotos;
	protected:

	protected:
	private: System::Windows::Forms::Button^  btnConfirm;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::ImageList^  ilPhotos;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmChooseImage::typeid));
			this->lvPhotos = (gcnew System::Windows::Forms::ListView());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->ilPhotos = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// lvPhotos
			// 
			this->lvPhotos->LargeImageList = this->ilPhotos;
			this->lvPhotos->Location = System::Drawing::Point(12, 12);
			this->lvPhotos->Name = L"lvPhotos";
			this->lvPhotos->Size = System::Drawing::Size(649, 316);
			this->lvPhotos->SmallImageList = this->ilPhotos;
			this->lvPhotos->TabIndex = 0;
			this->lvPhotos->UseCompatibleStateImageBehavior = false;
			// 
			// btnConfirm
			// 
			this->btnConfirm->Location = System::Drawing::Point(424, 334);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(99, 42);
			this->btnConfirm->TabIndex = 1;
			this->btnConfirm->Text = L"ȷ��";
			this->btnConfirm->UseVisualStyleBackColor = true;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &FrmChooseImage::btnConfirm_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(562, 334);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(99, 42);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"����";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &FrmChooseImage::btnCancel_Click);
			// 
			// ilPhotos
			// 
			this->ilPhotos->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilPhotos.ImageStream")));
			this->ilPhotos->TransparentColor = System::Drawing::Color::Transparent;
			this->ilPhotos->Images->SetKeyName(0, L"1.jpg");
			this->ilPhotos->Images->SetKeyName(1, L"2.jpg");
			this->ilPhotos->Images->SetKeyName(2, L"3.jpg");
			this->ilPhotos->Images->SetKeyName(3, L"4.jpg");
			this->ilPhotos->Images->SetKeyName(4, L"5.jpg");
			this->ilPhotos->Images->SetKeyName(5, L"6.jpg");
			this->ilPhotos->Images->SetKeyName(6, L"7.jpg");
			this->ilPhotos->Images->SetKeyName(7, L"8.jpg");
			// 
			// FrmChooseImage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 388);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnConfirm);
			this->Controls->Add(this->lvPhotos);
			this->Name = L"FrmChooseImage";
			this->Text = L"ѡ����Ƭ";
			this->Load += gcnew System::EventHandler(this, &FrmChooseImage::FrmChooseImage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmChooseImage_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < ilPhotos->Images->Count; i++)
		{
			lvPhotos->Items->Add(i + "", i);
		}
	}

	private: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lvPhotos->SelectedIndices->Count == 0)
		{
			MessageBox::Show("��ѡ��һ��ͷ��", "��ʾ");
		}
		else
		{
			int index = lvPhotos->SelectedIndices[0];
			// ͨ��ί�з�ʽ����������һ��������ķ���
			changeAction(index);
		}

	}

	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	};
}
