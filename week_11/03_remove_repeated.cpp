// Faça um programa que armazene, em um vetor alocado dinamicamente, uma quantidade N de números inteiros. Em seguida, identifique e remova os elementos repetidos. O vetor deve ser redimensionado e passar a armazenar apenas elementos não repetidos. Ao fim, seu programa deve imprimir na saída padrão o tamanho atual do vetor e os elementos armazenados.
// Entradas:
//     Quantidade N de números inteiros
//     Números armazenados no vetor.
// Saídas:
//     Tamanho atual do vetor.
//     Elementos atuais do vetor.
// Exemplo de Entrada:
// 10
// 3 5 12 55 3 78 22 55 34 10 
// Exemplo de Saída:
// 8
// 3 5 12 55 78 22 34 10
#include <iostream>

using namespace std;

bool isRepeatedNumber(unsigned index, int v[]) {
    bool repeated = false;
    for (unsigned i = 0; i < index; i++) {
        if (i != index and v[i] == v[index]) {
            repeated = true; 
            i = index;
        }
    }
    return repeated;
}

int main() {
    unsigned N;
    unsigned qttNotRepeated = 0;

    cin >> N;

    int *v = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (unsigned i = 0; i < N; i++) {
        if (not isRepeatedNumber(i, v)) {
            qttNotRepeated++;
        }
    }
    
    int *aux = new int[qttNotRepeated];
    unsigned j = 0;
    for (unsigned i = 0; i < N; i++) {
        if (not isRepeatedNumber(i, v)) {
            aux[j] = v[i];
            j++;
        }
    }

    delete[] v;
    v = aux;

    cout << qttNotRepeated << endl;
    for (unsigned i = 0; i < qttNotRepeated; i++) {
        cout << v[i];
        if (i < qttNotRepeated - 1) cout << " ";
    }
    cout << endl;
    
    delete[] v;

    return 0;
}