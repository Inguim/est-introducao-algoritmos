// Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um programa que leia de um arquivo chamado entrada um valor de um produto e que escreva o novo valor na saída padrão, tendo em vista que o desconto foi de 9%.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entrada (conteúdo do arquivo entrada):
//     Um valor real que representa o valor inicial do produto
// Saídas (saída padrão):
//     Um valor real que representa o valor final do produto
// Exemplo de Entrada (conteúdo do arquivo):
// 100.0
// Exemplo de Saída:
// R$ 91.0
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
   float valorInicial, valorFinal;
   
   ifstream entrada("entrada");
   
   entrada >> valorInicial;
   
   valorFinal = valorInicial - (valorInicial * 0.09);
   
   cout << fixed << setprecision(1);
   cout << "R$ " << valorFinal;
   
   return 0;
}