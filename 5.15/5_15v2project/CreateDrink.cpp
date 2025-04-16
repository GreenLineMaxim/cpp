#include "CreateDrink.h"
#include <iostream>
#include <string>;
#include <vector>;
#include "Header.h";
#include <msclr\marshal_cppstd.h>


void add_form_drink(System::String^ input_choice_drink, System::String^ input_name_of_the_drink, System::String^ input_price_drink, System::String^ input_quantity_drink, System::String^ input_variable_field) {
	Soft_alco_drink drink;
	drink.type_drink = msclr::interop::marshal_as<std::string>(input_choice_drink);
	drink.name = msclr::interop::marshal_as<std::string>(input_name_of_the_drink);
	drink.price = int::Parse(input_price_drink);
	drink.quantity = int::Parse(input_quantity_drink);
	drink.capacity_soft_drink_or_fortress_alco_beverage = double::Parse(input_variable_field);

	drinks.push_back(drink);
}


