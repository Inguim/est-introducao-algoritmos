// particiona ate não dar mais
#include <iostream>

using namespace std;

// metodo Lomuto
int particionaASC(int v[], int inicio, int fim) {
    int pivo = v[fim]; 
    int fronteira = inicio;
    int indice_atual;
    for (indice_atual = inicio; indice_atual < fim; indice_atual++) {
        if(v[indice_atual] <= pivo) {
            swap(v[fronteira], v[indice_atual]);
            fronteira++;
        }
    }
    swap(v[fronteira], v[fim]);
    return fronteira;
    
}

int particionaDESC(int v[], int inicio, int fim) {
    int pivo = v[fim]; 
    int fronteira = inicio;
    int indice_atual;
    for (indice_atual = inicio; indice_atual < fim; indice_atual++) {
        if(v[indice_atual] >= pivo) {
            swap(v[fronteira], v[indice_atual]);
            fronteira++;
        }
    }
    swap(v[fronteira], v[fim]);
    return fronteira;
}

void sortASC(int a[], int inicio, int fim) {
    int indice_pivo;
    if (inicio < fim) {
        indice_pivo = particionaASC(a, inicio, fim);
        sortASC(a, inicio, indice_pivo - 1);
        sortASC(a, indice_pivo + 1, fim);
    }
}

void sortDESC(int a[], int pos_pivo, int fim) {
    int pos_novo_pivo;
    if (pos_pivo < fim) {
        pos_novo_pivo = particionaDESC(a, pos_pivo, fim);
        sortDESC(a, pos_pivo, pos_novo_pivo - 1);
        sortDESC(a, pos_novo_pivo + 1, fim);
    }
}

int main() {
    const int TAM = 10;
    int vet1[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int vet2[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sortASC(vet1, 0, TAM - 1);

    for (int i = 0; i < 10; i++) {
        cout << vet1[i] << " ";
        if (i == 9) cout << endl;
    }

    sortDESC(vet2, 0, TAM - 1);

    for (int i = 0; i < 10; i++) {
        cout << vet2[i] << " ";
        if (i == 9) cout << endl;
    }
    
}