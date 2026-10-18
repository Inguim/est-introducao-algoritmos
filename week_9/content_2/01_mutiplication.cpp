// (BACKES,2012) A multiplicação de dois números naturais pode ser feita através de somas sucessivas (por exemplo, 2*3=2+2+2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois números naturais.
// Entradas:
//     Dois números naturais.
// Saídas:
//     Resultado da multiplicação dos dois números.
// Exemplo de Entrada:
// 3 5
// Exemplo de Saída:
// 15
#include <iostream>

using namespace std;

// Outra abordagem
// int multiplyBySum(int number, int multiplier) {
//     if (multiplier == 0) return 0;
//     return number + multiplyBySum(number, multiplier - 1);
// }

int multiplyBySum(int number, int multiplier, int result = 0) {
    if (multiplier == 0) return result;
    return multiplyBySum(number, multiplier - 1, result + number);
}

int main() {
    int number, multiplier;

    cin >> number >> multiplier;

    number = multiplyBySum(number, multiplier);

    cout << number << endl;

    return 0;
}