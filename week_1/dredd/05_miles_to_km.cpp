// Faça um programa que leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1. 61 ∗ M, sendo K a distância em quilômetros e M em milhas.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas:
//     Um número inteiro que representa a distância em milhas.
// Saídas:
//     Um número inteiro que representa a distância em quilômetros.
// Exemplo de Entrada:
// 10
// Exemplo de Saída:
// 16
#include <iostream>

using namespace std;

int main()
{
	int milhas; 
	int km;
	
    cin >> milhas;
    
    km = milhas * 1.61;
    cout << km << endl;
  
    return 0;
}