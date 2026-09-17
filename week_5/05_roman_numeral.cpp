#include <iostream>

using namespace std;

string numberToRomanNumeral(int number) {
    string roman = "";

    if (number == 50) return "L";

    if (number >= 40) {
        roman += "XL";
        number -= 40;
    }

    while (number >= 10) {
        roman += "X";
        number -= 10;
    }

    if (number == 9) {
        roman += "IX";
        number -= 9;
    }

    if (number >= 5) {
        roman += "V";
        number -= 5;
    }

    if (number == 4) {
        roman += "IV";
        number -= 4;
    }

    while (number >= 1) {
        roman += "I";
        number -= 1;
    }
    
    return roman;
}

int main() {
    int number = 1;

    while (number >= 1) {
        cin >> number;

        if (number > 0) {
            if (number < 1 or number > 50) cout << "NUMERO INVALIDO" << endl;
            else {
                cout << numberToRomanNumeral(number) << endl;
            }
        }
    } ;
    
    return 0;
}