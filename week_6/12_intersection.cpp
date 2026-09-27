// Na matemática a interseção de dois conjuntos A e B é representada por A ∩ B e é formada por todos os elementos pertencentes a A e B ao mesmo tempo. Por exemplo, seja A = {1, 2, 3} e B = {1, 4, 5}, então a interseção destes dois conjuntos será A ∩ B = {1}. Um outro exemplo é dado por A = {1, 2, 3, 4} e B = {1, 2, 4, 5, 3}, com interseção dada por A ∩ B = {1, 2, 3, 4}. Caso A e B sejam dadas por A = {1, 2, 3, 4} e B = { 5, 6, 7}, então a interseção seja dada por A ∩ B = { }.
// Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a interseção desses vetores.
// Entradas:
//     Elementos do vetor A.
//     Elementos do vetor B.
// Saídas:
//     Vetor C representado a interseção dos vetores A e B. Caso a interseção seja vazia, imprima VAZIO.
// Exemplo de Entrada:
// 0 1 2 3 4
// 2 4 6 8 10
// Exemplo de Saída:
// 2 4
// Exemplo de Entrada:
// 0 1 2 3 4
// 5 6 7 8 9
// Exemplo de Saída:
// VAZIO
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    bool isIn = false;
    int a[SIZE], b[SIZE], c[SIZE];
    int i = 0, j = 0, k = 0;

    for (i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    for (i = 0; i < SIZE; i++) {
        cin >> b[i];
    }
    
    for (i = 0; i < SIZE; i++) {
        isIn = false;
        for (j = 0; j < SIZE; j++) {
            if (a[i] == b[j]) isIn = true;
        }
    
        if (isIn) {
            isIn = false;
            for (j = 0; j < SIZE; j++) {
                if (a[i] == c[j]) isIn = true;
            }
            if (not isIn) {
                c[k] = a[i];
                k++;
            }
        }
    }

    if (k > 0) {
        for (i = 0; i < k; i++) {
            cout << c[i] << " ";
        }
    } else {
        cout << "VAZIO" << endl;
    }
    cout << endl;

    return 0;
}