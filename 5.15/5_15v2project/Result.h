#pragma once
#include "Header.h"


namespace My515v2project {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ quantity_alco_beverages;


	private: System::Windows::Forms::Label^ total_cost_soft_drinks;
	private: System::Windows::Forms::Label^ ratio;
	private: System::Windows::Forms::Button^ back_from_res;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->quantity_alco_beverages = (gcnew System::Windows::Forms::Label());
			this->total_cost_soft_drinks = (gcnew System::Windows::Forms::Label());
			this->ratio = (gcnew System::Windows::Forms::Label());
			this->back_from_res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Quantity of all alcoholic beverages:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total cost of all soft drinks:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(694, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"The ratio of the most expensive soft drink to the most expensive alcoholic drink:"
				L"";
			// 
			// quantity_alco_beverages
			// 
			this->quantity_alco_beverages->AutoSize = true;
			this->quantity_alco_beverages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->quantity_alco_beverages->Location = System::Drawing::Point(332, 20);
			this->quantity_alco_beverages->Name = L"quantity_alco_beverages";
			this->quantity_alco_beverages->Size = System::Drawing::Size(26, 25);
			this->quantity_alco_beverages->TabIndex = 3;
			this->quantity_alco_beverages->Text = L"--";
			// 
			// total_cost_soft_drinks
			// 
			this->total_cost_soft_drinks->AutoSize = true;
			this->total_cost_soft_drinks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->total_cost_soft_drinks->Location = System::Drawing::Point(260, 65);
			this->total_cost_soft_drinks->Name = L"total_cost_soft_drinks";
			this->total_cost_soft_drinks->Size = System::Drawing::Size(26, 25);
			this->total_cost_soft_drinks->TabIndex = 4;
			this->total_cost_soft_drinks->Text = L"--";
			// 
			// ratio
			// 
			this->ratio->AutoSize = true;
			this->ratio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ratio->Location = System::Drawing::Point(718, 116);
			this->ratio->Name = L"ratio";
			this->ratio->Size = System::Drawing::Size(26, 25);
			this->ratio->TabIndex = 5;
			this->ratio->Text = L"--";
			// 
			// back_from_res
			// 
			this->back_from_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_from_res->Location = System::Drawing::Point(23, 161);
			this->back_from_res->Name = L"back_from_res";
			this->back_from_res->Size = System::Drawing::Size(150, 70);
			this->back_from_res->TabIndex = 6;
			this->back_from_res->Text = L"Back to menu";
			this->back_from_res->UseVisualStyleBackColor = true;
			this->back_from_res->Click += gcnew System::EventHandler(this, &Result::back_from_res_Click);
			// 
			// Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(887, 244);
			this->Controls->Add(this->back_from_res);
			this->Controls->Add(this->ratio);
			this->Controls->Add(this->total_cost_soft_drinks);
			this->Controls->Add(this->quantity_alco_beverages);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Result";
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &Result::Result_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_from_res_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Result_Load(System::Object^ sender, System::EventArgs^ e) {
		quantity_alco_beverages->Text = Convert::ToString(amount_alcho());
		total_cost_soft_drinks->Text = Convert::ToString(cost_soft_drinks());
		ratio->Text = Convert::ToString(ratio_drinks());
	}
};
}
