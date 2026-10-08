// Fazer um programa que receba duas palavras. O algoritmo deverá informar quantas vezes a segunda palavra aparece na primeira palavra. A busca deverá ser realizada manualmente, ou seja, sem auxílio de funções de biblioteca.
// Entradas:
//     String principal.
//     String que será procurada na String Principal.
// Saídas:
//     Quantidade de vezes que a String de procura foi encontrada na String principal
// Exemplo de Entrada:
// testetestetesteteste
// teste
// Exemplo de Saída:
// 4
// Exemplo de Entrada:
// testeialgstringentradaialg
// ialg
// Exemplo de Saída:
// 2
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string phrase, word;
    int sizePhrase, sizeWord;
    int occurrences = 0;
    bool finded = false;

    cin >> phrase >> word;

    sizePhrase = phrase.length();
    sizeWord = word.length();

    if (sizeWord <= sizePhrase) {
        for (size_t lastIndex = 0; lastIndex <= abs(sizePhrase - sizeWord); lastIndex++) {
            finded = true;
            for (size_t j = 0; j < sizeWord; j++){
                if (word[j] != phrase[lastIndex + j]) {
                    finded = false;
                    j = sizeWord;
                }
            }
            if (finded) occurrences++;
        }
    }

    cout << occurrences << endl;

    return 0;
}