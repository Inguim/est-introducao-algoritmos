// Escreva um programa que, dado o valor inteiro de reais, determine a quantidade de cada tipo de nota necessária para totalizar esse valor, de modo a minimizar a quantidade de cédulas a serem emitidas por um caixa eletrônico.
// Considere que existem apenas 3 tipos de notas: R$ 100, R$50 e R$10. Por exemplo R$50,00 equivalem a uma única nota de cinquenta Reais. R$180,00 equivalem a uma nota de R$100,00, uma nota de R$ 50 e três notas de R$ 10.
// A quantidade de cada nota deve ser gravada no arquivo saque.txt.
// Entrada:
//     Valor inteiro representando a quantia a ser sacada.
// Saídas (arquivo saque.txt):
//     Três valores inteiros que indicam o número de cédulas de R$ 100, R$ 50 e R$10 a serem emitidas, respectivamente.
// Exemplo de Entrada:
// 630
// Exemplo de Saídas (arquivo saque.txt):
// 6
// 0
// 3
// Exemplo de Entrada:
// 70
// Exemplo de Saída (arquivo saque.txt):
// 0
// 1
// 2
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int value, count[3] = {0};

    cin >> value;

    if (value >= 100) {
        count[0] = value / 100;
        value = value % 100;
    }

    if (value >= 50) {
        count[1] = value / 50;
        value = value % 50;
    }

    if (value >= 10) {
        count[2] = value / 10;
        value = value % 10;
    }

    ofstream output("saque.txt");
    output << count[0] << endl << count[1] << endl << count[2];
    output.close();

    return 0;
}