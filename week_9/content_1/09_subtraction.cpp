// Escreva um programa que leia duas cadeias de caracteres e altere a primeira cadeia para retirar todos os caracteres que estão também na segunda cadeia. As duas cadeias de entrada devem ser declaradas como vetores de char alocados dinamicamente.
// No final, a primeira cadeia de caracteres resultante deve ser copiada para um vertor de caracteres alocado dinamicamente com o tamanho exato. Todas alocações de vetores do programa devem ser dinâmicas.
// Entradas:
//     Numero de elementos do primeiro vetor
//     Elementos do primeiro vetor
//     Numero de elementos do segundo vetor
//     Elementos do segundo vetor
// Saídas:
//     Vetor resultante com os caracteres do primeiro vetor que não se encontram no segundo.
// Exemplo de Entrada:
// 10
// q w e r t y u i o p
// 9
// m n b v c x z q w
// Exemplo de Saída:
// e r t y u i o p
#include <iostream>

using namespace std;

int main() {
    unsigned NA, NB;
    int isIn = false;
    unsigned i, j;
    
    cin >> NA;
    char *a = new char[NA];
    for (i = 0; i < NA; i++) {
        cin >> a[i];
    }
    
    cin >> NB;
    char *b = new char[NB];
    for (i = 0; i < NB; i++) {
        cin >> b[i];
    }
    
    for (i = 0; i < NA; i++) {
        isIn = false;
        for (j = 0; j < NB; j++) {
            if (a[i] == b[j]) {
                isIn = true;
                j = NB;
            }
        }
        if (not isIn) {
            cout << a[i] << " ";
        }
        if (i == NA - 1) cout << endl;
    }

    delete[] a;
    delete[] b;
    return 0;
}