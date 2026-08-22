// O cálculo de resto de uma divisão inteira tem uma grande importância na criptografia moderna. Vários dos métodos são baseados em propriedades envolvendo restos de divisão por números primos, inclusive.
// Nesta atividade, seu objetivo é implementar um método bastante simples para codificar um valor. Você irá receber um valor, a partir da entrada padrão e, na sequência, ler três números primos em um arquivo de entrada denominado chaves.txt. Na sequência, você irá calcular o resto da divisão do valor inicial por cada um dos valores primos, escrevendo o resultado no arquivo codigo.txt.
// Entrada padrão:
//     Um valor inteiro positivo qualquer.
// Entrada pelo arquivo chaves.txt:
//     Três números primos.
// Saídas (arquivo codigo.txt):
//     Resto da divisão do valor fornecido na entrada padrão por cada um dos números primos informados.
// Exemplo de Entrada:
// 920
// Exemplo de Arquivo chaves.txt:
// 3
// 5
// 7
// Exemplo de Saída (arquivo codigo.txt):
// 2
// 0
// 3
// Exemplo de Entrada:
// 11234
// Exemplo de Arquivo chaves.txt:
// 7
// 11
// 13
// Exemplo de Saída (arquivo codigo.txt):
// 6
// 3
// 2
#include <iostream>
#include <fstream>

using namespace std;

int main () {
   int valor, primo;
   
   cin >> valor;
   
   ifstream entrada("chaves.txt");
      
   if(entrada) {
	   ofstream saida("codigo.txt");
	   
	   while (entrada >> primo) {
		   saida << valor % primo << endl;
	   }
	   
	   entrada.close();
	   saida.close();
   }
   
   return 0;
}