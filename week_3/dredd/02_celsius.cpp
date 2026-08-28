// Sua tia trouxe de presente dos Estados Unidos um termômetro que mede temperaturas em Fahrenheit. Ele mostra a temperatura atual e a mínima nas últimas 24 horas. Faça um programa que converte esses dois valores para Celsius.
// Seu programa deve ler as duas temperaturas da entrada padrão e escrever os dois valores convertidos num arquivo de nome temperaturas.txt.
// A fórmula para conversão de Fahrenheit (F) para Celsius (C) é .
// C = (F-32)x5/9
// Entradas (entrada padrão):
//     Dois valores reais representando duas temperaturas em Fahrenheit.
// Saídas (arquivo temperaturas.txt):
//     Os dois valores convertidos para Celsius, na mesma ordem que estavam na entrada.
// Exemplo de Entrada:
// 83.5
// 63
// Exemplo de Saída (arquivo temperaturas.txt):
// 28.6
// 17.2
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	double temp1, temp2;
	
	cin >> temp1 >> temp2;
	
	ofstream outputFile("temperaturas.txt");
	temp1 = (temp1 - 32) * 5/9;
	temp2 = (temp2 - 32) * 5/9;
	outputFile << temp1 << endl << temp2;
	outputFile.close();

	return 0;
}