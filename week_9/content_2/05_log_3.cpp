// Faça um programa que calcula o logaritmo na base 3 de uma potência de 3. Para tanto, divisões sucessivas deverão ser utilizadas. O programa deve conter um subprograma recursivo que recebe um número natural e retorna um número natural para fazer o cálculo do logaritmo.
// O subprograma que faz o cálculo do logaritmo não pode conter nenhuma operação de leitura nem de escrita. Não é permitido o uso da biblioteca cmath.
// Entradas:
//     um número natural que é potência de 3.
// Saídas:
//     o logaritmo do número lido.
// Exemplo de Entrada:
// 243
// Exemplo de Saída:
// 5
// Lembrete: O logaritmo de 243 na base 3 é 5 porque 3 elevado a 5 é 243.
#include <iostream>

using namespace std;

int calc(int n) {
    if (n == 1) return 0;
    return 1 + calc(n / 3);
}

int main() {
    int N;
    cin >> N;

    cout << calc(N) << endl;

    return 0;
}