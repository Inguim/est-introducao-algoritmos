// Faça um programa que liste os N primeiros números primos, sendo N um valor informado pelo usuário. Lembre-se que um número é classificado como primo se ele é maior do que um e é divisível apenas por um e por ele mesmo. Além disso, apenas números naturais são classificados como primos. Os N primeiros primos deverão ser gravados em um arquivo chamado saida.
// Entrada:
//     Um número inteiro N que representa a quantidade de números primos a serem exibidos.
// Saídas (conteúdo do arquivo saida):
//     Os N primeiros números primos, um em cada linha.
// Exemplo de Entrada:
// 3
// Exemplo de Saída (conteúdo do arquivo saida):
// 2
// 3
// 5
// Exemplo de Entrada:
// 10
// Exemplo de Saída (conteúdo do arquivo saida):
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19
// 23
// 29
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int quantity;
    int number = 2;
    int divider = 2;
    bool isPrimeNumber = true;

    cin >> quantity;

    ofstream outputFile("saida");

    do {
        while (divider < number and isPrimeNumber) {
            if (number % divider == 0) isPrimeNumber = false;
            divider++;
        }
        if (isPrimeNumber) {
            outputFile << number << endl;
            quantity--;
        }
        divider = 2;
        isPrimeNumber = true;
        number++;
    } while (quantity > 0);
    outputFile.close();

    return 0;
}