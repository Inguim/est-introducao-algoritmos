// Seu amigo pedreiro tem dificuldade de planejar o corte pisos cerâmicos para colocação de rodapés. Sua tarefa é desenvolver um programa que calcule a melhor altura do rodapé e a quantidade de piso cerâmico que deve ser comprada em função das dimensões do piso e do comprimento do rodapé.
// A altura do corte deve ser calculada da seguinte forma: Cada piso deve ser cortado em tiras de altura igual, tão próxima de 7cm quanto possível, ao longo da dimensão menor do piso. Calcular a altura vai evitar a produção de sobras. Por exemplo, um piso de 32x57cm deverá ser cortado em 5 tiras de 6,4 x 57 cm.
// A quantidade de piso a ser comprado, usando esse mesmo piso para colocação de rodapés ao longo de 10 metros deverá ser de 3,3m² (18 peças de piso). Despreze o fato de que sempre há um espaço entre as peças na hora da colocação.
// Entradas:
//     Dois números reais representando as dimensões de uma peça de piso (em centímetros). Não se sabe qual dos dois é maior e qual é menor.
//     Um número real representando o comprimento total de paredes ao longo do qual se deseja colocar rodapé em metros.
// Saídas:
//     A altura (número real) em centímetros a ser usada no corte das peças.
//     A quantidade de piso (número real) em metros quadrados que deverá ser comprada.
// Exemplo de Entrada:
// 32
// 57
// 10
// Exemplo de Saída:
// 6.4
// 3.2832
// Exemplo de Entrada:
// 45.9
// 45.9
// 9
// Exemplo de Saída:
// 6.55714
// 4.21362
// OBS: OBTIVE APENAS 90% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 90% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 90% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    float lowestDimension, highestDimension;
    float wallWidth, sliceHeight = 0.0;
    float quantityTires, neededTires;

    cin >> a >> b >> wallWidth;

    if (a < b) {
        lowestDimension = a;
        highestDimension = b;
    } else {
        lowestDimension = b;
        highestDimension = a;
    }

    quantityTires = round(lowestDimension / 7.0);
    if (quantityTires < 1.0) {
        quantityTires = 1.0;
    }
    sliceHeight = lowestDimension / quantityTires;

    neededTires = ceil((wallWidth * 100) / highestDimension);

    cout << sliceHeight << endl;
    cout << neededTires * ((lowestDimension / 100.0) * (highestDimension / 100.0)) << endl;

    return 0;
}