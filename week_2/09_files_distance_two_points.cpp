// Faça um programa que receba de um arquivo (entrada.txt) dois pontos e calcule a distância entre eles no plano cartesiano. A distância deverá ser exibida na saída padrão.
// Sabe-se que dados dois pontos A = (x1,y1) e B = (x2,y2), a distância entre eles é a raiz quadrada da soma das diferenças das coordenadas ao quadrado.
// Cada ponto será representado por dois valores numéricos, representado as coordenadas x e y do ponto, respectivamente. O exemplo a seguir leva ao cálculo da distância entre (-2.1, 4.6) e (3.3, -1.6).
// Entrada (conteúdo do arquivo entrada.txt):
//     Número real da coordenada x do primeiro ponto.
//     Número real da coordenada y do primeiro ponto.
//     Número real da coordenada x do segundo ponto.
//     Número real da coordenada y do segundo ponto.
// Saída
//     Número real representando a distância entre os pontos.
// Exemplo de Entrada (arquivo entrada.txt):
// -2.1
// 4.6
// 3.3
// -1.6
// Exemplo de Saída (saída padrão):
// 8.22192
// Exemplo de Entrada (arquivo entrada.txt):
// 6
// 2.1
// -9.4
// -1.3
// Exemplo de Saída (saída padrão):
// 15.77086
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float coordenadas[4];

    ifstream arquivo("entrada.txt");

    if (arquivo) {
        arquivo >> coordenadas[0] >> coordenadas[1] >> coordenadas[2] >> coordenadas[3];
        
        cout << fixed << setprecision(5);
        cout << sqrt(pow(coordenadas[2] - coordenadas[0], 2) + pow(coordenadas[3] - coordenadas[1], 2)) << endl;
    }
    return 0;
}