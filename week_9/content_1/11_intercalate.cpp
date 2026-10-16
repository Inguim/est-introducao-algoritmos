// Faça um programa que recebe dois vetores de caracteres de tamanhos m e n, respectivamente. Sabendo que os dois vetores nunca são vazios e já se encontram ordenados em ordem crescente, intercale-os em um novo vetor, de tamanho m+n, mantendo os dados ordenados.
// Obs 1: os dois vetores podem conter caracteres repetidos.
// Obs 2: os vetores devem ser alocados dinamicamente.
// Entradas:
//     int m - Tamanho do primeiro vetor
//     int n - Tamanho do segundo vetor
//     char vet1[m] - Vetor de caracteres (separados por espaços)
//     char vet2[n] - Vetor de caracteres (separados por espaços)
// Saída:
//     char vet[m+n] - Vetor de caracteres (separados por espaços)
// Exemplo de Entradas e Saída:
// Entradas:
// 6 7
// a b b d m z
// b d e k n u w
// Saída:
// a b b b d d e k m n u w z
// Entradas:
// 5 4
// a d k n z
// b m u w
// Saída:
// a b d k m n u w z
// OBS: IGNORE ESSA RESOLUÇÃO
// OBS: IGNORE ESSA RESOLUÇÃO
// OBS: IGNORE ESSA RESOLUÇÃO
// OBS: IGNORE ESSA RESOLUÇÃO
// OBS: IGNORE ESSA RESOLUÇÃO
#include <iostream>

using namespace std;

int main() {
    unsigned NA, NB, NC;
    unsigned i, j;
    unsigned k = 0;
    
    cin >> NA >> NB;
    char *a = new char[NA];
    char *b = new char[NB];
    NC = NB + NA;
    char *c = new char[NC];

    for (i = 0; i < NA; i++) {
        cin >> a[i];
    }
    
    for (i = 0; i < NB; i++) {
        cin >> b[i];
    }
    
    i = j = 0;
    // Slk Merge sort de graça
    while (i < NA && j < NB) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < NA) {
        c[k++] = a[i++];
    }

    while (j < NB) {
        c[k++] = b[j++];
    }

    for (i = 0; i < k; i++) {
        cout << c[i] << " ";
        if (i == k - 1) cout << endl;
    }

    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}