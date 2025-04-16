#include "Add form people.h"
#include "Header.h"
#include <iostream>
#include <string>;
#include <vector>;;
#include <msclr\marshal_cppstd.h>


void add_form_people(System::String^ input_gender, System::String^ input_second_name, System::String^ input_birth_date) {
	Persons person;
	person.gender = msclr::interop::marshal_as<std::string>(input_gender);
	person.surname = msclr::interop::marshal_as<std::string>(input_second_name);
	person.date_birth = msclr::interop::marshal_as<std::string>(input_birth_date);

	peoples.push_back(person);
}
