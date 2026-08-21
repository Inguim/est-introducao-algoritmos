// Uma empresa contrata um encanador a R$ 60,00 por dia. Crie um programa que leia de um arquivo chamado entrada o número de dias trabalhados pelo encanador e grave em um arquivo chamado saida a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entrada (conteúdo do arquivo entrada):
//     Um valor inteiro que representa total de dias trabalhados.
// Saída (conteúdo do arquivo saida):
//     O texto "R$" seguido de um valor real que representa o valor líquido a ser recebido.
// Exemplo de Entrada (conteúdo do arquivo entrada):
// 30
// Exemplo de Saída (conteúdo do arquivo saida):
// R$ 1656

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int dias;
	float valorLiquido;
	
	ifstream entrada("entrada");
	
	entrada >> dias;
	entrada.close();
	
	valorLiquido = (dias*60) - (dias*60*0.08);
		
	ofstream saida("saida");
		
	saida << "R$ " << valorLiquido;
	saida.close();
	
    return 0;
}