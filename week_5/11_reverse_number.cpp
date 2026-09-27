// Faça um programa que leia um número natural e escreva o reverso desse valor. O reverso de um número é o número de trás para frente, ou seja, resultado da troca dos algarismos do início com os do fim.
// Deve haver um subprograma principal que lê um número e escreve o seu reverso. Deve haver um outro subprograma que recebe um número e retorna o seu reverso.
// Não é permitido o uso de vetores. Strings são vetores. A troca dos algarismos pode ser feita com uma única repetição de operações aritméticas, sem necessidade de biblioteca de operações matemáticas. Atenção ao planejamento de parâmetros.
// Entradas:
//     Número natural que se deseja obter o reverso.
// Saídas:
//     Reverso do valor informado pelo usuário.
// Exemplo de Entrada:
// 172
// Exemplo de Saída:
// 271
// Exemplo de Entrada:
// 1459
// Exemplo de Saída:
// 9541
#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int value) {
    int number = value;
    int reverse = 0;
    int qttAlg = 0;

    while (value > 0) {
        value /= 10;
        qttAlg++;
    }

    value = number;
    while (qttAlg - 1 > 0) {
        reverse += (value % 10) * pow(10, qttAlg - 1);
        value /= 10;
        qttAlg--;
    }

    reverse += value;
    return reverse;
}

int main() {
    int number, reverse;

    cin >> number;

    reverse = reverseNumber(number);

    cout << reverse << endl;

    return 0;
}