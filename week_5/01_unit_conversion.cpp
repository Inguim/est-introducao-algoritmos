#include <iostream>

using namespace std;

double metersToCentimeters(double meters) {
    return meters * 100;
}

double centimetersToMeter(double centimeter) {
    return centimeter / 100;
}

int main() {
    double distance;
    string unit;

    cin >> distance >> unit;

    if (unit == "centimetro") {
        distance = metersToCentimeters(distance);
        cout << distance << " cm" << endl;
    } else if (unit == "metro") {
        distance = centimetersToMeter(distance);
        cout << distance << " m" << endl;
    } else {
        cout << "ERRO" << endl;
    }

    return 0;
}