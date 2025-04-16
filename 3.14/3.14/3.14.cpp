#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string packing_string(string source_string) {
    string compressed_string;
    compressed_string = "";
    int temp_count;
    temp_count = 1; //считает повторение одного символова, начиная с 1(см.последовательность)

    for (int i = 0; i < source_string.length(); i++) { // проход по строке
        if (source_string[i] == source_string[i + 1]) { //проверка символов между собой
            temp_count += 1;    
        }
        else { //если символы не совпали
            if (temp_count > 3) { //если символов больше 3 (по условию)
                compressed_string += to_string(temp_count); // выводим число(сколько раз повторился символ)
                if (isdigit(source_string[i])) { // проверка и вывод символа (является ли он цифрой)
                    compressed_string += to_string(source_string[i] - '0');
                }
                else {
                    compressed_string.append(string(1, source_string[i])); // проверка и вывод символа (является ли он буквой, символом)
                } 
            }
            else { //если символов меньше 4
                while (temp_count != 0) { // делаем последовательный вывод символа (без числа его повторений)
                    if (isdigit(source_string[i])) { // проверка и вывод символа (является ли он цифрой)
                        compressed_string += to_string(source_string[i] - '0');
                    }
                    else {
                        compressed_string.append(string(1, source_string[i])); // проверка и вывод символа (является ли он буквой, символом)
                    }
                    temp_count-- ; // постфикс дикримента для регулированного повторения цикла 
                }
            }
            temp_count = 1;
        }
    }
    return compressed_string;
}

bool protect(string source_string) {
    if ((source_string.find('(') != string::npos) || (source_string.find(')') != string::npos)) {
        return false;
    }
    return true;
}


int main()
{
    setlocale(LC_ALL, "rus");

    string source_string;
    cout << "Введите исходную строку: ";
    cin >> source_string;

    if (protect(source_string)) {
        string packed = packing_string(source_string);
        cout << packed << endl;
    }
    else {
        cout << "Недопустимый символ" << endl;
    }

    system("pause");
    return 0;
}
