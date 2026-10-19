// Faça um programa que realiza busca binária de números inteiros em ordem decrescente. O programa deve escrever a posição do valor procurado. Se o valor procurado não estiver no vetor, a posição -1 (menos um) deverá ser escrita. Se o valor procurado ocorrer mais de uma vez no vetor, a primeira ocorrência que for encontrada é a que deve ser informada. A busca binária deve ser realizada por um módulo recursivo.
// Entradas:
//     A quantidade de números a ser lida.
//     Vários números inteiros em ordem decrescente.
//     O valor procurado (número inteiro).
// Saída:
//     A posição do valor procurado.
// Exemplo de entrada:
// 6
// 8 7 5 4 2 2
// 5
// Exemplo de saída:
// 2
#include <iostream>

using namespace std;

int find(int v[], int index_start, int index_final, int K) {
    int middle = (index_start + index_final) / 2;   
    if (K == v[middle]) return middle;
    if (index_start < index_final) {
        if (v[middle] < K) return find(v, index_start, middle - 1, K);
        return find(v, middle + 1, index_final, K);
    }
    return -1;
}

int main() {
    unsigned N;
    int number;
    int index;

    cin >> N;

    int *V = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> V[i];
    }

    cin >> number;

    index = find(V, 0, N - 1, number);

    cout << index << endl;
    
    return 0;
}