//  Faça um programa que receba o tamanho N de um vetor alocado dinamicamente e preencha-o com valores inteiros. Encontre o segundo menor e o segundo maior elementos, crie um novo vetor com duas posições a menos, também alocado dinamicamente, e preencha o novo vetor com os demais elementos, excluindo os dois elementos identificados. Imprima o novo vetor. Considere, para fins de simplificação, que o segundo maior e o segundo menor são diferentes.
// Entradas:
//     int n - Tamanho do vetor.
//     float vet[n] - Vetor que será preenchido.
// Saídas:
//     Novo vetor, retirando o segundo menor e segundo maior elementos (float).
// Exemplos de Entradas e Saídas:
// Entradas:
// 4
// 3
// 1
// 6
// 5
// Saídas:
// 1
// 6
// OBS: OBTIVE APENAS 88.4% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 88.4% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 88.4% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>

using namespace std;

void findSecondHigher(int v[], int SIZE, int &second) {
    int i = 0;
    int higher;
    higher = second = v[0];

    for (i = 1; i < SIZE; i++) {
        if (v[i] > higher) {
            higher = v[i];
        }
    }
    
    for (i = 1; i < SIZE; i++) {
        if (v[i] < second) {
            second = v[i];
        }
    }

    for (i = 0; i < SIZE; i++) {
        if (v[i] < higher and v[i] > second) {
            second = v[i];
        }
    }
}

void findSecondLower(int v[], int SIZE, int &second) {
    int i = 0;
    int lower;
    lower = second = v[0];

    for (i = 1; i < SIZE; i++) {
        if (v[i] < lower) {
            lower = v[i];
        }
    }
    
    for (i = 1; i < SIZE; i++) {
        if (v[i] < second and v[i] != lower) {
            second = v[i];
        }
    }
}

int main() {
    unsigned N;
    int lower, higher;
    unsigned i, j = 0;
    
    cin >> N;
    int *v = new int[N];
    int *r = new int[N - 2];
    
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }

    findSecondHigher(v, N, higher);
    findSecondLower(v, N, lower);

    for (i = 0; i < N; i++) {
        if (v[i] != higher and v[i] != lower) {
            r[j] = v[i];
            j++;
        }
    }

    for (i = 0; i < j; i++) {
        cout << r[i] << " ";
        if (i == j - 1) cout << endl;
    }

    delete[] v;
    delete[] r;
    return 0;
}