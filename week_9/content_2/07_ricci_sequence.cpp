// A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.
// Sabendo-se que a sequência de Fibonacci é definida por:
//     F(0) = 0
//     F(1) = 1
//     F(n) = F(n - 1) + F(n - 2) , n > 2
// Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da referida série.
// Entrada:
//     Os valores iniciais da série de Ricci ( F(0) e F(1) );
//     Os número de termos dessa sequência a serem impressos.
// Saída:
//     Os n termos dessa sequência.
// Exemplo de entrada:
// 5 8
// 6
// Exemplo de saída:
// 5 8 13 21 34 55
#include <iostream>

using namespace std;

int calcRicci(int n, int f0, int f1) {
    if (n == 0) return f0;
    if (n == 1) return f1;
    return calcRicci(n - 1, f0, f1) + calcRicci(n - 2, f0, f1);
}

int main() {
    int f0, f1, N;
    
    cin >> f0 >> f1 >> N;

    for (int i = 0; i < N; i++){
        cout << calcRicci(i, f0, f1) << " ";
        if (i == N - 1) cout << endl;
    }
    
    return 0;
}