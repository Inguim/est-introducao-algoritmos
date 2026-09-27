// Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.
// Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a união.
// Entradas:
//     Elementos do vetor A.
//     Elementos do vetor B.
// Saídas:
//     Vetor C representado a união dos vetores A e B.
// Exemplo de Entrada:
// 0 1 2 3 4
// 2 4 6 8 10
// Exemplo de Saída:
// 0 1 2 3 4 6 8 10
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    bool isIn = false;
    int a[SIZE], b[SIZE], c[SIZE * 2];
    int i = 0, j = 0, k = 0;

    for (i = 0; i < SIZE; i++) {
        cin >> a[i];
        c[i] = a[i];
        k++;
    }

    for (i = 0; i < SIZE; i++) {
        cin >> b[i];
    }

    for (i = 0; i < SIZE; i++) {
        isIn = false;
        for (j = 0; j < k; j++) {
            if (b[i] == c[j]) isIn = true;
        }

        if (not isIn) {
            c[k] = b[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}