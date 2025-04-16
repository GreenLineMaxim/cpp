#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include <string>

using namespace System;
using namespace System::Windows::Forms;


std::vector<std::tuple<int, int, int>> read_file(std::string file_path) {
    std::ifstream file(file_path);
    std::vector<std::string> dates;
    std::vector<std::tuple<int, int, int>> split_dates;

    std::string date;
    while (file >> date) {
        dates.push_back(date);
    }

    for (int i = 0; i < dates.size(); i++) {
        int date, month, year;
        std::string buff = "";
        int k = 0;

        for (int j = 0; j <= dates[i].size(); j++) {
            if (dates[i][j] == '.' || dates[i].size() - j == 0) {
                if (k == 0) {
                    date = stoi(buff);
                    k++;
                }
                else if (k == 1) {
                    month = stoi(buff);
                    k++;
                }
                else {
                    year = stoi(buff);
                    k++;
                }
                buff = "";
            }
            else {
                buff += dates[i][j];
            }
        }
        split_dates.push_back({ date, month, year });
        k = 0;
    }

    return split_dates;
}


std::tuple<int, int, int> find_oldest_date(std::vector<std::tuple<int, int, int>> split_dates) {
    int last_day = 0, last_month = 0, last_year = 0;
    for (int i = 0; i < split_dates.size(); i++) {
        int day, month, year;
        std::tie(day, month, year) = split_dates[i];

        if (year == last_year) {
            if (month >= last_month) {
                last_month = month;

                if (day >= last_day) {
                    last_day = day;
                }
            }
        }

        if (year > last_year) {
            last_year = year;
            last_month = month;
            last_day = day;
        }
    }
 
    return { last_day, last_month, last_year };
}


int find_year_with_lowest_number(std::vector<std::tuple<int, int, int>> split_dates) {
    int min_year = 10000;
    for (int i = 0; i < split_dates.size(); i++) {
        int day, month, year;
        std::tie(day, month, year) = split_dates[i];

        if (year < min_year) {
            min_year = year;
        }

    }
    return min_year;
}


std::vector<std::tuple<int, int, int>> find_spring_dates(std::vector<std::tuple<int, int, int>> split_dates) {
    std::vector<std::tuple<int, int, int>> spring_dates;
    for (int i = 0; i < split_dates.size(); i++) {
        int day, month, year;
        std::tie(day, month, year) = split_dates[i];

        if (month == 3 || month == 4 || month == 5) {
            spring_dates.push_back({ day, month, year });
        }
    }

    return spring_dates;
}


[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    My629project::MyForm form;
    Application::Run(% form);
}