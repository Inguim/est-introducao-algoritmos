#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    const int POTENCY = 18;
    float d1, d2;

    cin >> d1 >> d2;

    ofstream outputFile("potencia.txt");

    outputFile << fixed << setprecision(1);
    outputFile << d1*d2 << "m2" << endl;
    outputFile << (d1 * d2) * POTENCY << "W";
    outputFile.close();

    return 0;
}