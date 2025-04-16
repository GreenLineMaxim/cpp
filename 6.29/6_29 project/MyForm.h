#include "Header.h"
#include <msclr\marshal_cppstd.h>
#pragma once


namespace My629project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ select_file;
	protected:

	private: System::Windows::Forms::Label^ lbl_old_year;
	private: System::Windows::Forms::Label^ lbl_last_date;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ year_lowest_number;
	private: System::Windows::Forms::Label^ last_date;

	private: System::Windows::Forms::ListBox^ spring_dates;
	private: System::Windows::Forms::Button^ enter_button;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ file_path;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->select_file = (gcnew System::Windows::Forms::Button());
			this->lbl_old_year = (gcnew System::Windows::Forms::Label());
			this->lbl_last_date = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->year_lowest_number = (gcnew System::Windows::Forms::Label());
			this->last_date = (gcnew System::Windows::Forms::Label());
			this->spring_dates = (gcnew System::Windows::Forms::ListBox());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->file_path = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"\"Text|*.txt|All|*.*";
			// 
			// select_file
			// 
			this->select_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->select_file->Location = System::Drawing::Point(23, 12);
			this->select_file->Name = L"select_file";
			this->select_file->Size = System::Drawing::Size(125, 50);
			this->select_file->TabIndex = 0;
			this->select_file->Text = L"Choose file";
			this->select_file->UseVisualStyleBackColor = true;
			this->select_file->Click += gcnew System::EventHandler(this, &MyForm::select_file_Click);
			// 
			// lbl_old_year
			// 
			this->lbl_old_year->AutoSize = true;
			this->lbl_old_year->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_old_year->Location = System::Drawing::Point(18, 147);
			this->lbl_old_year->Name = L"lbl_old_year";
			this->lbl_old_year->Size = System::Drawing::Size(298, 25);
			this->lbl_old_year->TabIndex = 1;
			this->lbl_old_year->Text = L"The year with the lowest number:";
			// 
			// lbl_last_date
			// 
			this->lbl_last_date->AutoSize = true;
			this->lbl_last_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_last_date->Location = System::Drawing::Point(18, 184);
			this->lbl_last_date->Name = L"lbl_last_date";
			this->lbl_last_date->Size = System::Drawing::Size(114, 25);
			this->lbl_last_date->TabIndex = 2;
			this->lbl_last_date->Text = L"Latest date:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"All spring dates:";
			// 
			// year_lowest_number
			// 
			this->year_lowest_number->AutoSize = true;
			this->year_lowest_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->year_lowest_number->Location = System::Drawing::Point(322, 147);
			this->year_lowest_number->Name = L"year_lowest_number";
			this->year_lowest_number->Size = System::Drawing::Size(23, 25);
			this->year_lowest_number->TabIndex = 4;
			this->year_lowest_number->Text = L"0";
			// 
			// last_date
			// 
			this->last_date->AutoSize = true;
			this->last_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->last_date->Location = System::Drawing::Point(149, 184);
			this->last_date->Name = L"last_date";
			this->last_date->Size = System::Drawing::Size(23, 25);
			this->last_date->TabIndex = 5;
			this->last_date->Text = L"0";
			// 
			// spring_dates
			// 
			this->spring_dates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->spring_dates->FormattingEnabled = true;
			this->spring_dates->ItemHeight = 25;
			this->spring_dates->Location = System::Drawing::Point(23, 268);
			this->spring_dates->Name = L"spring_dates";
			this->spring_dates->Size = System::Drawing::Size(387, 179);
			this->spring_dates->TabIndex = 7;
			// 
			// enter_button
			// 
			this->enter_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter_button->Location = System::Drawing::Point(154, 12);
			this->enter_button->Name = L"enter_button";
			this->enter_button->Size = System::Drawing::Size(125, 50);
			this->enter_button->TabIndex = 8;
			this->enter_button->Text = L"Get result";
			this->enter_button->UseVisualStyleBackColor = true;
			this->enter_button->Click += gcnew System::EventHandler(this, &MyForm::enter_button_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->Location = System::Drawing::Point(285, 12);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(125, 50);
			this->clear->TabIndex = 9;
			this->clear->Text = L"Clear fields";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// file_path
			// 
			this->file_path->Location = System::Drawing::Point(23, 85);
			this->file_path->Name = L"file_path";
			this->file_path->Size = System::Drawing::Size(387, 20);
			this->file_path->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 468);
			this->Controls->Add(this->file_path);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->enter_button);
			this->Controls->Add(this->spring_dates);
			this->Controls->Add(this->last_date);
			this->Controls->Add(this->year_lowest_number);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_last_date);
			this->Controls->Add(this->lbl_old_year);
			this->Controls->Add(this->select_file);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void select_file_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog()) {
		file_path->Text = openFileDialog1->FileName;
	}
}

private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->file_path->Text->Length < 1) {
		MessageBox::Show(this, "You dont choose a file!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		std::vector<std::tuple<int, int, int>> data_file = read_file(msclr::interop::marshal_as<std::string>(file_path->Text));


		int oldest_day, oldest_month, oldest_year;
		std::tie(oldest_day, oldest_month, oldest_year) = find_oldest_date(data_file);
		last_date->Text = Convert::ToString(oldest_day) + "." + Convert::ToString(oldest_month) + "." + Convert::ToString(oldest_year);


		year_lowest_number->Text = Convert::ToString(find_year_with_lowest_number(data_file));


		std::vector<std::tuple<int, int, int>> all_sping_dates = find_spring_dates(data_file);

		for (const auto& elem : all_sping_dates) {
			int day, month, year;
			std::tie(day, month, year) = elem;
			spring_dates->Items->Add(gcnew String(Convert::ToString(day) + "." + Convert::ToString(month) + "." + Convert::ToString(year)));
		}
	}
}

private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	year_lowest_number->Text = "0";
	last_date->Text = "0";
	spring_dates->Items->Clear();
}
};
}
