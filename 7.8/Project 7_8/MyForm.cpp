#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "MyForm2.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace Project78;


double Calculatef(double x, double y, double z)
{
    return (std::pow(2.71828, std::abs(x - y)) * std::pow(std::abs(x - y), (x + y))) / (std::atan(x) + std::atan(z)) + std::cbrt(std::pow(x, 6) + std::pow(std::log(y), 2));
}


inline System::Void Project78::MyForm::get_res_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создание массива значений X
	std::vector<double> xValues;
	for (double x = 1; x <= 23; x += 0.1)
	{
		xValues.push_back(x);
	}

	// Создание массива значений Y
	std::vector<double> yValues;
	for (double y = 1; y <= 23; y += 0.1)
	{
		yValues.push_back(y);
	}

	// Создание массива значений Z
	std::vector<double> zValues;
	for (double z = 1; z <= 23; z += 0.1)
	{
		zValues.push_back(z);
	}

	// Создание массива значений f
	std::vector<double> fValues;
	for (int i = 0; i < xValues.size(); i++)
	{
		double x = xValues[i];
		double y = yValues[i];
		double z = zValues[i];
		double f = Calculatef(x, y, z);
		fValues.push_back(f);
	}

	// Привязка данных к элементу управления Chart
	chart->Series[0]->Points->Clear();
	for (int i = 0; i < xValues.size(); i++)
	{
		chart->Series[0]->Points->AddXY(xValues[i], fValues[i]);
	}

	// Настройка внешнего вида графика
	chart->ChartAreas[0]->AxisX->Minimum = 0;
	chart->ChartAreas[0]->AxisX->Maximum = +200;
	chart->ChartAreas[0]->AxisX->Title = "X";
	chart->ChartAreas[0]->AxisY->Title = "Y";
	chart->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
}


[STAThreadAttribute]
int main(array<String^>^ args){;
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    MyForm form;
    Application::Run(% form);
}