#include <iostream>
#include <string>
using namespace std;

const char ABC[] = "abcdefgh";
const char NUM[] = "12345678";

int get_score_queen(string coord_queen) {
    int res_queen = 0;
    string str_for_check_queen_one = "bcdefg";
    string str_for_check_queen_two = "ah";
    string str_for_check_queen_three = "bg";
    string str_for_check_queen_four = "cf";
    string str_for_check_queen_five = "de";

    for (int i = 0; i < coord_queen.length(); i++) {
        int number_queen = coord_queen[i] - '0';
        if ((number_queen == 1 or number_queen == 8) and str_for_check_queen_one.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 21;
        }
        else if ((number_queen == 1 or number_queen == 2 or number_queen == 3 or number_queen == 4 or number_queen == 5 or number_queen == 6 or number_queen == 7 or number_queen == 8) and str_for_check_queen_two.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 21;
        }
        else if ((number_queen == 2 or number_queen == 7) and str_for_check_queen_one.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 23;
        }
        else if ((number_queen == 3 or number_queen == 4 or number_queen == 5 or number_queen == 6) and str_for_check_queen_three.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 23;
        }
        else if ((number_queen == 3 or number_queen == 4 or number_queen == 5 or number_queen == 6) and str_for_check_queen_four.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 25;
        }
        else if ((number_queen == 3 or number_queen == 6) and str_for_check_queen_five.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 25;
        }
        else if ((number_queen == 4 or number_queen == 5) and str_for_check_queen_five.find(coord_queen[i + 1]) != str_for_check_queen_one.npos) {
            res_queen += 27;
        }
    }

    return res_queen;
}


int get_score_horse(string coord_horse) {
    int res_horse = 0;
    string str_for_check_horse_one = "ah";
    string str_for_check_horse_two = "bg";
    string str_for_check_horse_three = "cdef";
    for (int i = 0; i < coord_horse.length(); i++) {
        int number_horse = coord_horse[i] - '0';
        if ((number_horse == 1 or number_horse == 8) and str_for_check_horse_one.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 2;
        }
        else if (((number_horse == 2 or number_horse == 7) and str_for_check_horse_one.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) or ((number_horse == 1 or number_horse == 8) and str_for_check_horse_two.find(coord_horse[i + 1]) != str_for_check_horse_one.npos)) {
            res_horse += 3;
        }
        else if ((number_horse == 3 or number_horse == 4 or number_horse == 5 or number_horse == 6) and str_for_check_horse_two.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 6;
        }
        else if ((number_horse == 2 or number_horse == 7) and str_for_check_horse_three.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 6;
        }
        else if ((number_horse == 3 or number_horse == 4 or number_horse == 5 or number_horse == 6) and str_for_check_horse_three.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 8;
        }
        else if ((number_horse == 3 or number_horse == 4 or number_horse == 5 or number_horse == 6) and str_for_check_horse_one.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 4;
        }
        else if ((number_horse == 2 or number_horse == 7) and str_for_check_horse_two.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 4;
        }
        if ((number_horse == 1 or number_horse == 8) and str_for_check_horse_three.find(coord_horse[i + 1]) != str_for_check_horse_one.npos) {
            res_horse += 4;
        }
    }

    return res_horse;
}


int main()
{
    int score = 0;
    int result_horse;
    int result_queen;
    int result_rook = 0;

    string data_horse;
    string data_queen;

    try {
        cout << "Enter coordinate horse in format: number-letter" << endl;
        cin >> data_horse;
        if ((data_horse.length() != 2) or (not(strchr(NUM, data_horse[0]))) or (not(strchr(ABC, data_horse[1])))) {
            throw ("not correct data horse");
        }

        cout << "Enter coordinate queen in format: number-letter" << endl;
        cin >> data_queen;
        if ((data_queen.length() != 2) or (not(strchr(NUM, data_queen[0]))) or (not(strchr(ABC, data_queen[1])))) {
            throw ("not correct data queen");
        }

        cout << "The rook has a fixed value of fields" << endl;
        result_rook += 14;    
    }
    catch (const char* error) {
        cerr << error << endl;
    }
   
    result_horse = get_score_horse(data_horse);
    result_queen = get_score_queen(data_queen);

    score += result_rook + result_horse + result_queen;
    cout << "Fields under attack: " << score << endl;
}
