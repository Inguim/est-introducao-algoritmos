// Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a quantidade total de palavras da lista de entrada que não apresentam nenhuma ocorrência da letra fornecida isoladamente.
// Entradas:
//     Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
//     Uma lista de N palavras (strings). Cada palavra será fornecida em uma lista diferente do dispositivo de entrada padrão.
//     Uma letra.
// Saídas:
//     Um número inteiro indicando a quantidade total de palavras da lista de entrada que não apresentam nenhuma ocorrência da letra fornecida isoladamente.
// Exemplo de Entrada:
// 3
// bola
// arara
// fogo
// a
// Exemplo de Saída:
// 1
// Exemplo de Entrada:
// 5
// agua
// fogo
// ar
// ouro
// madeira
// a
// Exemplo de Saída:
// 2
// Exemplo de Entrada:
// 2
// janeiro
// fevereiro
// e
// Exemplo de Saída:
// 0
#include <iostream>

using namespace std;

int main() {
    int n, i;
    int quantityWithoutLetter = 0;
    char letter;
    bool hasLetter = false;
    string word;

    cin >> n;

    string words[n];
    for (i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    cin >> letter;

    for (i = 0; i < n; i++) {
        hasLetter = false;
        word = words[i];
        for (size_t j = 0; j < word.length(); j++) {
            if (word[j] == letter) {
                j = word.length();
                hasLetter = true;
            }
        }
        if (not hasLetter) quantityWithoutLetter++;
    }

    cout << quantityWithoutLetter << endl;

    return 0;
}