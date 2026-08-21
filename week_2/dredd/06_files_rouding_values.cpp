// Faça um programa que leia um número real. Em seguida, calcule e grave em um arquivo chamado saida.txt os seguintes valores: a parte inteira do número, sua parte fracionária, o número real arredondado para baixo, arredondado para cima e arredondado utilizando round. Cada valor deverá ser gravado em uma linha do arquivo.
// Entradas:
//     Um número real não negativo.
// Saídas (conteúdo do arquivo saida.txt):
//     A parte inteira do número.
//     A parte fracionária do número.
//     Número real lido arredondado para baixo.
//     Número real lido arredondado para cima.
//     Número real lido arredondado com round.
// Exemplo de Entrada:
// 2.71828128
// Exemplo de Saída (conteudo do arquivo saida.txt:
// 2
// 0.71828128
// 2
// 3
// 3
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()  {
	float value;

	cin >> value;
	
    ofstream arquivo("saida.txt");

    arquivo << int(value) << endl; // inteira
	arquivo << value - int(value) << endl; // fracionaria
	arquivo << floor(value) << endl; // arredondamento baixo
	arquivo << ceil(value) << endl; // arredondamento cima
	arquivo << round(value) << endl; // arredondamento round

	arquivo.close();

	return 0;
}