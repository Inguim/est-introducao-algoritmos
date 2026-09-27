// Dadas as temperaturas que foram registradas diariamente durante uma semana, faça um programa que, usando vetores, calcule e mostre a temperatura média e em quantos dias dessa semana a temperatura esteve acima da média. Informe também a maior temperatura no período
// Entradas:
//     double vet[7] - Vetor de temperaturas (separados por espaços)
// Saída:
//     double media - temperatura média calculada
//     int total - total de dias com temperatura acima da média
//     double maior temperatura
// Exemplo de Entradas e Saída:
// Entradas:
// 25 26.8 32 27.5 26.5 28.1 24
// Saída:
// 27.1
// 3
// 32
#include <iostream>

using namespace std;

int main() {
    double vet[7];
    double higherTemperature;
    double averageTemperature;
    int totalDays = 0;

    for (int i = 0; i < 7; i++) {
        cin >> vet[i];
    }

    higherTemperature = vet[0];

    for (int i = 0; i < 7; i++) {
        averageTemperature += vet[i];
    }
    averageTemperature /= 7;
    

    for (int i = 0; i < 7; i++) {
        if (vet[i] > higherTemperature) {
            higherTemperature = vet[i];
        }
        if (vet[i] > averageTemperature) {
            totalDays++;
        }
    }

    cout << averageTemperature << endl;
    cout << totalDays << endl;
    cout << higherTemperature << endl;

    return 0;
}