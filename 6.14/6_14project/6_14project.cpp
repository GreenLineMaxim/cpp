#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;


tuple <vector<string>, vector<string>> split_numbers_on_even_odd() {
    vector <string> data_file;
    ifstream input_file("C:\\Users\\maks_\\Desktop\\c++\\6_14project\\6_14project\\file.txt");

    string buffer;
    while (input_file >> buffer) {
        data_file.push_back(buffer);
    }
    
    vector<string> even_numbers;
    vector<string> odd_numbers;

    for (int i = 0; i < data_file.size(); i++) {
        if (stoi(data_file[i]) % 2 == 0) {
            even_numbers.push_back(data_file[i]);
        }
        else {
            odd_numbers.push_back(data_file[i]);
        }
    }

    return { even_numbers, odd_numbers };
    input_file.close();
}


tuple <string, string> writing_output_file(vector<string> arr_even_numbers, vector<string> arr_odd_numbers) {
    int count_a = arr_even_numbers.size() / 5;
    int count_b = arr_even_numbers.size() / 20;
    int index_even_a = 0, index_odd_a = 0, index_even_b = 0, index_odd_b = 0;;
    string res_a;
    string res_b;

    while (count_a) {
        int flag_even_a = 0;
        while (flag_even_a < 5 && index_even_a < arr_even_numbers.size()) {
            //cout << count_a;
            res_a += (arr_even_numbers[index_even_a]) + " ";
            index_even_a += 1;
            flag_even_a++;
        }

        int flag_odd_a = 0;
        while (flag_odd_a < 5 && index_odd_a < arr_even_numbers.size()) {
            res_a += (arr_odd_numbers[index_odd_a]) + " ";
            index_odd_a++;
            flag_odd_a++;
        }

        count_a -= 1;
        //cout << count_a;
    }

    while (count_b) {
        int flag_even_b = 0;
        while (flag_even_b < 20 && index_even_b < arr_even_numbers.size()) {
            res_b += (arr_even_numbers[index_even_b]) + " ";
            index_even_b += 1;
            flag_even_b++;
        }

        int flag_odd_b = 0;
        while (flag_odd_b < 20 && index_odd_b < arr_even_numbers.size()) {
            res_b += (arr_odd_numbers[index_odd_b]) + " ";
            index_odd_b++;
            flag_odd_b++;
        }

        count_b -= 1;
    }

    return { res_a, res_b };
}


/*string writing_output_file_b(vector<string> arr_even_numbers, vector<string> arr_odd_numbers) {
    int count = arr_even_numbers.size();
    int index_even_b = 0, index_odd_b = 0;
    string res_b;

    while (count / 20) {
        int flag_even = 0;
        while (flag_even < 20 && index_even_b <= count) {
            res_b += (arr_even_numbers[index_even_b]) += ",";
            index_even_b += 1;
            flag_even++;
        }

        int flag_odd = 0;
        while (flag_odd < 20 && index_odd_b <= count) {
            res_b += (arr_odd_numbers[index_odd_b]) += ",";
            index_odd_b++;
            flag_odd++;
        }

        count -= 1;
    }
    return res_b;
}
*/


int main(){
    ofstream result_file("C:\\Users\\maks_\\Desktop\\c++\\6_14project\\6_14project\\output_file.txt");

    vector<string> even;
    vector<string> odd;
    string res_one, res_two;
    tie(even, odd) = split_numbers_on_even_odd();
    tie(res_one, res_two) = writing_output_file(even, odd);
    //string res_two = writing_output_file_b(even, odd);

    if (result_file.is_open()) {
        result_file << res_one;
        result_file << res_two;
        result_file.close();
    }
}

