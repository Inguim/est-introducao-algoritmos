// Cada degrau de uma escada tem uma certa altura. Faça um programa que receba essa altura em centímetros e a altura que o usuário deseja subir na escada em metros, em um arquivo denominado entrada.txt. Calcule e escreva no arquivo degraus.txt quantos degraus o usuário deverá subir para, no mínimo, atingir seu objetivo, sem se preocupar com a altura do usuário.
// Sugestão: use uma biblioteca matemática para arredondamento.
// Entradas (arquivo entrada.txt):
//     Altura dos degraus em centímetros (número real).
//     Altura que se deseja alcançar em metros (número real).
// Saídas (arquivo degraus.txt):
//     Número inteiro de degraus necessários para atingir o objetivo.
// Exemplo de Entrada (arquivo entrada.txt):
// 40
// 2
// Exemplo de Saída (arquivo degraus.txt):
// 5
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	float altura, pretensao;
	
	ifstream entrada("entrada.txt");
	
	entrada >> altura >> pretensao;
	entrada.close();
		
	ofstream saida("degraus.txt");
		
	saida << int(ceil(pretensao * 100 / altura));
	saida.close();
	
    return 0;
}