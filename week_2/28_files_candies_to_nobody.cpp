// O dia dos namorados está chegando e você quer presentear a sua linda e querida namorada com o que ela mais gosta: doces! E, para variar, ela gosta dos presentes mais caros e menos dos mais baratos.
// Tabela de preços dos doces:
//     Caixa de chocolate - R$ 13,50
//     Trufa de chocolate - R$ 2,50
//     Pacotinho de Jujuba - R$ 1,50
//     Drops de hortelã - R$ 1,00
//     Bala de morango - R$ 0,25
// Desenvolva um programa para, a partir de uma certa quantia de dinheiro, calcule quantas caixas de chocolate, quantas trufas, quantos pacotinhos de jujuba, quantos drops e quantas balas de morango ela irá ganhar no dia dos namorados. O resultado deve ser armazenado no arquivo doces.txt.
// Entradas:
//     A entrada consiste em um linha contendo um número real (ponto flutuante) que representa a quantidade de dinheiro que o namorado tem para comprar os doces.
// Saídas (arquivo doces.txt:
//     Seu programa deve imprimir no arquivo, um em cada linha: o valor do dinheiro gasto pelo namorado, o número de caixas de chocolate, de trufas, de pacotinhos de jujuba, de drops e de balas de morango. O valor do dinheiro gasto pelo namorado deve ser formatado utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().
// Exemplo de Entrada:
// 36.25
// Exemplo de Saída (arquivo doces.txt):
// 36.25
// 2
// 3
// 1
// 0
// 1
// Exemplo de Entrada:
// 50.00
// Exemplo de Saída (arquivo doces.txt):
// 50.00
// 3
// 3
// 1
// 0
// 2
// Exemplo de Entrada:
// 15.60
// Exemplo de Saída (arquivo doces.txt):
// 15.50
// 1
// 0
// 1
// 0
// 2
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    float money, cost;
    int quantities[5] = {0};
    const float CANDY_PRICE[5] = {13.5, 2.5, 1.5, 1.0, 0.25};

    cin >> money;

    ofstream outputFile("doces.txt");

    for (int i = 0; i < 5; i++) {
        if (money >= CANDY_PRICE[i]) {
            quantities[i] = floor(money / CANDY_PRICE[i]);
            cost += quantities[i] * CANDY_PRICE[i];
            money -= quantities[i] * CANDY_PRICE[i];
        }
    }
    
    outputFile << fixed << setprecision(2);
    outputFile << cost << endl;
    for (int i = 0; i < 5; i++) {
        outputFile << quantities[i] << endl;
    } 
    outputFile.close();

    return 0;
}