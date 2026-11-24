#include <iostream>

using namespace std;

int particionaASC(int v[], int inicio, int fim) { // v[p..r]
   int pivo = v[fim];
   int j = inicio;
   int k;
   for (k = inicio; k < fim; k++) {
      if (v[k] <= pivo) {
         swap(v[j], v[k]);
         j++; 
      } 
   }
   swap(v[j], v[fim]);
   return j; 
}

int particionaDESC(int v[], int inicio, int fim) { // v[p..r]
   int pivo = v[fim];
   int j = inicio;
   int k;
   for (k = inicio; k < fim; k++) {
      if (v[k] >= pivo) {
         swap(v[j], v[k]);
         j++; 
      } 
   }
   swap(v[j], v[fim]);
   return j; 
}

void sortASC(int a[], int inicio, int fim) {
   int indice_pivo;         
   if (inicio < fim) {  
      indice_pivo = particionaASC(a, inicio, fim);
      sortASC(a, inicio, indice_pivo - 1); 
      sortASC(a, indice_pivo + 1, fim); 
   }
}

void sortDESC(int a[], int inicio, int fim) {
   int indice_pivo;         
   if (inicio < fim) {  
      indice_pivo = particionaDESC(a, inicio, fim);
      sortDESC(a, inicio, indice_pivo - 1); 
      sortDESC(a, indice_pivo + 1, fim); 
   }
}

int main() {
    const int TAM = 10;
    int vet1[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int vet2[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sortASC(vet1, 0, TAM - 1);

    for (int i = 0; i < TAM; i++) {
        cout << vet1[i] << " ";
        if (i == TAM - 1) cout << endl;
    }

    sortDESC(vet2, 0, TAM - 1);

    for (int i = 0; i < TAM; i++) {
        cout << vet2[i] << " ";
        if (i == TAM - 1) cout << endl;
    }
    
    return 0;
}
