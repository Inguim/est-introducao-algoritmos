// Sabendo que para adentrar na torre Stark é necessário conhecer três senhas numéricas e que estas mudam todos os dias, o Homem de Ferro elaborou uma estratégia simples para descobri-las. Ao solicitar entrar na torre, J.A.R.V.I.S. (a inteligência artificial da casa) oferece ao solicitante duas chaves numéricas de seis dígitos cada uma. Para obter as três senhas da torre, basta separar de dois em dois dígitos cada uma das chaves e somar os pares de números que ocupam a mesma posição em ambas as chaves. A ordem dos somatórios, e de exibição das chaves, é definida a partir dos dígitos menos significativos para os mais significativos.
// Por exemplo, dado as chaves 125434 e 320478, podemos separar a primeira chave nos dígitos 12, 54 e 34; e a segunda chave nos dígitos 32, 4 e 78. Sendo assim, as três senhas para entrar na torre são: 112 (34+78), 58 (54+4) e 44 (12+32). Faça um programa que leia as duas chaves fornecidas pelo J.A.R.V.I.S. a partir de um arquivo chamado "jarvis" e grave as três senhas de acesso à torre Stark no arquivo "senhas".
// Entradas (conteúdo do arquivo jarvis):
//     Dois números inteiros representando as chaves fornecidas pelo J.A.R.V.I.S..
// Saídas (conteúdo do arquivo senhas):
//     Três números inteiros representado as senhas de acesso à torre Stark.
// Exemplo de Entrada (conteúdo do arquivo jarvis):
// 125434
// 320478
// Exemplo de Saída (conteúdo do arquivo senhas):
// 112 
// 58 
// 44
// Exemplo de Entrada (conteúdo do arquivo jarvis):
// 214354
// 124356
// Exemplo de Saída (conteúdo do arquivo senhas):
// 110
// 86 
// 33
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int num1, num2;
	int cod11, cod12, cod13;
	int cod21, cod22, cod23;
	
	ifstream inputFile("jarvis");
	inputFile >> num1 >> num2;
	inputFile.close();
	
	cod11 = num1 % 100;
	num1 = num1 / 100;
	
	cod12 = num1 % 100;
	cod13 = num1 / 100;
	
	cod21 = num2 % 100;
	num2 = num2 / 100;
	
	cod22 = num2 % 100;
	cod23 = num2 / 100;
	
		
	ofstream outputFile("senhas");
	outputFile << cod11 + cod21 << endl;
	outputFile << cod12 + cod22 << endl;
	outputFile << cod13 + cod23 << endl;
	outputFile.close();

	return 0;
}