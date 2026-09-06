// A notação pós-fixada também conhecida como notação polonesa inversa possui a característica de ter o sinal da operação após os números, assim "1 + 2" deve ser escrito na forma "1 2 +", "3 * 5" deve ser "3 5 *", e assim por diante. Faça um programa que leia uma operação na notação pós-fixada e escreva o resultado a operação.
// Entradas:
//     Dois números inteiros.
//     Símbolo representando a operação que será realizada (+, -, *, /).
// Saídas:
//     Resultado da operação.
// Exemplo de Entrada:
// 16 5 /
// Exemplo de Saída:
// 3
#include <iostream>

using namespace std;

int main() {
    int A, B, result;
    char operation;

    cin >> A >> B >> operation;

    switch (operation){
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
        default:
            break;
    }

    cout << result << endl;

    return 0;
}