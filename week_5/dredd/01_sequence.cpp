// Acredita-se que a partir de qualquer numero positivo e possivel criar uma sequencia de numeros que termina em 1 da seguinte:
// Se o numero for par, o proximo numero da sequencia sera sua metade. Se for impar, o proximo sera tres vezes o numero mais um.
// Faça um programa que leia um numero positivo, escreva essa sequencia de numeros ate o valor 1 e a quantidade de numeros da calcSequencia
// (passada por referencia para o programa principal). Os valores da sequencia devem ser escritos num subprograma. A quantidade de
// numeros gerados deve ser escrita no programa principal. O planejamento do subprograma e seus parametros e parte importante da
// avaliacao do problema.
// Entradas:
// 1. Um numero inteiro positivo
// Saidas:
// 1. Uma sequencia de numeros conforme as regras acima
// 2. A quantidade de numeros da sequencia
// Exemplo de Entrada:
// 13
// Exemplo de Saida:
// 13 40 20 10 5 16 8 4 2 1
// 10
#include <iostream>

using namespace std;

void calcSequencia(int valor, int& quantidade) {
    while (valor > 1) {
        cout << valor << " ";
        if (valor % 2 == 0) valor /= 2;
        else valor = valor * 3 + 1;
        quantidade++;
    }

    cout << valor << endl;
}

int main() {
    int numero, quantidade = 1;

    cin >> numero;

    calcSequencia(numero, quantidade);

    cout << quantidade << endl;

    return 0;
}