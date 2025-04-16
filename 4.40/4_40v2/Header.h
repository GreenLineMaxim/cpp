#ifndef HEADER__H
#define HEADER__H
#include <string>;
#include <vector>;


struct Persons {
	std::string gender;
	std::string surname;
	std::string date_birth;
};


inline std::vector<Persons> peoples;


void add_form_people(System::String^ input_gender, System::String^ input_second_name, System::String^ input_birth_date);


std::string find_oldest_man();
std::vector<std::tuple<std::string, std::string>> find_surname_b();


#endif 
