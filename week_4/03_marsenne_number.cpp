// O Senhor das Estrelas, dos Guardiões da Galáxia, resolveu colocar senha nos principais componentes da nave. Para facilitar, ele adotou um esquema de senha composta por uma sequência de números e símbolos. Para não ter que anotar toda a senha, ele resolveu adotar a Série de Mersenne como gerador da senha.
// Número de Mersenne é todo número natural da forma Mn=2n-1, onde n é um número natural qualquer. A Série de Mersenne é dada pela sequência de números de Mersenne. Por exemplo, Sn = {0, 1, 3, 7, 15, 31, 63, 127, 255, 511, , ..., 2n-1}.
// Para montar a senha, o Senhor das Estrelas anota um inteiro natural N qualquer e gera a Série de Mersenne com todos os números de Mersenne menores ou iguais a N.
// Sua tarefa é implementar um algoritmo para, a partir do número gerador, calcular a senha a ser utilizada pelo Senhor das Estrelas.
// Entrada:
//     Um número natural N lido a partir de um arquivo de entrada "senha.txt"
// Saídas:
//     A sequência de números de Mersenne menores ou iguais a N armazenados em um arquivo "saida.txt"
// Exemplo de conteúdo do arquivo "senha.txt":
// 3123
// Exemplo de conteúdo do arquivo "saida.txt":
// 0  1  3  7  15  31  63  127  255  511  1023  2047
// Exemplo de conteúdo do arquivo "senha.txt":
// 255
// Exemplo de conteúdo do arquivo "saida.txt":
// 0  1  3  7  15  31  63  127  255
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int n, marsenneNumber;
    int i = 0;
    bool isNotBigger = true;

    ifstream inputFile("senha.txt");
    inputFile >> n;
    inputFile.close();

    ofstream outputFile("saida.txt");
    while (isNotBigger) {
        marsenneNumber = pow(2, i) - 1;
        if (marsenneNumber <= n) outputFile << marsenneNumber << " ";
        else isNotBigger = false;
        i++;
    }
    outputFile.close();

    return 0;
}   