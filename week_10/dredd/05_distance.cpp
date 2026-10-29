// Faça um programa que leia 5 pontos do plano cartesiano, sendo que cada ponto terá sua coordenada X e sua coordenada Y. O programa também deverá ler uma rota. Essa rota é composta por 5 inteiros de 0 a 4, não podendo repetir os números. O programa deverá calcular a distância total dessa rota.
// Os pontos devem ser representados por registros em que as coordenadas são números reais.
// Lembre-se que a fórmula utilizada é: d = {(X2 - X 1)² + (Y2 - Y 1)²})
// Por exemplo, dados os seguintes pontos:
//     Ponto 0 : (0,5)
//     Ponto 1 : (4,3)
//     Ponto 2 : (2,1)
//     Ponto 3 : (1,0)
//     Ponto 4 : (2,2)
// Dada a Rota : 0 2 4 3 1
// O programa deverá calcular a distância entre o ponto 0 e 2, depois 2 e 4, depois 4 e 3, depois 3 e 1. A saída deverá ser a distância total entre os pontos.
// Exemplo de entrada:
// 0 5
// 4 3
// 2 1
// 1 0
// 2 2
// 0 2 4 3 1
// Exemplo de saída:
// 11.9508	
#include <iostream>
#include <cmath>

using namespace std;

struct coordenada {
    double X;
    double Y;
};

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
    const unsigned SIZE = 5;
    coordenada pontos[SIZE];
    double distancia = 0.0;
    unsigned anterior, proximo;


    for (unsigned i = 0; i < SIZE; i++) {
        cin >> pontos[i].X >> pontos[i].Y;
    }
    
    for (unsigned i = 0; i < SIZE; i++) {
        cin >> proximo;
        if (i > 0)  {
            distancia += calcularDistancia(
                pontos[anterior].X, 
                pontos[anterior].Y,
                pontos[proximo].X,
                pontos[proximo].Y
            );
        }
        anterior = proximo;
    }
    
    cout << distancia << endl;

    return 0;
}