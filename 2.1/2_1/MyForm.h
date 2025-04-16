#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>

namespace My21 {

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
	private: System::Windows::Forms::Button^ get_res;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ clear_data;
	private: System::Windows::Forms::Label^ res_first_point;
	private: System::Windows::Forms::Label^ res_second_point;


	private: System::Windows::Forms::Label^ lbl_input;

	private: System::Windows::Forms::Label^ lbl_output_dif;
	private: System::Windows::Forms::Label^ res_difference;
	private: System::Windows::Forms::TextBox^ input_box;


	protected:

	protected:

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
			this->get_res = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->clear_data = (gcnew System::Windows::Forms::Button());
			this->res_first_point = (gcnew System::Windows::Forms::Label());
			this->res_second_point = (gcnew System::Windows::Forms::Label());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->lbl_output_dif = (gcnew System::Windows::Forms::Label());
			this->res_difference = (gcnew System::Windows::Forms::Label());
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// get_res
			// 
			this->get_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->get_res->Location = System::Drawing::Point(12, 255);
			this->get_res->Name = L"get_res";
			this->get_res->Size = System::Drawing::Size(120, 60);
			this->get_res->TabIndex = 0;
			this->get_res->Text = L"Start!";
			this->get_res->UseVisualStyleBackColor = true;
			this->get_res->Click += gcnew System::EventHandler(this, &MyForm::get_res_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Point one:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Point two:";
			// 
			// clear_data
			// 
			this->clear_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_data->Location = System::Drawing::Point(212, 255);
			this->clear_data->Name = L"clear_data";
			this->clear_data->Size = System::Drawing::Size(120, 60);
			this->clear_data->TabIndex = 3;
			this->clear_data->Text = L"Clear";
			this->clear_data->UseVisualStyleBackColor = true;
			this->clear_data->Click += gcnew System::EventHandler(this, &MyForm::clear_data_Click);
			// 
			// res_first_point
			// 
			this->res_first_point->AutoSize = true;
			this->res_first_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_first_point->Location = System::Drawing::Point(144, 81);
			this->res_first_point->Name = L"res_first_point";
			this->res_first_point->Size = System::Drawing::Size(23, 25);
			this->res_first_point->TabIndex = 4;
			this->res_first_point->Text = L"0";
			// 
			// res_second_point
			// 
			this->res_second_point->AutoSize = true;
			this->res_second_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_second_point->Location = System::Drawing::Point(144, 128);
			this->res_second_point->Name = L"res_second_point";
			this->res_second_point->Size = System::Drawing::Size(23, 25);
			this->res_second_point->TabIndex = 5;
			this->res_second_point->Text = L"0";
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_input->Location = System::Drawing::Point(15, 26);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(245, 25);
			this->lbl_input->TabIndex = 6;
			this->lbl_input->Text = L"Enter the number of points:";
			// 
			// lbl_output_dif
			// 
			this->lbl_output_dif->AutoSize = true;
			this->lbl_output_dif->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_output_dif->Location = System::Drawing::Point(15, 178);
			this->lbl_output_dif->Name = L"lbl_output_dif";
			this->lbl_output_dif->Size = System::Drawing::Size(152, 25);
			this->lbl_output_dif->TabIndex = 8;
			this->lbl_output_dif->Text = L"Point difference:";
			// 
			// res_difference
			// 
			this->res_difference->AutoSize = true;
			this->res_difference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_difference->Location = System::Drawing::Point(173, 178);
			this->res_difference->Name = L"res_difference";
			this->res_difference->Size = System::Drawing::Size(23, 25);
			this->res_difference->TabIndex = 9;
			this->res_difference->Text = L"0";
			// 
			// input_box
			// 
			this->input_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_box->Location = System::Drawing::Point(267, 26);
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(65, 30);
			this->input_box->TabIndex = 10;
			this->input_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::input_box_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 327);
			this->Controls->Add(this->input_box);
			this->Controls->Add(this->res_difference);
			this->Controls->Add(this->lbl_output_dif);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->res_second_point);
			this->Controls->Add(this->res_first_point);
			this->Controls->Add(this->clear_data);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->get_res);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void get_res_Click(System::Object^ sender, System::EventArgs^ e) {
		if (input_box->Text->Length < 1 || Convert::ToInt32(input_box->Text) > 200) {
			MessageBox::Show(this, "not correct data!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			int first_point, second_point, difference;
			std::tie(first_point, second_point, difference) = find_points(Convert::ToInt32(input_box->Text));
			this->res_first_point->Text = Convert::ToString(first_point);
			this->res_second_point->Text = Convert::ToString(second_point);
			this->res_difference->Text = Convert::ToString(difference);
		}
	}
	private: System::Void clear_data_Click(System::Object^ sender, System::EventArgs^ e) {
		input_box->Text = "";
		res_first_point->Text = "0";
		res_second_point->Text = "0";
		res_difference->Text = "0";
	}
	private: System::Void input_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
			e->Handled = true;
		}
	}
};
}
