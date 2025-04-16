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
	/// —водка дл€ Result
	/// </summary>
	public ref class Result : public System::Windows::Forms::Form
	{
	public:
		Result(void)
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
		~Result()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_oldest_man;
	protected:
	private: System::Windows::Forms::Label^ output_oldest_man;
	private: System::Windows::Forms::ListBox^ all_person_b;

	private: System::Windows::Forms::Label^ lbl_surname_b;
	private: System::Windows::Forms::Button^ back_to_menu_res;

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
			this->lbl_oldest_man = (gcnew System::Windows::Forms::Label());
			this->output_oldest_man = (gcnew System::Windows::Forms::Label());
			this->all_person_b = (gcnew System::Windows::Forms::ListBox());
			this->lbl_surname_b = (gcnew System::Windows::Forms::Label());
			this->back_to_menu_res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_oldest_man
			// 
			this->lbl_oldest_man->AutoSize = true;
			this->lbl_oldest_man->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_oldest_man->Location = System::Drawing::Point(13, 22);
			this->lbl_oldest_man->Name = L"lbl_oldest_man";
			this->lbl_oldest_man->Size = System::Drawing::Size(153, 25);
			this->lbl_oldest_man->TabIndex = 0;
			this->lbl_oldest_man->Text = L"The oldest man:";
			// 
			// output_oldest_man
			// 
			this->output_oldest_man->AutoSize = true;
			this->output_oldest_man->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->output_oldest_man->Location = System::Drawing::Point(189, 22);
			this->output_oldest_man->Name = L"output_oldest_man";
			this->output_oldest_man->Size = System::Drawing::Size(26, 25);
			this->output_oldest_man->TabIndex = 1;
			this->output_oldest_man->Text = L"--";
			// 
			// all_person_b
			// 
			this->all_person_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->all_person_b->FormattingEnabled = true;
			this->all_person_b->ItemHeight = 25;
			this->all_person_b->Location = System::Drawing::Point(18, 94);
			this->all_person_b->Name = L"all_person_b";
			this->all_person_b->Size = System::Drawing::Size(498, 204);
			this->all_person_b->TabIndex = 2;
			// 
			// lbl_surname_b
			// 
			this->lbl_surname_b->AutoSize = true;
			this->lbl_surname_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_surname_b->Location = System::Drawing::Point(18, 62);
			this->lbl_surname_b->Name = L"lbl_surname_b";
			this->lbl_surname_b->Size = System::Drawing::Size(299, 25);
			this->lbl_surname_b->TabIndex = 3;
			this->lbl_surname_b->Text = L"All people with the surname on b:";
			// 
			// back_to_menu_res
			// 
			this->back_to_menu_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_to_menu_res->Location = System::Drawing::Point(16, 323);
			this->back_to_menu_res->Name = L"back_to_menu_res";
			this->back_to_menu_res->Size = System::Drawing::Size(150, 70);
			this->back_to_menu_res->TabIndex = 4;
			this->back_to_menu_res->Text = L"Back";
			this->back_to_menu_res->UseVisualStyleBackColor = true;
			this->back_to_menu_res->Click += gcnew System::EventHandler(this, &Result::back_to_menu_res_Click);
			// 
			// Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 407);
			this->Controls->Add(this->back_to_menu_res);
			this->Controls->Add(this->lbl_surname_b);
			this->Controls->Add(this->all_person_b);
			this->Controls->Add(this->output_oldest_man);
			this->Controls->Add(this->lbl_oldest_man);
			this->Name = L"Result";
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &Result::Result_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_to_menu_res_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void Result_Load(System::Object^ sender, System::EventArgs^ e) {
		output_oldest_man->Text = gcnew String(find_oldest_man().c_str());
		
		
		std::vector<std::tuple<std::string, std::string>> surname_b = find_surname_b();

		for (const auto& elem : surname_b) {
			std::string second_name, date, text;
			std::tie(second_name, date) = elem;
			text = second_name + " " + date;
			all_person_b->Items->Add(gcnew String(text.c_str()));
		}
	}
};
}
