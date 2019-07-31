#pragma once

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmGraphics ժҪ
	/// </summary>
	public ref class FrmGraphics : public System::Windows::Forms::Form
	{
	private:
		int imageIndex = 0;
	public:
		FrmGraphics(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//

			// ˫����ؼ���Ҫ����
			this->SetStyle(ControlStyles::OptimizedDoubleBuffer, true);
			this->SetStyle(ControlStyles::AllPaintingInWmPaint, true);
			this->SetStyle(ControlStyles::UserPaint, true);
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~FrmGraphics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmGraphics::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGraphics::timer1_Tick);
			// 
			// FrmGraphics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1272, 544);
			this->Name = L"FrmGraphics";
			this->Text = L"GDI��ͼ";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmGraphics::FrmGraphics_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int position_x = 700;
	private: System::Void FrmGraphics_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		/*
		Pen^ pen = gcnew Pen(Color::Red);
		e->Graphics->DrawEllipse(pen, 100, 100, 100, 100);

		// font ��ʹ��ȫ����
		System::Drawing::Font^ font = gcnew System::Drawing::Font("΢���ź�", 40, FontStyle::Bold);
		Brush^ brush = gcnew SolidBrush(Color::Green);
		e->Graphics->DrawString("Сѧ��", font, brush, 100, 300);
		*/
		String^ imgName = "frame_" + imageIndex + ".png";
		Image^ image = Image::FromFile("..\\..\\images\\images\\Zombies\\Zombie\\Zombie\\" + imgName);
		//e->Graphics->DrawImageUnscaled(image, 300, 100, 90, 120);// ����ͼƬԭʼ��������
		e->Graphics->DrawImage(image, position_x--, 100);

		imageIndex++;
		if (imageIndex == 21)
		{
			imageIndex = 0;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		// ʹ�ؼ�������ͼ����Ч�������ػ�ؼ�������FrmGraphics_Paint�ػ�
		this->Invalidate();
	}

	};
}
