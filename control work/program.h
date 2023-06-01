#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>

namespace controlwork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для program
	/// </summary>
	public ref class program : public System::Windows::Forms::Form
	{
	public:
		program(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_input_string;
	protected:
	private: System::Windows::Forms::TextBox^ input_string;
	private: System::Windows::Forms::Button^ get_res;
	private: System::Windows::Forms::Label^ lbl_res_not_recursive;
	private: System::Windows::Forms::Label^ lbl_res_recursive;
	private: System::Windows::Forms::ListBox^ res_not_recursive;

	private: System::Windows::Forms::Button^ clear_fields;
	private: System::Windows::Forms::ListBox^ res_recursive;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_input_string = (gcnew System::Windows::Forms::Label());
			this->input_string = (gcnew System::Windows::Forms::TextBox());
			this->get_res = (gcnew System::Windows::Forms::Button());
			this->lbl_res_not_recursive = (gcnew System::Windows::Forms::Label());
			this->lbl_res_recursive = (gcnew System::Windows::Forms::Label());
			this->res_not_recursive = (gcnew System::Windows::Forms::ListBox());
			this->clear_fields = (gcnew System::Windows::Forms::Button());
			this->res_recursive = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// lbl_input_string
			// 
			this->lbl_input_string->AutoSize = true;
			this->lbl_input_string->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_input_string->Location = System::Drawing::Point(22, 25);
			this->lbl_input_string->Name = L"lbl_input_string";
			this->lbl_input_string->Size = System::Drawing::Size(165, 25);
			this->lbl_input_string->TabIndex = 0;
			this->lbl_input_string->Text = L"Введите строку:";
			// 
			// input_string
			// 
			this->input_string->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_string->Location = System::Drawing::Point(205, 25);
			this->input_string->Name = L"input_string";
			this->input_string->Size = System::Drawing::Size(335, 30);
			this->input_string->TabIndex = 1;
			// 
			// get_res
			// 
			this->get_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->get_res->Location = System::Drawing::Point(120, 705);
			this->get_res->Name = L"get_res";
			this->get_res->Size = System::Drawing::Size(150, 70);
			this->get_res->TabIndex = 2;
			this->get_res->Text = L"Начать";
			this->get_res->UseVisualStyleBackColor = true;
			this->get_res->Click += gcnew System::EventHandler(this, &program::get_res_Click);
			// 
			// lbl_res_not_recursive
			// 
			this->lbl_res_not_recursive->AutoSize = true;
			this->lbl_res_not_recursive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lbl_res_not_recursive->Location = System::Drawing::Point(22, 87);
			this->lbl_res_not_recursive->Name = L"lbl_res_not_recursive";
			this->lbl_res_not_recursive->Size = System::Drawing::Size(518, 25);
			this->lbl_res_not_recursive->TabIndex = 3;
			this->lbl_res_not_recursive->Text = L"Все перестановки символов в строке (не рекурсивно):";
			// 
			// lbl_res_recursive
			// 
			this->lbl_res_recursive->AutoSize = true;
			this->lbl_res_recursive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_res_recursive->Location = System::Drawing::Point(22, 419);
			this->lbl_res_recursive->Name = L"lbl_res_recursive";
			this->lbl_res_recursive->Size = System::Drawing::Size(491, 25);
			this->lbl_res_recursive->TabIndex = 4;
			this->lbl_res_recursive->Text = L"Все перестановки символов в строке (рекурсивно):";
			// 
			// res_not_recursive
			// 
			this->res_not_recursive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_not_recursive->FormattingEnabled = true;
			this->res_not_recursive->ItemHeight = 25;
			this->res_not_recursive->Location = System::Drawing::Point(27, 135);
			this->res_not_recursive->Name = L"res_not_recursive";
			this->res_not_recursive->Size = System::Drawing::Size(513, 254);
			this->res_not_recursive->TabIndex = 5;
			// 
			// clear_fields
			// 
			this->clear_fields->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_fields->Location = System::Drawing::Point(297, 705);
			this->clear_fields->Name = L"clear_fields";
			this->clear_fields->Size = System::Drawing::Size(150, 70);
			this->clear_fields->TabIndex = 7;
			this->clear_fields->Text = L"Отчистить";
			this->clear_fields->UseVisualStyleBackColor = true;
			this->clear_fields->Click += gcnew System::EventHandler(this, &program::clear_fields_Click);
			// 
			// res_recursive
			// 
			this->res_recursive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_recursive->FormattingEnabled = true;
			this->res_recursive->ItemHeight = 25;
			this->res_recursive->Location = System::Drawing::Point(27, 463);
			this->res_recursive->Name = L"res_recursive";
			this->res_recursive->Size = System::Drawing::Size(513, 229);
			this->res_recursive->TabIndex = 9;
			// 
			// program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 787);
			this->Controls->Add(this->res_recursive);
			this->Controls->Add(this->clear_fields);
			this->Controls->Add(this->res_not_recursive);
			this->Controls->Add(this->lbl_res_recursive);
			this->Controls->Add(this->lbl_res_not_recursive);
			this->Controls->Add(this->get_res);
			this->Controls->Add(this->input_string);
			this->Controls->Add(this->lbl_input_string);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"program";
			this->Text = L"program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void get_res_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input_string->Text->Length < 1) {
			MessageBox::Show(this, "Введите строку!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			std::string convert_entered_string = msclr::interop::marshal_as<std::string>(this->input_string->Text);

			std::vector<std::string> permutation_option = permute_not_recursive(convert_entered_string);

			for (const auto& elem : permutation_option) {
				std::string output_str;
				output_str = elem;
				res_not_recursive->Items->Add(gcnew String(output_str.c_str()));
			}


			permute_recursive(convert_entered_string, 0, convert_entered_string.length() - 1);

			for (int i = 0; i < permute_rec.size(); i++) {
				std::string output_str_rec;
				output_str_rec = permute_rec[i];
				res_recursive->Items->Add(gcnew String(output_str_rec.c_str()));
			}
		}
	}


	private: System::Void clear_fields_Click(System::Object^ sender, System::EventArgs^ e) {
		this->input_string->Text = "";
		res_not_recursive->Items->Clear();
		res_recursive->Items->Clear();
	}
};
}
