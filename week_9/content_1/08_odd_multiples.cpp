// Faça um programa que armazene, em um vetor alocado dinamicamente, um conjunto N de números inteiros. Em seguida, identifique os elementos que são números ímpares que sejam múltiplos de 3 e crie um novo vetor contendo apenas estes elementos. Os vetores devem ser alocados dinamicamente e, ao final, devem ser impressos na saída padrão o tamanho e os elementos do novo vetor.
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
// 2
// 3 9
// Exemplo de Entrada:
// 7
// 2 4 6 7 8 10 11 
// Exemplo de Saída:
// 0
#include <iostream>

using namespace std;

int main() {
    unsigned N;
    unsigned i;
    unsigned k = 0;
    
    cin >> N;
    int *a = new int[N];
    int *b = new int[N];
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    for (i = 0; i < N; i++) {
        if (a[i] % 2 != 0 and a[i] % 3 == 0) {
            b[k] = a[i];
            k++;
        }
    }

    cout << k << endl;
    for (i = 0; i < k; i++) {
        cout << b[i] << " ";
        if (i == k - 1) cout << endl;
    }

    delete[] a;
    delete[] b;
    return 0;
}