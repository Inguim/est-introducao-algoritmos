// Faça um programa para receber nove números inteiros positivos, armazená-los em um vetor, calcular e exibir no dispositivo de saída padrão aqueles números que são primos e suas respectivas posições no vetor. Se nenhum número primo for fornecido, nenhuma mensagem precisará ser exibida.
// Entradas:
//     Nove números inteiros positivos a serem armazenados em um vetor.
// Saídas:
//     Sequência de números primos e suas respectivas posições (índices no vetor). Obs.: Aqueles números que forem primos e suas respectivas posições deverão ser exibidos aos pares.
// Exemplo de entrada:
// 7 13 49 23 6 21 78 98 3 
// Exemplo de saída:
// 7 0
// 13 1
// 23 3
// 3 8
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 9;
    int vet[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin >> vet[i];
    }

    for (int i = 0; i < SIZE; i++) {
        bool isPrime = true;
        int divider = 2;
        if (vet[i] <= 1) {
            isPrime = false;
        } else {
            while (divider < vet[i] and isPrime) {
                if (vet[i] % divider == 0) isPrime = false;
                divider++;
            }
        }

        if (isPrime) {
            cout << vet[i] << " " << i << endl;
        }
    }
}