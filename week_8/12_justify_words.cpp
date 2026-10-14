// Construa um programa capaz de justificar um conjunto de palavras.
// O usuário deverá inicialmente definir o número de palavras a serem justificadas. Em seguida o programa deverá ler a quantidade de palavras definida e no fim do processo apresentar as palavras na mesma ordem de leitura alinhadas a direita. Para o alinhamento deverá ser utilizado o caractere * (asterisco). Assuma que as palavras não contêm espaços.
// Obs.: Para programas em C, recomenda-se não utilizar o comando getline.
// Para programas em Python, os vetores são implementados como listas cujos elementos são todos homogêneos.
// Entrada:
//     Número de palavras,
//     Palavras.
// Saí­da:
//     Palavras digitadas alinhadas a direita utilizando-se como referência a maior palavra. A ordem das palavras deverá ser a mesma da entrada.
// Exemplo de entrada:
// 4
// PROVA
// ALGORITMOS
// UFLA
// DCC
// Exemplo de saída:
// *****PROVA
// ALGORITMOS
// ******UFLA
// *******DCC
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int longest = 0;
    size_t i, j;
    
    cin >> N;

    string words[N];
    string word;

    for (i = 0; i < N; i++) {
        cin >> words[i];
        if (words[i].length() > longest) longest = words[i].length();
    }

    for (i = 0; i < N; i++) {
        word = words[i];
        for (j = 0; j < longest - word.length(); j++) {
            cout << "*";
        }

        for (j = 0; j < word.length(); j++) {
            cout << word[j];
        }
        cout << endl;
    }

    return 0;
}