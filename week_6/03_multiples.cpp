// Crie um programa que preencha um vetor com 10 números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números múltiplos de 2, e o segundo deve conter os números múltiplos de 3. O seu programa deverá também imprimir no dispositivo de saída padrão o maior múltiplo de 2 e o maior múltiplo de 3, associados aos vetores resultantes, respectivamente.
// Assuma que todos os dados de entrada serão fornecidos em uma única linha. Assuma também que sempre haverá no mínimo um número múltiplo de 2 e um número múltiplo de 3 nos dados de entrada. E caso um número seja múltiplo de 2 e 3 simultaneamente, este número deverá aparecer em ambos os vetores resultantes.
// Entradas:
//     Dez números inteiros representando o vetor geral.
// Saídas:
//     Vetor resultante com os números inteiros múltiplos de 2. Na mesma ordem em que apareceram no vetor de entrada.
//     Maior número múltiplo de 2 do primeiro vetor resultante (Número Inteiro).
//     Vetor resultante com os números inteiros múltiplos de 3. Na mesma ordem em que apareceram no vetor de entrada.
//     Maior número múltiplo de 3 do segundo vetor resultante (Número Inteiro).
// Exemplo de Entrada:
// 10 40 13 -70 85 90 54 69 78 32 
// Exemplo de Saída:
// 10 40 -70 90 54 78 32
// 90
// 90 54 69 78
// 90
// Exemplo de Entrada:
// -80 -75 -3 -7 -8 -9 -220 -78 -90 -1000
// Exemplo de Saída:
// -80 -8 -220 -78 -90 -1000
// -8
// -75 -3 -9 -78 -90
// -3
// Exemplo de Entrada:
// 0 78 200 -80 -60 75 66 12 24 91 
// Exemplo de Saída:
// 0 78 200 -80 -60 66 12 24
// 200
// 0 78 -60 75 66 12 24
// 78
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int vet[SIZE];
    int multiplesOf2[SIZE];
    int multiplesOf3[SIZE];
    int higherMultipleOf2, higherMultipleOf3;

    for (int i = 0; i < SIZE; i++) {
        cin >> vet[i];
    }

    int j2 = 0;
    int j3 = 0;
    for (int i = 0; i < SIZE; i++) {
        if (vet[i] % 2 == 0) {
            if (j2 == 0 or vet[i] > higherMultipleOf2) {
                higherMultipleOf2 = vet[i];
            }
            multiplesOf2[j2] = vet[i];
            j2++;
        }
        if (vet[i] % 3 == 0) {
            if (j3 == 0 or vet[i] > higherMultipleOf3) {
                higherMultipleOf3 = vet[i];
            }
            multiplesOf3[j3] = vet[i];
            j3++;
        }
    }

    for (int i = 0; i < j2; i++) {
        cout << multiplesOf2[i] << " ";
    }
    cout << endl << higherMultipleOf2 << endl;

    for (int i = 0; i < j3; i++) {
        cout << multiplesOf3[i] << " ";
    }
    cout << endl << higherMultipleOf3 << endl;

    return 0;
}