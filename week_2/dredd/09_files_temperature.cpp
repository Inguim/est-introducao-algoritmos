// Faça um programa que receba uma temperatura em Celsius e converta para kelvin (K) e Fahrenheit (F).
// O resultado deverá ser armazenado em um arquivo chamado temperatura.txt.
// Obs.: A fórmula de conversão de Celsius para Kelvin é dada por K = C + 273.
// Obs.2: A fórmula de conversão de Celsius para Fahrenheit é dada por F = 1.8C + 32.
// Para isso utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas:
//     Número real indicando a temperatura em Celsius.
// Saídas (conteúdo do arquivo temperatura.txt):
//     Temperatura convertida para Kelvin seguida pela letra K.
//     Temperatura convertida para Fahrenheit seguida pela letra F.
// Exemplo de Entrada:
// 20.5
// Exemplo de Saída (conteúdo do arquivo temperatura.txt):
// 293.5 K
// 68.9 F
#include <iostream>
#include <fstream>

using namespace std;

int main () {
	float c, f, k;
	
	cin >> c;

	k = c + 273;
	f = 1.8 * c + 32;

    ofstream arquivo("temperatura.txt");
	arquivo << k << " K\n" << f <<" F";
	arquivo.close();

	return 0;	
}
