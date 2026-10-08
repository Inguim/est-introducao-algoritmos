// Parênteses são importantes na matemática por representar uma prioridade na solução de uma expressão. Sabendo disso faça um programa que leia uma expressão algébrica e então determine se os parênteses foram corretamente abertos e fechados. Para simplificar esta atividade, suponha que a mera contagem de parênteses correspondentes resolve o problema.
// Se todos os parênteses estiverem corretos o programa deverá escrever ''corretos'', caso contrário deverá escrever "incorretos''.
// Entradas:
//     Expressão algébrica.
// Saídas:
//     Escrever ''corretos'' caso todos os parênteses foram corretamente abertos e fechados ou então 'incorretos''.
// Exemplo de Entrada:
// 1+(3*2x)
// Exemplo de Saída:
// corretos
// Exemplo de Entrada:
// (5-2y)*(7x/2
// Exemplo de Saída:
// incorretos
#include <iostream>
#include <string>

using namespace std;

int main() {
    string expression;
    int numberOfOpen, numberOfClose;

    numberOfOpen = numberOfClose = 0;

    cin >> expression;

    for (size_t i = 0; i < expression.length(); i++){
        if (expression[i] == '(') numberOfOpen++;
        else if (expression[i] == ')') numberOfClose++;
    }

    if (numberOfOpen == numberOfClose) cout << "corretos" << endl;
    else cout << "incorretos" << endl;
    
    return 0;
}