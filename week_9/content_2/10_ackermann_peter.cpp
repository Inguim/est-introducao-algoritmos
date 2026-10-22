// A função de Ackermann-Péter é uma função importante em Teoria da Computação, que é definida assim:
// A(m, n) 
// -> n+1, se m = 0
// -> A(m-1, 1), se m > 0 e n 0
// -> A(m-1, A(m, n-1)), se m > 0 e n > 0;
// Onde m e n são números inteiros não negativos. Cuidado, esta função requer quantidades enormes de processamento conforme seus parâmetros aumentam. Evite usar parâmetros cuja soma é maior que 7.
// Faça um programa que tem uma função para calcular esta função. A função principal deve realizar as operações de leitura e escrita.
// Entradas:
//     Dois valores inteiros não negativos que determinam respectivamente m e n na definição acima, numa mesma linha.
// Saídas:
//     O valor da função para os parâmetros lidos.
// Exemplo de Entrada:
// 2 4
// Exemplo de Saída:
// 11
// Aviso: Não utilize valores grandes para testar a aplicação desenvolvida, o programa pode demorar muito para efetuar os cálculos!.
#include <iostream>

using namespace std;

int calc(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 and n == 0) return calc(m - 1, 1);
    return calc(m - 1, calc(m, n - 1));
}

int main() {
    int a, b;

    cin >> a >> b;

    cout << calc(a, b) << endl;

    return 0;
}