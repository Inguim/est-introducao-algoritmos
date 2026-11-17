// Implemente uma variação do algoritmo Insertion Sort de modo que os elementos do vetor sejam ordenados em ordem decrescente. Assim, a cada passo deve-se comparar se o elemento em uma determinada posição i é maior que os elementos posicionados entre i-1 e 0.
// Entradas:
//     Tamanho do vetor que será ordenado.
//     Elementos do vetor que serão ordenados (inteiros).
// Saídas:
//     Os elementos do vetor a cada troca de valor.
// Exemplo de Entrada:
// 5
// 1 2 3 4 5
// Exemplo de Saída:
// 2 1 3 4 5 
// 3 2 1 4 5 
// 4 3 2 1 5 
// 5 4 3 2 1
#include <iostream>

using namespace std;

void printVector(int v[], unsigned S) {
    for (unsigned i = 0; i < S; i++) {
        cout << v[i];
        if (i < S - 1) cout << " ";
    }
    cout << endl;
}

void sort(int vet[], int tam) {
    int temp, j;
    
    for (int i = 1; i < tam; i++) {
        temp = vet[i];
        j = i - 1;

        while (j >= 0 and temp > vet[j]) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = temp;
        
        printVector(vet, tam);
    }
}

int main() {
    unsigned S;

    cin >> S;

    int *v = new int[S];

    for (unsigned i = 0; i < S; i++) {
        cin >> v[i];
    }
    
    sort(v, S);

    delete[] v;

    return 0;
}