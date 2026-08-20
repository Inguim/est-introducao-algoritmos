#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float coordenadas[4];

    ifstream arquivo("entrada.txt");

    if (arquivo) {
        arquivo >> coordenadas[0] >> coordenadas[1] >> coordenadas[2] >> coordenadas[3];
        
        cout << fixed << setprecision(5);
        cout << sqrt(pow(coordenadas[2] - coordenadas[0], 2) + pow(coordenadas[3] - coordenadas[1], 2)) << endl;
    }
    return 0;
}