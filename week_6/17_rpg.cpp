// Um jogador de RPG gostaria de saber se seu D6 (dado de seis lados) está viciado. Para tanto, ele jogou o dado 20 vezes e registrou os resultados obtidos em cada jogada. Faça um programa que receba os resultados das vinte jogadas e exiba no dispositivo de saída padrão a frequência com que cada um dos valores possíveis apareceu. A saída deve seguir o padrão face do dado: frequência.
// Entradas:
//     Sequência de 20 valores inteiros no intervalo [1,6].
// Saídas:
//     Relação da frequência de cada lado do dado.
// Exemplo de entrada:
// 4 4 5 5 6 2 3 4 3 2 1 2 5 6 5 4 3 2 4 2
// Exemplo de saída:
// 1: 0.05
// 2: 0.25
// 3: 0.15
// 4: 0.25
// 5: 0.2
// 6: 0.1
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    int launch[SIZE];
    int frequency = 0; 
    int i, j;

    for (i = 0; i < SIZE; i++) {
        cin >> launch[i];
    }

    for (i = 1; i <= 6; i++) {
        frequency = 0;
        for (j = 0; j < SIZE; j++) {
            if (launch[j] == i) frequency++;
        }
        cout << i << ": " << (float) frequency / SIZE  << endl;
    }
    
    return 0;
}