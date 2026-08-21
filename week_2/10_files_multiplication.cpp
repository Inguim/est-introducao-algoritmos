// Faça um programa que receba da entrada padrão um valor inteiro de três dígitos (100 < N < 999). O programa deve calcular e imprimir na saída padrão a soma dos três dígitos e salvar em um arquivo saida.txt (sem acento) o produto entre os três dígitos.
// Entrada:
//     Número inteiro de três dígitos.
// Saída (saída padrão):
//     A soma entre os três dígitos.
// Saída (saida.txt):
//     O produto entre os três dígitos.
// Exemplo de Entrada:
// 919
// Exemplo de Saída (saída padrão):
// 19
// Exemplo de Saída (saida.txt):
// 81
// Exemplo de Entrada:
// 254
// Exemplo de Saída (saída padrão):
// 11
// Exemplo de Saída (saida.txt):
// 40
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int valor;
    int centena, dezena, unidade;

    cin >> valor;

    centena = valor / 100;
    dezena =  (valor / 10) % 10;
    unidade = valor % 10;

    cout << centena + dezena + unidade << endl;

    ofstream arquivo("saida.txt");

    if (arquivo) arquivo << (centena * dezena * unidade) << endl; 

    return 0;
}