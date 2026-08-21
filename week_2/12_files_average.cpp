// Faça um programa que leia do arquivo dados.txt oito valores. O programa deve calcular e imprimir em um arquivo media.txt a média aritmética dos valores informados. Use setprecision() para informar o resultado com três casas decimais
// Entrada (arquivo dados.txt):
//     Oito valores em ponto flutuante, separados por espaço ou quebra de linha
// Saída (arquivo media.txt):
//     Média dos valores informados (em ponto flutuante, com três casas decimais)
// Exemplo de Entrada (dados.txt):
// 50 30 60 20 70 50
// 13.1 14.3
// Exemplo de Saída media.txt):
// 38.425
// Exemplo de Entrada (dados.txt):
// 50.4
// 60.5
// 70.3
// 1 2 3 4 5
// Exemplo de Saída media.txt):
// 24.525
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    float value;
    float result;

    ifstream inputFile("dados.txt");

    if (inputFile) {
        while (inputFile >> value) {
            result += value;
        }
        inputFile.close();

        ofstream outputFile("media.txt");
        outputFile << fixed << setprecision(3);
        outputFile << result / 8;
        outputFile.close();
    }

    return 0;
}