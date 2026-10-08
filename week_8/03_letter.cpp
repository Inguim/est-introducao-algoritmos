// Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que contém a maior quantidade de ocorrências da letra fornecida isoladamente na entrada de dados.
// Caso ocorra embates entre múltiplas palavras com a maior quantidade de ocorrências da letra indicada, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade máxima de ocorrências daquela letra.
// Entradas:
//     Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
//     Uma lista de N palavras (strings). Cada palavra será fornecida em uma lista diferente do dispositivo de entrada padrão.
//     Uma letra.
// Saídas:
//     A palavra presente na lista de entrada que possui a maior quantidade de ocorrências da letra indicada isoladamente na entrada.
// Exemplo de Entrada:
// 3
// bola
// arara
// fogo
// a
// Exemplo de Saída:
// arara
// Exemplo de Entrada:
// 5
// agua
// fogo
// ar
// terra
// madeira
// a
// Exemplo de Saída:
// madeira
// Exemplo de Entrada:
// 2
// janeiro
// fevereiro
// e
// Exemplo de Saída:
// fevereiro
#include <iostream>

using namespace std;

int main() {
    int n, i;
    int numberOfLetter, greater;
    char letter;
    string mostWord, word;

    cin >> n;

    string words[n];
    for (i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    cin >> letter;

    for (i = 0; i < n; i++) {
        numberOfLetter = 0;
        word = words[i];
        for (size_t j = 0; j < word.length(); j++) {
            if (word[j] == letter) numberOfLetter++;
        }

        if (i == 0) greater = numberOfLetter;

        if (numberOfLetter >= greater) {
            greater = numberOfLetter;
            mostWord = word;
        }
    }

    cout << mostWord << endl;

    return 0;
}