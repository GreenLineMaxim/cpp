#ifndef HEADER__H
#define HEADER__H
#include <vector>
#include <tuple>
#include <string>

std::vector<std::tuple<int, int, int>> read_file(std::string file_path);
std::tuple<int, int, int> find_oldest_date(std::vector<std::tuple<int, int, int>> split_dates);
int find_year_with_lowest_number(std::vector<std::tuple<int, int, int>> split_dates);
std::vector<std::tuple<int, int, int>> find_spring_dates(std::vector<std::tuple<int, int, int>> split_dates);

#endif
