// Faça um programa que receba um ano. Se o ano for bissexto, o programa deve escrever 1. Se não for, o programa deve escrever 0.
// Todos os anos múltiplos de 400 são bissextos. Dentre os outros, são bissextos todos os anos múltiplos de 4 que não são múltiplos de 100. Todos os demais não são bissextos.
// Exemplo de entrada:
// 1996
// Exemplo de saída:
// 1
#include <iostream>

using namespace std;

int main() {
    int year;

    cin >> year;

    if (year % 400 == 0) {
        cout << 1 << endl;
    } else if (year % 4 == 0 and year % 100 != 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}