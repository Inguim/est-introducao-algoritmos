// Em muitos programas é muito útil ter os dados em uma determinada ordem: números do menor para o maior, palavras em ordem alfabética, etc. Nesse exercício você deve criar um programa que recebe três números inteiros em ordem crescente, ou seja, o usuário fornecerá os números garantindo que o segundo é maior que o primeiro e o terceiro é maior que o segundo. O programa deverá receber também um quarto número inteiro qualquer e, deve exibir os quatro números em ordem crescente. Atente para o caso em que o quarto número pode ser igual a um dos demais.
// Entradas:
//     Três números inteiros informados em ordem crescente. Um número inteiro qualquer. Cada dado de entrada será fornecido em uma linha diferente.
// Saídas:
//     Os quatro números inteiros informados exibidos em ordem crescente.
// Exemplo de entrada:
// 3 
// 6 
// 9
// 4
// Exemplo de saída:
// 3 4 6 9
// Exemplo de Entrada:
// 1
// 5
// 7
// 11
// Exemplo de Saída:
// 1 5 7 11
// Exemplo de Entrada:
// 3
// 6
// 12
// 2
// Exemplo de Saída:
// 2 3 6 12
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    if (num4 < num1) {
        cout << num4 << " " << num1 << " " << num2 << " " << num3 << " " << endl; 
    } else if (num4 < num2) {
        cout << num1 << " " << num4 << " " << num2 << " " << num3 << " " << endl; 
    } else if (num4 < num3) {
        cout << num1 << " " << num2 << " " << num4 << " " << num3 << " " << endl; 
    } else {
        cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl; 
    }

    return 0;
}