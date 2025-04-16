#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <cstring>

using namespace std;

const char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//const char DIGITS[] = "123456789";


struct Teacher {
    string second_name;
    string classes;
    int hours;
};


vector<Teacher> create_fill_array_teachers(string quantity_teachers) {
    vector<Teacher> arr;
    int quantity = stoi(quantity_teachers);

    for (int i = 0; i < quantity; i++) {
        Teacher teacher;
        string input_second_name;
        int input_hours;
        string input_classes;

        try {
            cout << "Enter name: " << endl;
            cin >> input_second_name;
            for (int i = 0; i < input_second_name.length(); i++) {
                if (not(strchr(ABC, input_second_name[i]))) {
                    throw ("not correct name");
                }
            }
                          
            cout << "Enter working hours: " << endl;
            cin >> input_hours;
            if (cin.fail()) {
                throw "not correct hours";
            }

            cout << "Enter classes: " << endl;
            cin >> input_classes;

            teacher.second_name = input_second_name;
            teacher.hours = input_hours;
            teacher.classes = input_classes;
            arr.push_back(teacher);
        }
        catch (const char* error) {
            cerr << error << endl;
        }
    }
    return arr;
}


tuple<Teacher, Teacher> find_max_min_loads(vector<Teacher> arr) {
    Teacher max_hours_teacher, min_hours_teacher;
    max_hours_teacher.hours = 0;
    min_hours_teacher.hours = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].hours > max_hours_teacher.hours) {
            max_hours_teacher = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        min_hours_teacher.hours = 10000;
        if (arr[i].hours < min_hours_teacher.hours) {
            min_hours_teacher = arr[i];
        }
    }

    return { max_hours_teacher, min_hours_teacher };
}


bool input_quantity_teachers_protect(string quantity_teachers){
    for (int i = 0; i < quantity_teachers.length(); i++) {
        if (isdigit(quantity_teachers[i])) {}
        else {
            cout << "not correct quantity teachers" << endl;
            return false;
        }
    }
    return true;
}


int main() {
    string quantity_teachers;
    cout << "write down how many teachers you want to enter" << endl;
    cin >> quantity_teachers;
    Teacher max_loads, min_loads;

    if (input_quantity_teachers_protect(quantity_teachers)) {
        vector<Teacher> array_teachers = create_fill_array_teachers(quantity_teachers);
        tie(max_loads, min_loads) = find_max_min_loads(array_teachers);
        printf("Teacher`s max load name: %s\nWorking max load: %d\n", max_loads.second_name.c_str(), max_loads.hours);
        cout << "Teacher's max load classes: " << max_loads.classes << endl;
        printf("Teacher`s min load name: %s\nWorking min load: %d\n", min_loads.second_name.c_str(), min_loads.hours);
        cout << "Teacher's min load classes: " << min_loads.classes << endl;  
    }
}