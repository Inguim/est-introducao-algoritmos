// menor sempre para a primeira posição
// esquerda -> direita
#include <iostream>

using namespace std;

void sortASC(int vet[], int tam) {
    int pos_menor;
    int temp;

    for (int i = 0; i < tam - 1; i++) {
        pos_menor = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j] < vet[pos_menor]) {
                pos_menor = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_menor];
        vet[pos_menor] = temp;
    }
}

void sortDESC(int vet[], int tam) {
    int pos_maior;
    int temp;

    for (int i = 0; i < tam - 1; i++) {
        pos_maior = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j] > vet[pos_maior]) {
                pos_maior = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_maior];
        vet[pos_maior] = temp;
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