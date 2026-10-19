// Dado um número N, um vetor V de N números inteiros ordenados, um valor de busca inteiro B, e um valor de multiplicação inteiro M, faça um programa que multiplique o valor de B no vetor V pelo valor de M. Para encontrar o valor B no vetor, a busca binária recursiva deve ser utilizada. Caso o valor de busca não exista no vetor, o vetor original deve ser impresso.
// Entradas:
//     Valor inteiro N,
//     N valores inteiros ordenados que devem ser armazenados em um vetor;
//     Valor de busca B;
//     Valor de multiplicação M.
// Saídas:
//     Vetor após a multiplicação.
// Exemplo de Entrada:
// 6
// 1 2 3 4 5 6
// 5
// 2
// Exemplo de Saída:
// 1 2 3 4 10 6
// Exemplo de Entrada:
// 5
// 1 2 3 4 5 
// 6
// 3
// Exemplo de Saída:
// 1 2 3 4 5
#include <iostream>

using namespace std;

int find(int v[], int index_start, int index_final, int K) {
    int middle = (index_start + index_final) / 2;
    if (K == v[middle]) return middle;
    if (index_start < index_final) {
        if (v[middle] < K) return find(v, middle + 1, index_final, K);
        return find(v, index_start, middle - 1, K);
    }
    return -1;
}

int main() {
    unsigned N;
    int number, M;
    int index;

    cin >> N;

    int *V = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> V[i];
    }

    cin >> number >> M;

    index = find(V, 0, N - 1, number);

    if (index != -1) V[index] *= M;

    for (unsigned i = 0; i < N; i++) {
        cout << V[i] << " ";
        if (i == N - 1) cout << endl;
    }
    
    return 0;
}