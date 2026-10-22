// Faça um programa que usa busca binária recursiva para procurar números num vetor. O programa deve escrever todos os números que foram comparados ao número procurado, na ordem.
// O programa deverá ler o vetor no qual a busca será realizada, este vetor já estará ordenado.
// Entradas:
//     o número de elementos do vetor,
//     os elementos do vetor (números inteiros que estão em ordem crescente),
//     o número procurado.
// Saídas: O programa deverá escrever cada elemento do vetor comparado com o número procurado, na ordem em que eles forem comparados.
// Exemplo de entrada:
// 10
// 1 2 3 4 5 6 7 8 9 10
// 3
// Exemplo de saída:
// 5 2 3
// Exemplo de entrada (número não existe):
// 10
// 1 2 3 4 5 6 7 8 9 10
// 11
// Exemplo de saída:
// 5 8 9 10
// OBS: OBTIVE APENAS 83.4% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 83.4% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 83.4% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>

using namespace std;

int search(int v[], int index_start, int index_final, int K) {
    int middle = (index_start + index_final) / 2;
    cout << v[middle] << " ";
    if (K == v[middle]) return middle;
    if (index_start < index_final) {
        if (v[middle] < K) return search(v, middle + 1, index_final, K);
        return search(v, index_start, middle - 1, K);
    }
    return -1;
} 

int main() {
    unsigned N;
    int number;

    cin >> N;

    int *V = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> V[i];
    }

    cin >> number;

    search(V, 0, N - 1, number);
    cout << endl;
    
    return 0;
}