#pragma once
#include "Header.h";


namespace My515v2project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CreateDrink
	/// </summary>
	public ref class CreateDrink : public System::Windows::Forms::Form
	{
	public:
		CreateDrink(void)
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
		~CreateDrink()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;



	protected:


	private: System::Windows::Forms::Label^ lbl_name_drink;


	private: System::Windows::Forms::Label^ lbl_price_drink;
	private: System::Windows::Forms::Label^ lbl_quantity_drink;


	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Button^ back_from_createform;
	private: System::Windows::Forms::Button^ Create_form;
	private: System::Windows::Forms::Button^ clear;






	private: System::Windows::Forms::TextBox^ input_name_drink;
	private: System::Windows::Forms::TextBox^ input_price;
	private: System::Windows::Forms::TextBox^ input_quantity;
	private: System::Windows::Forms::RadioButton^ choice_soft_drink;
	private: System::Windows::Forms::RadioButton^ choice_alco_drink;
	private: System::Windows::Forms::Label^ lbl_capacity_or_fortness;
	private: System::Windows::Forms::TextBox^ input_fortness_or_capacity;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->choice_alco_drink = (gcnew System::Windows::Forms::RadioButton());
			this->choice_soft_drink = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_name_drink = (gcnew System::Windows::Forms::Label());
			this->lbl_price_drink = (gcnew System::Windows::Forms::Label());
			this->lbl_quantity_drink = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->back_from_createform = (gcnew System::Windows::Forms::Button());
			this->Create_form = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->input_name_drink = (gcnew System::Windows::Forms::TextBox());
			this->input_price = (gcnew System::Windows::Forms::TextBox());
			this->input_quantity = (gcnew System::Windows::Forms::TextBox());
			this->lbl_capacity_or_fortness = (gcnew System::Windows::Forms::Label());
			this->input_fortness_or_capacity = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->choice_alco_drink);
			this->groupBox1->Controls->Add(this->choice_soft_drink);
			this->groupBox1->Location = System::Drawing::Point(272, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(428, 79);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// choice_alco_drink
			// 
			this->choice_alco_drink->AutoSize = true;
			this->choice_alco_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->choice_alco_drink->Location = System::Drawing::Point(195, 36);
			this->choice_alco_drink->Name = L"choice_alco_drink";
			this->choice_alco_drink->Size = System::Drawing::Size(196, 29);
			this->choice_alco_drink->TabIndex = 18;
			this->choice_alco_drink->Text = L"Alcoholic beverage";
			this->choice_alco_drink->UseVisualStyleBackColor = true;
			this->choice_alco_drink->CheckedChanged += gcnew System::EventHandler(this, &CreateDrink::choice_alco_drink_CheckedChanged);
			// 
			// choice_soft_drink
			// 
			this->choice_soft_drink->AutoSize = true;
			this->choice_soft_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->choice_soft_drink->Location = System::Drawing::Point(33, 36);
			this->choice_soft_drink->Name = L"choice_soft_drink";
			this->choice_soft_drink->Size = System::Drawing::Size(112, 29);
			this->choice_soft_drink->TabIndex = 2;
			this->choice_soft_drink->Text = L"Soft drink";
			this->choice_soft_drink->UseVisualStyleBackColor = true;
			this->choice_soft_drink->CheckedChanged += gcnew System::EventHandler(this, &CreateDrink::choice_soft_drink_CheckedChanged);
			// 
			// lbl_name_drink
			// 
			this->lbl_name_drink->AutoSize = true;
			this->lbl_name_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_name_drink->Location = System::Drawing::Point(127, 123);
			this->lbl_name_drink->Name = L"lbl_name_drink";
			this->lbl_name_drink->Size = System::Drawing::Size(170, 25);
			this->lbl_name_drink->TabIndex = 1;
			this->lbl_name_drink->Text = L"Name of the drink:";
			// 
			// lbl_price_drink
			// 
			this->lbl_price_drink->AutoSize = true;
			this->lbl_price_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_price_drink->Location = System::Drawing::Point(205, 159);
			this->lbl_price_drink->Name = L"lbl_price_drink";
			this->lbl_price_drink->Size = System::Drawing::Size(92, 25);
			this->lbl_price_drink->TabIndex = 2;
			this->lbl_price_drink->Text = L"Price ($):";
			// 
			// lbl_quantity_drink
			// 
			this->lbl_quantity_drink->AutoSize = true;
			this->lbl_quantity_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_quantity_drink->Location = System::Drawing::Point(206, 196);
			this->lbl_quantity_drink->Name = L"lbl_quantity_drink";
			this->lbl_quantity_drink->Size = System::Drawing::Size(91, 25);
			this->lbl_quantity_drink->TabIndex = 3;
			this->lbl_quantity_drink->Text = L"Quantity:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(18, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"—hoose the type of drink:";
			this->label2->UseCompatibleTextRendering = true;
			this->label2->UseWaitCursor = true;
			// 
			// back_from_createform
			// 
			this->back_from_createform->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->back_from_createform->Location = System::Drawing::Point(103, 312);
			this->back_from_createform->Name = L"back_from_createform";
			this->back_from_createform->Size = System::Drawing::Size(150, 70);
			this->back_from_createform->TabIndex = 7;
			this->back_from_createform->Text = L"Back to menu";
			this->back_from_createform->UseVisualStyleBackColor = true;
			this->back_from_createform->Click += gcnew System::EventHandler(this, &CreateDrink::back_from_createform_Click);
			// 
			// Create_form
			// 
			this->Create_form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Create_form->Location = System::Drawing::Point(305, 312);
			this->Create_form->Name = L"Create_form";
			this->Create_form->Size = System::Drawing::Size(150, 70);
			this->Create_form->TabIndex = 8;
			this->Create_form->Text = L"Create form";
			this->Create_form->UseVisualStyleBackColor = true;
			this->Create_form->Click += gcnew System::EventHandler(this, &CreateDrink::Create_form_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->Location = System::Drawing::Point(503, 312);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(150, 70);
			this->clear->TabIndex = 9;
			this->clear->Text = L"Clear fields";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &CreateDrink::clear_Click);
			// 
			// input_name_drink
			// 
			this->input_name_drink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_name_drink->Location = System::Drawing::Point(305, 123);
			this->input_name_drink->Name = L"input_name_drink";
			this->input_name_drink->Size = System::Drawing::Size(150, 30);
			this->input_name_drink->TabIndex = 15;
			// 
			// input_price
			// 
			this->input_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_price->Location = System::Drawing::Point(305, 159);
			this->input_price->Name = L"input_price";
			this->input_price->Size = System::Drawing::Size(150, 30);
			this->input_price->TabIndex = 16;
			this->input_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateDrink::input_price_KeyPress);
			// 
			// input_quantity
			// 
			this->input_quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_quantity->Location = System::Drawing::Point(305, 196);
			this->input_quantity->Name = L"input_quantity";
			this->input_quantity->Size = System::Drawing::Size(150, 30);
			this->input_quantity->TabIndex = 17;
			this->input_quantity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateDrink::input_quantity_KeyPress);
			// 
			// lbl_capacity_or_fortness
			// 
			this->lbl_capacity_or_fortness->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl_capacity_or_fortness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lbl_capacity_or_fortness->Location = System::Drawing::Point(13, 238);
			this->lbl_capacity_or_fortness->Name = L"lbl_capacity_or_fortness";
			this->lbl_capacity_or_fortness->Size = System::Drawing::Size(275, 30);
			this->lbl_capacity_or_fortness->TabIndex = 18;
			this->lbl_capacity_or_fortness->Text = L"Depends on the type of drink:";
			this->lbl_capacity_or_fortness->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// input_fortness_or_capacity
			// 
			this->input_fortness_or_capacity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->input_fortness_or_capacity->Location = System::Drawing::Point(305, 238);
			this->input_fortness_or_capacity->Name = L"input_fortness_or_capacity";
			this->input_fortness_or_capacity->Size = System::Drawing::Size(150, 30);
			this->input_fortness_or_capacity->TabIndex = 19;
			this->input_fortness_or_capacity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateDrink::input_fortness_or_capacity_KeyPress);
			// 
			// CreateDrink
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 398);
			this->Controls->Add(this->input_fortness_or_capacity);
			this->Controls->Add(this->lbl_capacity_or_fortness);
			this->Controls->Add(this->input_quantity);
			this->Controls->Add(this->input_price);
			this->Controls->Add(this->input_name_drink);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->Create_form);
			this->Controls->Add(this->back_from_createform);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_quantity_drink);
			this->Controls->Add(this->lbl_price_drink);
			this->Controls->Add(this->lbl_name_drink);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"CreateDrink";
			this->Text = L"CreateDrink";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}


#pragma endregion
	private: System::Void choice_soft_drink_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		lbl_capacity_or_fortness->Text = "Packing capacity (Litr):";
	}


	private: System::Void choice_alco_drink_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		lbl_capacity_or_fortness->Text = "Strength of the drink:";
	}

	
	private: System::Void input_quantity_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			e->Handled = true;
		}
	}
	private: System::Void input_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			e->Handled = true;
		}
	}	
	private: System::Void input_fortness_or_capacity_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// точка или зап€та€
		if (e->KeyChar == '.' || e->KeyChar == ',') {
			// жестка€ зап€та€
			e->KeyChar = ',';
			// может уже имеем один разделитель
			if (input_fortness_or_capacity->Text->IndexOf(',') != -1) {
				e->Handled = true;
			}
		}

		// не управл€юща€ клавиша, не число и не разделитель
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',')
		{
			e->Handled = true;
		}
	}


	private: System::Void back_from_createform_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		input_name_drink->Text = "";
		input_price->Text = "";
		input_quantity->Text = "";
		input_fortness_or_capacity->Text = "";
		choice_soft_drink->Checked = false;
		choice_alco_drink->Checked = false;
		lbl_capacity_or_fortness->Text = "Depends on the type of drink:";
	}


	private: System::Void Create_form_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->choice_soft_drink->Checked && !this->choice_alco_drink->Checked) {
			MessageBox::Show(this, "Choice type drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->input_name_drink->Text->Length < 1) {
			MessageBox::Show(this, "Enter the name of the drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->input_price->Text->Length < 1) {
			MessageBox::Show(this, "Enter the price of the drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->input_quantity->Text->Length < 1) {
			MessageBox::Show(this, "Enter the quantity of the drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->choice_soft_drink->Checked && this->input_fortness_or_capacity->Text->Length < 1) {
			MessageBox::Show(this, "Enter the capacity of the drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->choice_alco_drink->Checked && this->input_fortness_or_capacity->Text->Length < 1) {
			MessageBox::Show(this, "Enter the fortness of the drink!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		else if (this->choice_soft_drink->Checked) {
			add_form_drink(this->choice_soft_drink->Text, this->input_name_drink->Text, this->input_price->Text, this->input_quantity->Text, this->input_fortness_or_capacity->Text);
			input_name_drink->Text = "";
			input_price->Text = "";
			input_quantity->Text = "";
			input_fortness_or_capacity->Text = "";
			choice_soft_drink->Checked = false;
			choice_alco_drink->Checked = false;
			lbl_capacity_or_fortness->Text = "Depends on the type of drink:";
		}
		else if (this->choice_alco_drink->Checked) {
			add_form_drink(this->choice_alco_drink->Text, this->input_name_drink->Text, this->input_price->Text, this->input_quantity->Text, this->input_fortness_or_capacity->Text);
			input_name_drink->Text = "";
			input_price->Text = "";
			input_quantity->Text = "";
			input_fortness_or_capacity->Text = "";
			choice_soft_drink->Checked = false;
			lbl_capacity_or_fortness->Text = "Depends on the type of drink:";
			choice_alco_drink->Checked = false;
		}
	}
};
}

