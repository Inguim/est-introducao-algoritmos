// Um exército foi enviado para tentar conter o incrível Hulk, o ser mais forte de todo o planeta. Sabendo que um tanque de guerra pesa 60000 kg, um carro blindado 900 kg, um soldado pesa em média 85 kg e um rifle pesa 4 kg, faça um programa que leia do arquivo hulk.txt um número inteiro que indica a quantidade total de peso que o Hulk consegue levantar e que calcule quantos tanques, carros blindados, soldados e rifles (nesta ordem) o Hulk pode erguer simultaneamente em um único momento de fúria. As quantidades de cada item deve ser gravadas no arquivo furia.txt
// Entradas (arquivo hulk.txt):
//     Número inteiro que indica a quantidade total de peso em quilogramas que o Hulk pode levantar.
// Saídas (arquivo furia.txt):
//     Quantidade levantada de tanques de guerra (número inteiro).
//     Quantidade levantada de carros blindados (número inteiro).
//     Quantidade levantada de soldados (número inteiro).
//     Quantidade levantada de rifles (número inteiro).
// Exemplo de Entrada (conteúdo do arquivo hulk.txt):
// 100000
// Exemplo de Saída (conteúdo do arquivo furia.txt):
// 1
// 44
// 4
// 15
// Exemplo de Entrada (conteúdo do arquivo hulk.txt):
// 230000
// Exemplo de Saída (conteúdo do arquivo furia.txt):
// 3
// 55
// 5
// 18
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int peso;
	
	ifstream inputFile("hulk.txt");
	inputFile >> peso;
	inputFile.close();
		
	ofstream outputFile("furia.txt");
	
	outputFile << peso / 60000 << endl;
	peso = peso % 60000;
	outputFile << peso / 900 << endl;
	peso = peso % 900;
	outputFile << peso / 85 << endl;
	peso = peso % 85;
	outputFile << peso / 4 << endl;
	peso = peso % 4;

	outputFile.close();

	return 0;
}