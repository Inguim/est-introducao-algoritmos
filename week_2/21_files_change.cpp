// Faça um programa que receba a partir do arquivo entrada.txt o valor em reais que um cliente dá ao funcionário e o valor total da compra. Calcule o troco que o funcionário deve dar ao cliente em notas de 20, 10, 5, 2 e 1 e armazene a resposta no arquivo de saída saida.txt.
// A quantidade de notas deve ser a menor possível, ou seja, 6 reais de troco devem ser entregues por meio de uma nota de 5 e uma de 1, ao invés de três notas de 2.
// Entradas (conteúdo do arquivo entrada.txt):
//     Valor que o cliente entrega ao funcionário (inteiro),
//     Valor total da compra (inteiro).
// Saídas (conteúdo do arquivo saida.txt):
//     Quantidade de notas de 20, 10, 5, 2 e 1 (respectivamente) necessárias para o troco.
// Exemplo de entradas (conteúdo do arquivo entrada.txt):
// 100 
// 43
// Exemplo de saídas (conteúdo do arquivo saida.txt):
// 2 
// 1 
// 1 
// 1 
// 0
// Exemplo de Entrada (conteúdo do arquivo entrada.txt):
// 80
// 67
// Exemplo de Saída (conteúdo do arquivo saida.txt):
// 0
// 1
// 0
// 1
// 1
#include <iostream>
#include <fstream>

using namespace std;

int main () {
    int value, debit;
    int changes[5] = {0};
    int AVAILABLE_CHANGES[5] = {20, 10, 5, 2, 1};

    ifstream inputFile("entrada.txt");
    inputFile >> value >> debit;
    inputFile.close();

    ofstream outputFile("saida.txt");

    value -= debit;

    for (int i = 0; i < 5; i++) {
        if (value >= AVAILABLE_CHANGES[i]) {
            changes[i] = value / AVAILABLE_CHANGES[i];
            value = value % AVAILABLE_CHANGES[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        outputFile << changes[i] << endl;
    }

    outputFile.close();

    return 0;
}