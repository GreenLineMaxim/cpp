#include <iostream>
#include "Header.h"
#include "exercise_3_44.h"
#include <vector>
#include <tuple>
#include <msclr\marshal_cppstd.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

int count_string(System::String^ input_sting) {
    std::string converted_string = msclr::interop::marshal_as<std::string>(input_sting);
    int rate_letters = 0;
    std::vector<std::tuple<char, int>> data_set = { { 'a', 1}, {'b' , 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 6} };

    for (int i = 0; i < converted_string.length(); i++) {
        for (int g = 0; g < data_set.size(); g++) {
            if (converted_string[i] == std::get<0>(data_set[g])) {
                rate_letters += std::get<1>(data_set[g]);
            }
        }
    }
        
    return rate_letters;
}

/*System::String^ input_protection(std::string converted_string) {
    try {
        if (converted_string.length() > 10) {
            throw std::length_error("A string cannot contain more than 1000 characters");
        }
    }
    catch (std::length_error& ex) {
        return ex.what();
    }
    
    return converted_string;
*/

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    My344::exercise_3_44 form;
    Application::Run(% form);
}



