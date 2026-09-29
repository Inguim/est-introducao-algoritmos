// Os elementos de uma matriz quadrada de tamanho 4 representam os custos de transporte de uma cidade entre cidades identificados por índices entre 0 e 3. Na matriz, a linha representa a cidade de partida e a coluna representa a cidade de chegada. Dado um itinerário com diversas cidades, escreva um programa que calcule e exiba o custo total de transporte do itinerário.
// Entradas:
//     Sequência de valores (números reais) representando os custos de transporte entre as cidades. Esta sequência de valores se destina ao preenchimento de uma matriz 4x4. Obs: os valores de uma mesma linha estão separados entre si por um único espaço.
//     Um valor inteiro que representa a quantidade de cidades a serem consideradas em um itinerário.
//     Sequência de valores (números inteiros), separados por um único espaço, que representa o itinerário percorrido com os identificadores das cidades (valores compreendidos no intervalo [0,3]) .
// Saídas:
//     O custo total do percurso.
// Exemplo de entrada:
// 4.5 1.0 2.0 33.3
// 5.0 2.2 1.5 40.0
// 2.1 3.1 2.3 18.2
// 72.3 11.0 22.4 50.1
// 8
// 0 3 1 3 3 2 1 0 
// Exemplo de saída:
// 164.9
#include <iostream>

using namespace std;

int main() {
    const int LINE = 4, COL = 4;
    double m[LINE][COL];
    int i, j, travel;
    int cities;
    int start, end;
    double cost = 0.0;
    
    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COL; j++) {
            cin >> m[i][j];
        }
    }
    
    cin >> cities;
    
    int routine[cities];

    for (i = 0; i < cities; i++) {
        cin >> routine[i];
    }


    for (travel = 1; travel < cities; travel++) {
        start = routine[travel-1];
        end = routine[travel];
        cost += m[start][end];
    }

    cout << cost << endl;

    return 0;
}