#ifndef HEADER__H
#define HEADER__H
#include <string>;
#include <vector>;


struct Soft_alco_drink {
	std::string type_drink;
	std::string name;
	int price;
	int quantity;
	double capacity_soft_drink_or_fortress_alco_beverage;
};


inline std::vector<Soft_alco_drink> drinks;


void add_form_drink(System::String^ input_choice_drink, System::String^ input_name_of_the_drink, System::String^ input_price_drink, System::String^ input_quantity_drink, System::String^ input_variable_field);


int amount_alcho();
int cost_soft_drinks();
double ratio_drinks();


#endif 

//почитать про inline