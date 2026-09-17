// Na matemática, o número de Euler, denominado em homenagem ao matemático suíço Leonhard Euler, é a base dos logaritmos naturais. As variantes do nome do número incluem: número de Napier, constante de Néper, número neperiano, constante matemática, número exponencial(Wikipédia)
// Com as informações acima, faça um algoritmo que calcule o número de euler utilizando a fórmula a seguir:
// e = ∑ n = 0 ∞ 1 n ! = 1 0 ! + 1 1 ! + 1 2 ! + 1 3 ! + 1 4 ! + …
// Utilize uma função para calcular o fatorial.
// Dica: armazene o resultado do cálculo do fatorial em uma variável de ponto flutuante.
// Entradas:
//     int n - a precisão a qual o número de euler será calculado (ou seja, o número de termos utilizados no cálculo da série).
// Saídas:
//     A aproximação do número de euler (double) com a precisão especificada.
// Exemplos de Entradas e Saídas:
// Entradas:
// 20
// Saídas:
// 2.71828
#include <iostream>

using namespace std;

double calcFactorial(int number) {
    double factorial = 1.0;
    int multiplier = 2;

    while(multiplier <= number) {
        factorial *= multiplier;
        multiplier++;
    }

    return factorial;
}

int main() {
    int precision;
    double factorial;
    double eulerNumber = 0;
    int i = 0;

    cin >> precision;

    while (i < precision) {
        factorial = calcFactorial(i);
        eulerNumber += 1.0 / factorial;
        i++;
    }

    cout << eulerNumber << endl;

    return 0;
}