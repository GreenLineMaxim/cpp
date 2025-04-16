#pragma once
#include "Header.h"

namespace My440v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Addformpeople
	/// </summary>
	public ref class Addformpeople : public System::Windows::Forms::Form
	{
	public:
		Addformpeople(void)
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
		~Addformpeople()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_gender;
	private: System::Windows::Forms::Button^ back_to_menu_form;
	protected:

	protected:

	private: System::Windows::Forms::Button^ clear_fields;

	private: System::Windows::Forms::Button^ create_form;
	private: System::Windows::Forms::Label^ lbl_sec_name;
	private: System::Windows::Forms::Label^ lbl_birth;
	private: System::Windows::Forms::TextBox^ input_surname;
	private: System::Windows::Forms::DateTimePicker^ input_date_birth;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ input_female;
	private: System::Windows::Forms::RadioButton^ input_male;




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
			this->lbl_gender = (gcnew System::Windows::Forms::Label());
			this->back_to_menu_form = (gcnew System::Windows::Forms::Button());
			this->clear_fields = (gcnew System::Windows::Forms::Button());
			this->create_form = (gcnew System::Windows::Forms::Button());
			this->lbl_sec_name = (gcnew System::Windows::Forms::Label());
			this->lbl_birth = (gcnew System::Windows::Forms::Label());
			this->input_surname = (gcnew System::Windows::Forms::TextBox());
			this->input_date_birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->input_female = (gcnew System::Windows::Forms::RadioButton());
			this->input_male = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_gender
			// 
			this->lbl_gender->AutoSize = true;
			this->lbl_gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_gender->Location = System::Drawing::Point(12, 29);
			this->lbl_gender->Name = L"lbl_gender";
			this->lbl_gender->Size = System::Drawing::Size(303, 25);
			this->lbl_gender->TabIndex = 0;
			this->lbl_gender->Text = L"Choose the gender of the person:";
			// 
			// back_to_menu_form
			// 
			this->back_to_menu_form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_to_menu_form->Location = System::Drawing::Point(45, 332);
			this->back_to_menu_form->Name = L"back_to_menu_form";
			this->back_to_menu_form->Size = System::Drawing::Size(150, 70);
			this->back_to_menu_form->TabIndex = 1;
			this->back_to_menu_form->Text = L"Back to menu";
			this->back_to_menu_form->UseVisualStyleBackColor = true;
			this->back_to_menu_form->Click += gcnew System::EventHandler(this, &Addformpeople::back_to_menu_form_Click);
			// 
			// clear_fields
			// 
			this->clear_fields->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_fields->Location = System::Drawing::Point(400, 332);
			this->clear_fields->Name = L"clear_fields";
			this->clear_fields->Size = System::Drawing::Size(150, 70);
			this->clear_fields->TabIndex = 2;
			this->clear_fields->Text = L"Clear";
			this->clear_fields->UseVisualStyleBackColor = true;
			this->clear_fields->Click += gcnew System::EventHandler(this, &Addformpeople::clear_fields_Click);
			// 
			// create_form
			// 
			this->create_form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_form->Location = System::Drawing::Point(223, 332);
			this->create_form->Name = L"create_form";
			this->create_form->Size = System::Drawing::Size(150, 70);
			this->create_form->TabIndex = 3;
			this->create_form->Text = L"Add form";
			this->create_form->UseVisualStyleBackColor = true;
			this->create_form->Click += gcnew System::EventHandler(this, &Addformpeople::create_form_Click);
			// 
			// lbl_sec_name
			// 
			this->lbl_sec_name->AutoSize = true;
			this->lbl_sec_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_sec_name->Location = System::Drawing::Point(217, 104);
			this->lbl_sec_name->Name = L"lbl_sec_name";
			this->lbl_sec_name->Size = System::Drawing::Size(98, 25);
			this->lbl_sec_name->TabIndex = 4;
			this->lbl_sec_name->Text = L"Surname:";
			// 
			// lbl_birth
			// 
			this->lbl_birth->AutoSize = true;
			this->lbl_birth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_birth->Location = System::Drawing::Point(193, 167);
			this->lbl_birth->Name = L"lbl_birth";
			this->lbl_birth->Size = System::Drawing::Size(122, 25);
			this->lbl_birth->TabIndex = 5;
			this->lbl_birth->Text = L"Date of birth:";
			// 
			// input_surname
			// 
			this->input_surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_surname->Location = System::Drawing::Point(337, 101);
			this->input_surname->Name = L"input_surname";
			this->input_surname->Size = System::Drawing::Size(200, 30);
			this->input_surname->TabIndex = 6;
			// 
			// input_date_birth
			// 
			this->input_date_birth->CustomFormat = L"";
			this->input_date_birth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_date_birth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->input_date_birth->Location = System::Drawing::Point(337, 162);
			this->input_date_birth->MaxDate = System::DateTime(2023, 5, 23, 0, 0, 0, 0);
			this->input_date_birth->Name = L"input_date_birth";
			this->input_date_birth->Size = System::Drawing::Size(200, 30);
			this->input_date_birth->TabIndex = 7;
			this->input_date_birth->Value = System::DateTime(2023, 5, 23, 0, 0, 0, 0);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->input_female);
			this->groupBox1->Controls->Add(this->input_male);
			this->groupBox1->Location = System::Drawing::Point(337, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(245, 67);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// input_female
			// 
			this->input_female->AutoSize = true;
			this->input_female->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_female->Location = System::Drawing::Point(118, 19);
			this->input_female->Name = L"input_female";
			this->input_female->Size = System::Drawing::Size(95, 29);
			this->input_female->TabIndex = 1;
			this->input_female->TabStop = true;
			this->input_female->Text = L"Female";
			this->input_female->UseVisualStyleBackColor = true;
			// 
			// input_male
			// 
			this->input_male->AutoSize = true;
			this->input_male->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_male->Location = System::Drawing::Point(6, 19);
			this->input_male->Name = L"input_male";
			this->input_male->Size = System::Drawing::Size(73, 29);
			this->input_male->TabIndex = 0;
			this->input_male->TabStop = true;
			this->input_male->Text = L"Male";
			this->input_male->UseVisualStyleBackColor = true;
			// 
			// Addformpeople
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 414);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->input_date_birth);
			this->Controls->Add(this->input_surname);
			this->Controls->Add(this->lbl_birth);
			this->Controls->Add(this->lbl_sec_name);
			this->Controls->Add(this->create_form);
			this->Controls->Add(this->clear_fields);
			this->Controls->Add(this->back_to_menu_form);
			this->Controls->Add(this->lbl_gender);
			this->Name = L"Addformpeople";
			this->Text = L"Addformpeople";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void back_to_menu_form_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void clear_fields_Click(System::Object^ sender, System::EventArgs^ e) {
		input_surname->Text = "";
		input_male->Checked = false;
		input_female->Checked = false;
	}


	private: System::Void create_form_Click(System::Object^ sender, System::EventArgs^ e) {	
		if (!this->input_male->Checked && !this->input_female->Checked) {
			MessageBox::Show(this, "Choose the gender of the person!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->input_surname->Text->Length < 1) {
			MessageBox::Show(this, "Enter surname!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->input_male->Checked) {
			add_form_people(this->input_male->Text, this->input_surname->Text, this->input_date_birth->Text);
			input_surname->Text = "";
			input_male->Checked = false;
			input_female->Checked = false;
		}
		else if (this->input_female->Checked) {
			add_form_people(this->input_female->Text, this->input_surname->Text, this->input_date_birth->Text);
			input_surname->Text = "";
			input_male->Checked = false;
			input_female->Checked = false;
		}
	}
};
}
