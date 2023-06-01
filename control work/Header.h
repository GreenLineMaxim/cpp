#ifndef HEADER__H
#define HEADER__H
#include <string>;
#include <vector>;

inline std::vector<std::string> permute_rec;

void permute_recursive(std::string entered_string, int initial_index, int final_index);
std::vector<std::string> permute_not_recursive(std::string entered_string);

#endif 
