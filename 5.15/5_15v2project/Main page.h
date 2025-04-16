#pragma once
#include "CreateDrink.h"
#include "Result.h"


namespace My515v2project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Mainpage
	/// </summary>
	public ref class Mainpage : public System::Windows::Forms::Form
	{
	public:
		Mainpage(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Mainpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Create_drink;
	protected:
	private: System::Windows::Forms::Button^ get_res;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Create_drink = (gcnew System::Windows::Forms::Button());
			this->get_res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Create_drink
			// 
			this->Create_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Create_drink->Location = System::Drawing::Point(25, 45);
			this->Create_drink->Name = L"Create_drink";
			this->Create_drink->Size = System::Drawing::Size(150, 70);
			this->Create_drink->TabIndex = 0;
			this->Create_drink->Text = L"Create drink";
			this->Create_drink->UseVisualStyleBackColor = true;
			this->Create_drink->Click += gcnew System::EventHandler(this, &Mainpage::Create_drink_Click);
			// 
			// get_res
			// 
			this->get_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->get_res->Location = System::Drawing::Point(196, 45);
			this->get_res->Name = L"get_res";
			this->get_res->Size = System::Drawing::Size(170, 70);
			this->get_res->TabIndex = 1;
			this->get_res->Text = L"Result";
			this->get_res->UseVisualStyleBackColor = true;
			this->get_res->Click += gcnew System::EventHandler(this, &Mainpage::get_res_Click);
			// 
			// Mainpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 157);
			this->Controls->Add(this->get_res);
			this->Controls->Add(this->Create_drink);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Mainpage";
			this->Text = L"Mainpage";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Create_drink_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateDrink^ add_form = gcnew CreateDrink();
		add_form->Show();
	}
	private: System::Void get_res_Click(System::Object^ sender, System::EventArgs^ e) {
		Result^ add_form = gcnew Result();
		add_form->Show();
	}
};
}
