// Faça um programa que calcula a área de um retângulo.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas:
//     A largura do retângulo (um número real).
//     A altura do retângulo (um número real).
// Saída:
//     A área do retângulo (um número real).
// Exemplo de Entrada:
// 3.12
// 6.03
// Exemplo de Saída:
// 18.8136
// Exemplo de Entrada:
// 6.4
// 2.17
// Exemplo de Saída:
// 13.888
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float largura;
	float altura;
	
	cin >> largura;
	cin >> altura;
	
	cout << largura * altura;
  
    return 0;
}