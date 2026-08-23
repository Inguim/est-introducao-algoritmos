// Faça um programa para uma loja de tintas. O programa deverá receber, em um arquivo entrada.txt o tamanho em metros quadrados da área a ser pintada e o valor do galão de tinta. Considere que o rendimento da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros. Feito isso, informe ao usuário, no arquivo saida.txt a quantidade de latas de tinta a serem compradas e o preço total.
// Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision().
// Entradas (arquivo entrada.txt):
//     Uma linha contendo um número inteiro que indica a área em metros quadrados a ser pintada .
//     Uma linha contendo um número em ponto flutuante que indica o valor do galão de tinta.
// Saídas (arquivo saida.txt):
//     Uma linha com um inteiro que representa a quantidade de latas de tinta a serem compradas.
//     Uma linha com um valor em ponto flutuante com duas casas decimais que representa o valor a ser pago pela tinta.
// Exemplo de Entrada (arquivo entrada.txt):
// 145
// 80.0
// Exemplo de Saída (arquivo saida.txt):
// 3
// 240.00
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    int area, gallons;
    float price;

    ifstream inputFile("entrada.txt");
    inputFile >> area >> price;
    inputFile.close();

    ofstream outputFile("saida.txt");
    
    gallons = ceil((area / 3) / 18.0);
    outputFile << fixed << setprecision(1);
    outputFile << gallons << endl << gallons * price << endl;
    outputFile.close();

    return 0;
}