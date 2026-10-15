// Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.
// Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho, faça a alocação dinâmica dos dois vetores e descubra se os vetores são iguais ou não.
// Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".
// Observação: não haverá elementos repetidos em cada vetor.
// Exemplo de Entrada:
// 5
// 1 2 3 4 5
// 5 4 3 2 1
// Exemplo de Saída:
// IGUAIS
// Exemplo de Entrada:
// 5
// 1 2 3 6 5
// 5 4 3 2 1
// Exemplo de Saída:
// DIFERENTES
#include <iostream>

using namespace std;

int main() {
    unsigned N;
    int isEquals = true;
    int isIn = false;
    unsigned i, j;
    
    cin >> N;
    int *a = new int[N];
    int *b = new int[N];
    
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (i = 0; i < N; i++) {
        cin >> b[i];
    }
    
    for (i = 0; i < N; i++) {
        isIn = false;
        for (j = 0; j < N; j++) {
            if (a[i] == b[j]) {
                isIn = true;
                j = N;
            }
        }
        if (not isIn) {
            isEquals = false;
            i = N;
        }
    }

    cout << (isEquals ? "IGUAIS" : "DIFERENTES") << endl;

    delete[] a;
    delete[] b;
    return 0;
}