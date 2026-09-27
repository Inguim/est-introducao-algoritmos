// Você é um engenheiro mecânico responsável por calcular a pressão exercida por um macaco hidráulico para levantar um carro durante atividades de manutenção. O macaco hidráulico consiste em um dispositivo capaz de aplicar uma força elevada, utilizando o princípio da transmissão hidráulica de pressão. Para garantir a segurança do procedimento, é essencial calcular com precisão a pressão necessária no pistão menor do macaco para suportar a massa do carro conhecida.
// Faça um programa que leia, a partir de um arquivo denominado "mac.txt" a massa do carro em quilogramas (kg), o diâmetro do pistão maior em metros e o diâmetro do pistão menor em metros, separados por espaço. Implemente uma função para determinar a pressão no pistão menor do macaco hidráulico, arredondando o resultado para três casas decimais. A saída deverá exibir a pressão calculada em Pascal (Pa).
// O cálculo da pressão hidráulica (P) no pistão menor é realizado utilizando a fórmula: P = F / A, onde F é a força aplicada ao pistão menor e A é a área da seção transversal do pistão menor. A força aplicada ao pistão menor é determinada através da relação entre as áreas dos pistões maior e menor do macaco hidráulico.
// Considere que a pressão hidráulica é transmitida de forma igual em todos os pontos de um líquido em equilíbrio. Portanto, a pressão exercida pelo pistão maior é a mesma no pistão menor, pois ambos estão no mesmo fluido. Portanto, a relação entre as áreas dos pistões é dada por: A_pistao_maior / A_pistao_menor = F_pistao_menor / F_pistao_maior.
// Utilize a gravidade como 9.81 (m/s2). A área (A) de um círculo é calculada pela fórmula: A = π * raio2, onde π (pi) é uma constante disponível na biblioteca cmath, usando a constante M_PI .
// Entradas:
//     Um valor real que representa a massa do carro em quilogramas (kg).
//     Dois valores reais separados por espaço, que representam o diâmetro do pistão maior em metros e o diâmetro do pistão menor em metros.
// Saídas:
//     Valor real, com três casas decimais (arredondado, se necessário), indicando a pressão no pistão menor em Pascal (Pa). A saída deve seguir o padrão de mensagem dos exemplos abaixo.
// Exemplo de Entrada:
// 1500.0
// 0.04 0.02
// Exemplo de Saída:
// Pressão no pistão menor: 3678.75 Pa
// Exemplo de Entrada:
// 1000.0
// 0.4 0.1
// Exemplo de Saída:
// Pressão no pistão menor: 613.125 Pa
// Exemplo de Entrada:
// 2055.0
// 0.6 0.3
// Exemplo de Saída:
// Pressão no pistão menor: 5039.887 Pa
// OBS: OBTIVE APENAS 96.8% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 96.8% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 96.8% DE ACERTO NESSA RESOLUÇÃO
// ABENÇOADA SEJA A FACILIDADE DE ENCONTRAR CONHECIMENTOS HOJE EM DIA
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

void calcPressureLower(double w, double dH, double dL) {
    double GRAVITY = 9.81;
    double radiusH, radiusL;
    double areaH, areaL;
    double forceH, forceL;
    
    radiusH = dH / 2.0;
    radiusL = dL / 2.0;

    areaH = M_PI * pow(radiusH, 2);
    areaL = M_PI * pow(radiusL, 2);
    
    forceH = w * GRAVITY;
    forceL = forceH * (areaL / areaH);
    
    cout << fixed << setprecision(3);
    cout << "Pressão no pistão menor: " << forceL << " Pa" << endl;
}

int main() {
    double weight;
    double diameterHigher, diameterLower;

    ifstream inputFile("mac.txt");
    inputFile >> weight >> diameterHigher >> diameterLower;
    inputFile.close();

    calcPressureLower(weight, diameterHigher, diameterLower);

    return 0;
}