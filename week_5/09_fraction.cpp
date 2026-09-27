// Faça um programa que leia uma fração, simplifique a fração usando um subprograma específico para isto e escreva a fração simplificada. O planejamento a respeito da passagem de parâmetros é parte importante da avaliação.
// Considere que não existirão denominadores com o valor 0. Leitura e escrita deverão ser feitas na função principal.
// Entradas (cada uma na sua própria linha):
//     O numerador (número inteiro);
//     o denominador (número inteiro diferente de zero).
// Saídas:
//     O numerador da fração simplificada;
//     o denominador da fração simplificada.
// Exemplo de Entrada:
// 9
// 15
// Exemplo de Saída:
// 3
// 5
#include <iostream>

using namespace std;

void simplify(int &numerator, int &denominator) {
    int divider = 2;
    int lower = numerator < denominator ? numerator : denominator;

    if (denominator > 1) {
        while (divider <= lower) {
            if (numerator % divider == 0 and denominator % divider == 0) {
                numerator /= divider;
                denominator /= divider;
            }
            divider++;
        }
    }
}

int main() {
    int numerator, denominator;

    cin >> numerator >> denominator;

    simplify(numerator, denominator);

    cout << numerator << endl << denominator << endl;

    return 0;
}