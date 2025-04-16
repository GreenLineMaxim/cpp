#include "Result.h"
#include "Header.h"
#include <iostream>
#include <string>;
#include <vector>;;
#include <msclr\marshal_cppstd.h>

std::string find_oldest_man() {
	std::string name_oldest_man;
	std::string buff_name_oldest_man; 
	std::string day, month, year;
    std::string buff = "";
    int check_year = 10000;
	int check_month = 10000;
	int check_date = 10000;


	for (int i = 0; i < peoples.size(); i++) {
		if (peoples[i].gender == "Male") {
			year = (peoples[i].date_birth.substr(6, 4));
			month = (peoples[i].date_birth.substr(3, 2));
			day = (peoples[i].date_birth.substr(0, 2));
			buff_name_oldest_man = peoples[i].surname;
		}
	}


	if (stoi(year) == check_year) {
		if (stoi(month) <= check_month) {
			check_month = stoi(month);
			if (stoi(day) <= check_date) {
				check_date = stoi(day);
				name_oldest_man = buff_name_oldest_man;
			}
		}
	}


	if (stoi(year) < check_year) {
		check_year = stoi(year);
		check_month = stoi(month);
		check_date = stoi(day);
		name_oldest_man = buff_name_oldest_man;
	}


	return name_oldest_man;
}


std::vector<std::tuple<std::string, std::string>> find_surname_b() {
	std::vector<std::tuple<std::string, std::string>> person_surname_b;

	for (int i = 0; i < peoples.size(); i++) {
		if (peoples[i].surname[0] == 'b' || peoples[i].surname[0] == 'B') {
			person_surname_b.push_back ({ peoples[i].surname, peoples[i].date_birth });
		}
	}


	return person_surname_b;
}
