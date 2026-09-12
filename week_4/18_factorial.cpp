// Em um estudo computacional, você precisa calcular o resultado de uma operação envolvendo fatoriais de números em um intervalo fechado [A,B]. O objetivo é determinar o fatorial do somatório dos fatoriais dos números contidos nesse intervalo. O cálculo segue os seguintes passos:
//     Para cada número natural X no intervalo [A,B], calcule o seu fatorial (X!);
//     Some os fatoriais calculados;
//     Por fim, calcule o fatorial do somatório obtido.
// Entradas:
//     Dois números inteiros A e B separados por espaço, representando o início e o fim do intervalo fechado, respectivamente.
// Saídas:
//     Um número inteiro representando o fatorial do somatório dos fatoriais.
// Exemplo de Entrada:
// 1 3
// Exemplo de Saída:
// 362880
// Exemplo de Entrada:
// 1 2
// Exemplo de Saída:
// 6
// Exemplo de Entrada:
// 3 3
// Exemplo de Saída:
// 720
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
// OBS: IGNORE ESTA SOLUÇÃO
#include <iostream>

using namespace std;

int main() {
    int start, end, aux;
    int sum = 0, i = 0;
    int factorial = 1;
    int multiplier = 2;

    cin >> start >> end;

    if (start > end) {
        aux = end;
        end = start;
        start = aux;
    }

    while(start <= end) {
        while(multiplier <= start) {
            factorial *= multiplier;
            multiplier++;
        }
        sum += factorial;
        factorial = 1;
        multiplier = 2;
        start++;
    }

    factorial = 1;
    multiplier = 2;
    while(multiplier <= sum) {
        factorial *= multiplier;
        multiplier++;
    }

    cout << factorial << endl;

    return 0;
}