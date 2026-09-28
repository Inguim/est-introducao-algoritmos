// Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.
// Entradas:
//     Números inteiros a serem armazenados no vetor.
// Saídas:
//     Números inteiros armazenados após a troca.
// Não é permitido fazer apenas a impressão dos dados em ordem inversa, os dados devem ser realmente trocados de posição.
// Exemplo de Entrada:
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// Exemplo de Saída:
// 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    int a[SIZE];
    int i, j, aux;

    for (i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    j = SIZE -1;

    for (i = 0; i < SIZE / 2; i++) {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
        j--;
        // otimização :)
        cout << a[i] << " ";
    }
    
    for (i = i; i < SIZE; i++) {
        cout << a[i] << " ";
    }

    return 0;
}