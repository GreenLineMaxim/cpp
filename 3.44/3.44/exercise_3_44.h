#pragma once
#include "Header.h"

namespace My344 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ exercise_3_44
	/// </summary>
	public ref class exercise_3_44 : public System::Windows::Forms::Form
	{
	public:
		exercise_3_44(void)
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
		~exercise_3_44()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ input_box;
	protected:
	private: System::Windows::Forms::Label^ output;
	private: System::Windows::Forms::Button^ enter_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Label^ input_tip;
	private: System::Windows::Forms::Label^ text_result;


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
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::Label());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->input_tip = (gcnew System::Windows::Forms::Label());
			this->text_result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// input_box
			// 
			this->input_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_box->Location = System::Drawing::Point(187, 12);
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(370, 38);
			this->input_box->TabIndex = 0;

			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->output->Location = System::Drawing::Point(181, 74);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(29, 31);
			this->output->TabIndex = 1;
			this->output->Text = L"0";
			// 
			// enter_button
			// 
			this->enter_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter_button->Location = System::Drawing::Point(22, 142);
			this->enter_button->Name = L"enter_button";
			this->enter_button->Size = System::Drawing::Size(120, 50);
			this->enter_button->TabIndex = 2;
			this->enter_button->Text = L"Get result";
			this->enter_button->UseVisualStyleBackColor = true;
			this->enter_button->Click += gcnew System::EventHandler(this, &exercise_3_44::enter_button_Click);
			// 
			// clear_button
			// 
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_button->Location = System::Drawing::Point(169, 142);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(120, 50);
			this->clear_button->TabIndex = 3;
			this->clear_button->Text = L"Clean fields";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &exercise_3_44::clear_button_Click);
			// 
			// input_tip
			// 
			this->input_tip->AutoSize = true;
			this->input_tip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_tip->Location = System::Drawing::Point(16, 12);
			this->input_tip->Name = L"input_tip";
			this->input_tip->Size = System::Drawing::Size(165, 31);
			this->input_tip->TabIndex = 4;
			this->input_tip->Text = L"Enter String:";
			// 
			// text_result
			// 
			this->text_result->AutoSize = true;
			this->text_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text_result->Location = System::Drawing::Point(22, 74);
			this->text_result->Name = L"text_result";
			this->text_result->Size = System::Drawing::Size(100, 31);
			this->text_result->TabIndex = 5;
			this->text_result->Text = L"Result:";
			// 
			// exercise_3_44
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 211);
			this->Controls->Add(this->text_result);
			this->Controls->Add(this->input_tip);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->enter_button);
			this->Controls->Add(this->output);
			this->Controls->Add(this->input_box);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"exercise_3_44";
			this->Text = L"exercise_3_44";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->output->Text = Convert::ToString(count_string(this->input_box->Text));
	}
	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
		input_box->Text = "";
		output->Text = "0";
	}
};
}
