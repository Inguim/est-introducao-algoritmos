// Faça um programa que crie um vetor de 5 posições, depois disso devem ser lidos 5 números inteiros não negativos. Se for colocado como entrada um número inteiro negativo, ele deve ser ignorado, o próximo número irá assumir sua posição, e o vetor com 5 posições deve ficar completo.
// O programa deve substituir todos os números do vetor por -1, porém os elementos devem ser substituídos do menor para o maior. A cada substituição, deve ser mostrado como o vetor está.
// Entrada:
// 4 5 9 2 7
// Saída:
// 4 5 9 -1 7
// -1 5 9 -1 7
// -1 -1 9 -1 7
// -1 -1 9 -1 -1
// -1 -1 -1 -1 -1
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int vet[5];
    int i = 0, j = 0;
    int number;

    while (i < SIZE) {
        cin >> number;
        if (number >= 0) {
            vet[i] = number;
            i++;
        }
    }

    i = 0; 
    while (i < SIZE) {
        int indexLower = -1;

        for (j = 0; j < SIZE; j++) {
            if (vet[j] != -1) {
                indexLower = j;
            }
        }

        for (j = 0; j < SIZE; j++) {
            if (vet[j] != -1 and vet[j] < vet[indexLower]) {
                indexLower = j;
            }
        }

        if (indexLower != -1) vet[indexLower] = -1;

        for (j = 0; j < SIZE; j++) {
            cout << vet[j] << " ";
        }
        cout << endl;

        i++;
    }

    return 0;    
}