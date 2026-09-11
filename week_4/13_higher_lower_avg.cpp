// Escreva um algoritmo que leia uma sequência valores inteiros e positivos de um arquivo entrada.txt e:
// A) Encontre o maior valor.
// B) Encontre o menor valor.
// C) Calcule a média dos números lidos.
// Entradas (arquivo entrada.txt):
//     Uma sequência de valores inteiros (int).
// Saídas:
//     Maior número lido.
//     Menor número lido.
//     Média dos números lidos, com precisão de uma casa decimal.
// Exemplo de Entrada (arquivo entrada.txt):
// 5 6 25 1 3 7 11 24 4 9
// Exemplo de Saída:
// 25
// 1
// 9.5
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int higher, lower;
    int sum = 0, quantity = 1, number;

    ifstream inputFile("entrada.txt");
    inputFile >> higher;
    sum = higher;
    lower = higher;

    while (inputFile >> number) {
        if (number > higher) higher = number;
        if (number < lower) lower = number;
        sum += number;
        quantity++;
    }
    inputFile.close();

    cout << higher << endl;
    cout << lower << endl;
    cout << sum / float(quantity) << endl;

    return 0;
}