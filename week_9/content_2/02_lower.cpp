// Faça um programa que recebe um vetor V de N elementos e determina, de forma recursiva, o menor elemento do vetor. Podemos usar a seguinte ideia:
//     O menor elemento de um vetor de uma única posição é o seu único elemento.
//     O menor elemento de um vetor de mais de uma posição é o menor entre o primeiro elemento e o menor do restante do vetor.
// Entradas:
//     Tamanho N do vetor.
//     Elementos do vetor.
// Saídas
//     Menor elemento do vetor.
// Exemplos de Entradas e Saídas:
// Entradas:
// 4
// 2 4 3 1
// Saídas:
// 1 
#include <iostream>

using namespace std;

int find(int v[], int n) {
    if (n == 1) return v[0];
    int lower = find(v + 1, n - 1);
    lower = v[0] < lower ? v[0] : lower;
    return lower;
}

int main() {
    unsigned N;
    int lower;

    cin >> N;

    int *v = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> v[i];
    }

    lower = find(v, N);

    cout << lower << endl;
    
    return 0;
}