#include <iostream>
#include <fstream>
#include <iomanip>

// media ponderada

using namespace std;

int main() {
    int notas[3], pesos[3];
    int i = 0;

    ifstream arquivo("notas.txt");

    if (arquivo) {
        while (i < 3) {
            arquivo >> notas[i] >> pesos[i]; 
            i++;
        }
        arquivo.close();

        ofstream arquivo("final.txt");
    
        if (arquivo) {
            int dividendo = (notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2]);
            int divisor = pesos[0] + pesos[1] + pesos[2];
            arquivo << fixed << setprecision(2);
            arquivo << dividendo / float(divisor) << endl;
        }
    }

    return 0;
}