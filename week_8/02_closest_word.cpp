// Desenvolva um programa que leia do dispositivo de entrada padrão uma palavra P de cinco letras, um número inteiro N e uma lista contendo N palavras de cinco letras. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que tem o maior número de letras iguais às da palavra P na mesma posição. Obs.: considere que todas as palavras terão letras maiúsculas e que não possuem acentos.
// Caso ocorram empates entre múltiplas palavras de acordo com o critério citado, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade letras em comum na mesma posição.
// Entradas:
//     Uma palavra P de cinco letras.
//     Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
//     Uma lista de N palavras (strings) de cinco letras. Cada palavra será fornecida em uma linha diferente do dispositivo de entrada padrão.
// Saídas:
//     A palavra presente na lista de entrada que possui o maior número de letras iguais às da palavra P na mesma posição.
// Exemplo de Entrada:
// TERRA
// 3
// PANDA
// VELHA
// FOGOS
// Exemplo de Saída:
// VELHA
// Exemplo de Entrada:
// PORTA
// 5
// CORTA
// TROPA
// MORTA
// PERTO
// PRATO
// Exemplo de Saída:
// MORTA
// Exemplo de Entrada:
// SALVO
// 2
// SALVO
// VALSA
// Exemplo de Saída:
// SALVO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 6;
    char key[SIZE], word[SIZE], closest[SIZE];
    int words, numberOfLetters, greater;
    int i, j, k;

    cin >> key >> words;

    for (i = 0; i < words; i++) {
        numberOfLetters = 0;
        cin >> word;
        for (j = 0; j < SIZE; j++) {
            if (key[j] == word[j]) numberOfLetters++;
        }
        if (i == 0) {
            greater = numberOfLetters;
        }
        if (numberOfLetters >= greater) {
            greater = numberOfLetters;
            for (k = 0; k < SIZE; k++) {
                closest[k] = word[k];
            }
            
        }
    }

    for (k = 0; k < SIZE; k++) {
        cout << closest[k];
        if (k == SIZE - 1) cout << endl;
    }

    return 0;
}