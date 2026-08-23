// As coordenadas geográficas expressam de forma exata em graus a posição de qualquer ponto na superfície do globo terrestre. A medida de grau possui duas notações, grau em notação sexagesimal (grau, minuto e segundo) e grau em notação decimal. A notação sexagesimal é obtida a partir da notação decimal da seguinte maneira:
//     O Grau corresponde ao valor da parte inteira da notação decimal.
//     O minuto é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, pegando somente a parte inteira deste resultado.
//     O segundo é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, e multiplicando a parte fracionária deste resultado por 60.
// Faça um programa para calcular os graus, minutos e segundos de um valor inserido pelo usuário na notação de grau em decimal, armazenando o resultado em um arquivo coordenadas.txt.
// Entradas:
//     Grau em notação decimal (valor em ponto flutuante)
// Saídas (arquivo coordenadas.txt):
//     Grau em notação sexagesimal: grau, minuto, segundo. Os valores exibidos são inteiros, um em cada linha.
// Exemplo de Entrada:
// 48.764169
// Exemplo de Saída (arquivo coordenadas.txt):
// 48
// 45
// 51
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    float coordinate;

    cin >> coordinate;

    ofstream outputFile("coordenadas.txt");
    
    outputFile << int(coordinate) << endl;
    outputFile << int((coordinate - int(coordinate)) * 60) << endl;
    outputFile << int(((coordinate - int(coordinate)) * 60 - int((coordinate - int(coordinate)) * 60)) * 60) << endl;

    outputFile.close();

    return 0;
}