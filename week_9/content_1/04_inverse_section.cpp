// Faça um programa que lê um vetor de números inteiros e depois escreve todos os números entre dois marcadores de limite na ordem inversa. Os limites não farão parte da saída.
// Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo. Observe os exemplos a seguir.
// Obs: os vetores devem ser alocados dinamicamente.
// Entradas:
//     Quantidade de elementos do vetor.
//     Linha contendo os números inteiros do vetor (separados entre si por espaço).
//     Linha contendo os dois números delimitadores (separados entre si por espaço).
// Saídas:
//     Números do vetor entre os delimitadores, na ordem inversa da leitura.
// Exemplo de entrada:
// 6
// 9 2 3 4 5 6
// 2 6
// Exemplo de saída:
// 5 4 3
// Exemplo de entrada:
// 7
// 8 -1 2 4 5 0 3
// 5 -1
// Exemplo de saída:
// 4 2
#include <iostream>

using namespace std;

int main() {
    unsigned N;
    int a, b;
    unsigned start, end, aux;
    unsigned i;
    
    cin >> N;
    int *v = new int[N];
    
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }

    cin >> a >> b;

    for (i = 0; i < N; i++) {
        if(v[i] == a) start = i;
        else if (v[i] == b) end = i;
    }

    if (start > end) {
        aux = end;
        end = start;
        start = aux;
    }

    for (i = end - 1; i > start; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    delete[] v;
    return 0;
}