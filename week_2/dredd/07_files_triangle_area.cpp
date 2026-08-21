// Faça um programa que calcula a área de um triângulo qualquer. Os valores de entrada estão em um arquivo chamado triangulo.txt. O valor da área deverá ser gravado em um arquivo chamado saida.txt.
// A área de triângulo pode ser calculada por base * altura / 2.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas (conteúdo do arquivo triangulo.txt):
//     O comprimento da base do triângulo (número real).
//     O comprimento da altura do triângulo (número real).
// Saída (conteúdo do arquivo saida.txt):
//     A área do triângulo (número real).
// Exemplo de Entrada (conteúdo do arquivo triangulo.txt):
// 12
// 23
// Exemplo de Saída (conteúdo do arquivo saida.txt):
// 138
// Exemplo de Entrada (conteúdo do arquivo triangulo.txt):
// 3.9
// 4.7
// Exemplo de Saída (conteúdo do arquivo saida.txt):
// 9.165

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    float a, b, area;

    ifstream entrada("triangulo.txt");
    entrada >> b >> a;
    entrada.close();

    area = (b * a) / 2;

    ofstream saida("saida.txt");
    saida << area;
    saida.close();

    return 0;
}