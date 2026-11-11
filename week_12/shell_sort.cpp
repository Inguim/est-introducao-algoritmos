// metodo eficiente para vetores de tamanho medio (1_000 a 10_000)
// Definir um gap e ir diminuindo ate o menor gap
// Comparar os elementos com base no Insertion Sort 

#include <iostream>

using namespace std;

void sortASC(int vet[], int tam) {
    // sequência de Ciura, a que tem os melhores resultados experimentais
    // para vetores maiores usar recursão -> h[k] =  floor( 2.25 * h[k-1] ).

    int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
    int pos_gap = 8;

    while (gaps[pos_gap] > tam) {
        pos_gap--;
    }

    int value, j;
    
    while (pos_gap >= 0) {
        int gap = gaps[pos_gap];

        for (int i = 0; i < tam; i++) {
            value = vet[i];
            j = i;

            while (j >= gap and value < vet[j - gap]) {
                vet[j] = vet[j - gap];
                j = j - gap;    
            }
            vet[j] = value;
        }
        pos_gap--;
    }
}

void sortDESC(int vet[], int tam) {
        // sequência de Ciura, a que tem os melhores resultados experimentais
    // para vetores maiores usar recursão -> h[k] =  floor( 2.25 * h[k-1] ).

    int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
    int pos_gap = 8;

    while (gaps[pos_gap] > tam) {
        pos_gap--;
    }

    int value, j;
    
    while (pos_gap >= 0) {
        int gap = gaps[pos_gap];

        for (int i = 0; i < tam; i++) {
            value = vet[i];
            j = i;

            while (j >= gap and value > vet[j - gap]) {
                vet[j] = vet[j - gap];
                j = j - gap;    
            }
            vet[j] = value;
        }
        pos_gap--;
    }
}

int main() {
    int vet1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int vet2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sortASC(vet1, 10);

    for (int i = 0; i < 10; i++) {
        cout << vet1[i] << " ";
        if (i == 9) cout << endl;
    }

    sortDESC(vet2, 10);

    for (int i = 0; i < 10; i++) {
        cout << vet2[i] << " ";
        if (i == 9) cout << endl;
    }
    
}