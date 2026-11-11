// Faça um programa que armazene, em um vetor alocado dinamicamente, um conjunto N de números inteiros. Em seguida, identifique e remova os números ímpares que sejam múltiplos de 3. O vetor deve ser redimensionado de modo a armazenar todos os números pares e apenas os ímpares não múltiplos de 3. Ao final, deve ser impresso na saída padrão o tamanho e os elementos do vetor resultante.
// Entradas:
//     Quantidade N de números inteiros.
//     Números armazenados.
// Saídas:
//     Tamanho do vetor resultante.
//     Elementos do vetor resultante.
// Exemplo de Entrada:
// 10
// 1 2 3 4 5 6 7 8 9 10
// Exemplo de Saída:
// 8
// 1 2 4 5 6 7 8 10
#include <iostream>

using namespace std;

int main() {
    unsigned S;
    unsigned SOK = 0;

    cin >> S;

    int *v = new int[S];

    for (unsigned i = 0; i < S; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0 or (v[i] % 2 != 0 and v[i] % 3 != 0)) SOK++;
    }
    
    int *aux = new int[SOK];
    unsigned j = 0;

    for (unsigned i = 0; i < S; i++) {
        if (v[i] % 2 == 0 or (v[i] % 2 != 0 and v[i] % 3 != 0)) {
            aux[j] = v[i];
            j++;
        }
    }

    delete[] v;
    v = aux;

    cout << SOK << endl;
    for (unsigned i = 0; i < SOK; i++) {
        cout << v[i];
        if (i < SOK - 1) cout << " ";
    }
    cout << endl;
    
    delete[] v;

    return 0;
}