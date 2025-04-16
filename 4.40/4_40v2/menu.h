#pragma once
#include "Add form people.h"
#include "Result.h"

namespace My440v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_form;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ get_result;

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
			this->add_form = (gcnew System::Windows::Forms::Button());
			this->get_result = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// add_form
			// 
			this->add_form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_form->Location = System::Drawing::Point(27, 36);
			this->add_form->Name = L"add_form";
			this->add_form->Size = System::Drawing::Size(150, 70);
			this->add_form->TabIndex = 0;
			this->add_form->Text = L"Add human";
			this->add_form->UseVisualStyleBackColor = true;
			this->add_form->Click += gcnew System::EventHandler(this, &menu::add_form_Click);
			// 
			// get_result
			// 
			this->get_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->get_result->Location = System::Drawing::Point(220, 36);
			this->get_result->Name = L"get_result";
			this->get_result->Size = System::Drawing::Size(150, 70);
			this->get_result->TabIndex = 1;
			this->get_result->Text = L"Result";
			this->get_result->UseVisualStyleBackColor = true;
			this->get_result->Click += gcnew System::EventHandler(this, &menu::get_result_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 138);
			this->Controls->Add(this->get_result);
			this->Controls->Add(this->add_form);
			this->Name = L"menu";
			this->Text = L"menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void add_form_Click(System::Object^ sender, System::EventArgs^ e) {
		Addformpeople^ add_form = gcnew Addformpeople();
		add_form->Show();
	}
	private: System::Void get_result_Click(System::Object^ sender, System::EventArgs^ e) {
		Result^ add_form = gcnew Result();
		add_form->Show();
	}
	};
}
