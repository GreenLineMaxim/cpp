#include "program.h"
#include "Header.h"
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
#include <msclr\marshal_cppstd.h>


void permute_recursive(std::string entered_string, int initial_string, int final_index) {  
    if (initial_string == final_index) {
        permute_rec.push_back(entered_string);
    }
   
    for (int i = initial_string; i <= final_index; i++) {
        std::swap(entered_string[initial_string], entered_string[i]);
        permute_recursive(entered_string, initial_string + 1, final_index);
        std::swap(entered_string[initial_string], entered_string[i]);
    }
}


std::vector<std::string> permute_not_recursive(std::string entered_string) {
    std::vector<std::string> permute_not_rec;
    
    sort(entered_string.begin(), entered_string.end());

    do{
        permute_not_rec.push_back(entered_string);
    } 
    while (next_permutation(entered_string.begin(), entered_string.end()));


    return permute_not_rec;
}


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    controlwork::program form;
    Application::Run(% form);
}