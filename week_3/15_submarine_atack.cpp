// Durante um combate no Canal da Mancha o capitão de um navio avistou um submarino inimigo que atacava navios cargueiros. Uma bomba foi jogada na posição X,Y. Dado que o submarino se encontrava na posição I,J você deve fazer um programa que determina se a bomba acertou o submarino. Caso a bomba não acerte, o programa mostra a distância entre a bomba e o submarino. É considerado acerto no submarino se a distância for menor que 300 metros. Lembre-se que o cálculo da distância entre dois pontos pode ser feito utilizando a fórmula da distância euclidiana que é: d=((X-I)2+(J-Y)2)1/2. Os dados de entrada serão recebidos a partir do arquivo "ataque.txt".
// Entradas (conteúdo do arquivo "ataque.txt"):
//     Posição I do submarino (número real);
//     Posição J do submarino (número real);
//     Posição X da bomba (número real);
//     Posição Y da bomba (número real).
// Saídas:
//     A palavra "ACERTOU" ou a distância (número real).
// Exemplo 1
// Exemplo de entrada (conteúdo do arquivo "ataque.txt"):
// 232.49
// 584.19
// 212.40
// 487.63
// Exemplo de Saída:
// ACERTOU
// Exemplo 2
// Exemplo de entrada (conteúdo do arquivo "ataque.txt"):
// 425.59
// 461.28
// 167.58
// 821.66
// Exemplo de Saída:
// 443.21879980434045
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    float i, j, x, y;
    float distance;

    ifstream inputFile("ataque.txt");
    if (inputFile) {
        inputFile >> i >> j >> x >> y;
        inputFile.close();
    }

    distance = sqrt(pow(x-i, 2) + pow(j-y, 2));

    if (distance < 300) cout << "ACERTOU" << endl;
    else cout << distance << endl;

    return 0;
}