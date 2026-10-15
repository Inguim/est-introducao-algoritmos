// Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.
// Observação: o vetor deverá ser alocado dinamicamente.
// Entradas:
//     Quantidade de números a serem inseridos pelo usuário/li>
//     Sequência de números inteiros
// Saídas:
//     Números que são múltiplos de 2;
//     Números que são múltiplos de 3;
//     Números que são múltiplos de 2 e 3 simultaneamente.
// Exemplo de entrada:
// 7
// 4 6 3 9 7 10 13
// Exemplo de saída:
// 4 6 10
// 6 3 9 
// 6
#include <iostream>

using namespace std;

int main() {
    unsigned N;
    bool hasMultiple = false;
    unsigned i;
    
    cin >> N;
    int *a = new int[N];
    
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (i = 0; i < N; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            hasMultiple = true;
        }
        if (i == N - 1 and hasMultiple) cout << endl;
    }
    if (not hasMultiple) {
        cout << 0 << endl;
    }

    hasMultiple = false;
    for (i = 0; i < N; i++) {
        if (a[i] % 3 == 0) {
            cout << a[i] << " ";
            hasMultiple = true;
        }
        if (i == N - 1 and hasMultiple) cout << endl;
    }
    if (not hasMultiple) {
        cout << 0 << endl;
    }

    hasMultiple = false;
    for (i = 0; i < N; i++) {
        if (a[i] % 2 == 0 and a[i] % 3 == 0) {
            cout << a[i] << " ";
            hasMultiple = true;
        }
        if (i == N - 1 and hasMultiple) cout << endl;
    }
    if (not hasMultiple) {
        cout << 0 << endl;
    }

    delete[] a;
    return 0;
}