// Faça um programa que leia uma distância em quilômetros (km) e apresente-a convertida em milhas. A fórmula de conversão é: M = KM/1.6, sendo km a distância em quilômetros e M em milhas.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas:
//     Um número inteiro que representa a distância em quilômetros.
// Saídas:
//     Um número inteiro que representa a distância em milhas.
// Exemplo de Entrada:
// 176
// Exemplo de Saída:
// 110
#include <iostream>

using namespace std;

int main()
{
	int milhas, km;
    cin >> km;
    
    milhas = km / 1.6;
    cout << milhas;
  
    return 0;
}