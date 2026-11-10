// Definir um elemento do conjunto como pivo
// Comparar o elemento pivo com outro elemento do conjunto
// Mover o maior dos dois elementos para a direita (ordenação ordem ascendente)

#include <iostream>

using namespace std;

void sortASC(int vet[], int tam) {
    int temp, j;
    
    for (int i = 1; i < tam; i++) {
        temp = vet[i];
        j = i - 1;

        while (j >= 0 and temp < vet[j]) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = temp;        
    }
}

void sortDESC(int vet[], int tam) {
    int temp, j;
    
    for (int i = 1; i < tam; i++) {
        temp = vet[i];
        j = i - 1;

        while (j >= 0 and temp > vet[j]) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = temp;        
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