// Faça um programa que leia 2 vetores A e B, de 10 posições cada. Faça um terceiro vetor C com a média do primeiro valor do vetor A com o último valor do vetor B, colocado na primeira posição do vetor C, o segundo valor do vetor A com o penúltimo valor do vetor B, colocando na segunda posição do vetor C, assim sucessivamente. Em seguida descubra o maior valor e o segundo maior valor dos vetores A e B.
// Entradas:
//     float VetA[10], VetB[10]. - Vetores que devem ser preenchidos.
// Saídas:
//     Vetor C, com a média dos dos vetores, como no exemplo. (float).
//     Maior e segundo maior elemento do vetor A. (float).
//     Maior e segundo maior elemento do vetor B. (float).
// Exemplos de Entradas e Saídas:
// Entradas:
// //Vetor A: 
//  10   5   6   7   8   9   4   3   2   1
// //Vetor B: 
//  5   4   9   6   8   7   1   3   2   10
// Saídas:
//  10
//  3.5
//  4.5
//  4
//  7.5
//  8.5
//  5
//  6
//  3
//  3
 
//  10
//  9
 
//  10
//  9
#include <iostream>

using namespace std;

void findHigher(float v[], int SIZE, float &higher, float &second) {
    int i = 0;
    higher = second = v[0];

    for (i = 1; i < SIZE; i++) {
        if (v[i] > higher) {
            higher = v[i];
        }
    }
    
    for (i = 1; i < SIZE; i++) {
        if (v[i] < second) {
            second = v[i];
        }
    }

    for (i = 0; i < SIZE; i++) {
        if (v[i] < higher and v[i] > second) {
            second = v[i];
        }
    }
}

int main() {
    const int SIZE = 10;
    float a[SIZE], b[SIZE], c[SIZE];
    float higherA, secondA;
    float higherB, secondB;
    int i;
    int j = SIZE - 1;

    for (i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    findHigher(a, SIZE, higherA, secondA);

    for (i = 0; i < SIZE; i++) {
        cin >> b[i];
    }

    findHigher(b, SIZE, higherB, secondB);

    for (i = 0; i < SIZE; i++) {
        c[i] = (a[i] + b[j--]) / 2.0;
    }

    for (i = 0; i < SIZE; i++) {
        cout << c[i] << endl;
    }
    cout << endl << higherA << endl << secondA << endl;
    cout << endl << higherB << endl << secondB << endl;

    return 0;
}