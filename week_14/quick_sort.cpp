// particiona ate não dar mais
#include <iostream>

using namespace std;

int particionaASC(int v[], int c, int f) { // c = começo, f = fim
    int pivo = v[c], i = c+1, j = f;
    while (i <= j) {
        if (v[i] <= pivo) i++;
        else if (pivo <= v[j]) j--;
        else { // (v[i] > pivo) e (v[j] < pivo)
            swap (v[i],v[j]);
            i++;
            j--;
        }
    } // agora i == j+1
    v[c] = v[j];
    v[j] = pivo;
    return j; // retorna posição do pivô
}

int particionaDESC(int v[], int c, int f) {
    int pivo = v[c], i = c+1, j = f;
    while (i <= j) {
        if (v[i] >= pivo) i++;
        else if (pivo >= v[j]) j--;
        else { 
            swap (v[i],v[j]);
            i++;
            j--;
        }
    } 
    v[c] = v[j];
    v[j] = pivo;
    return j;
}

void sortASC(int a[], int pos_pivo, int fim) {
    int pos_novo_pivo;
    if (pos_pivo < fim) {
        pos_novo_pivo = particionaASC(a, pos_pivo, fim);
        sortASC(a, pos_pivo, pos_novo_pivo - 1);
        sortASC(a, pos_novo_pivo + 1, fim);
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