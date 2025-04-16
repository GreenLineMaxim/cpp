#include "Result.h"
#include <iostream>
#include <string>;
#include <vector>;
#include "Header.h";
#include <msclr\marshal_cppstd.h>


int amount_alcho() {
	int total_quantity_acho = 0;
	for (int i = 0; i < drinks.size(); i++) {
		if (drinks[i].type_drink == "Alcoholic beverage") {
			total_quantity_acho += drinks[i].quantity;
		}
	}


	return total_quantity_acho;
}


int cost_soft_drinks() {
	int total_cost_soft_drinks = 0;
	for (int i = 0; i < drinks.size(); i++) {
		if (drinks[i].type_drink == "Soft drink") {
			total_cost_soft_drinks += drinks[i].quantity * drinks[i].price;
		}
	}


	return total_cost_soft_drinks;
}


double ratio_drinks() {
	int most_expensive_soft_drink = 0;
	int most_expensive_alco_drink = 0;
	double ratio = 0;

	for (int i = 0; i < drinks.size(); i++) {
		if ((drinks[i].type_drink == "Soft drink") && (drinks[i].price > most_expensive_soft_drink)) {
			most_expensive_soft_drink = drinks[i].price;
		}
		if ((drinks[i].type_drink == "Alcoholic beverage") && (drinks[i].price > most_expensive_alco_drink)) {
			most_expensive_alco_drink = drinks[i].price;
		}
	}


	if (most_expensive_soft_drink == 0) most_expensive_soft_drink = 1;


	ratio = most_expensive_alco_drink / most_expensive_soft_drink;


	return ratio;
}