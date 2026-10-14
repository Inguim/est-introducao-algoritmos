// Faça um programa que insere uma sequência de caracteres dentro de outra.
// Entradas:
//     o texto onde será inserido uma sequencia de caracteres (não haverão espaços ou outros caracteres brancos),
//     a posição onde será feita a inserção (inserir na posição p significa que, depois da inserção, o texto inserido será encontrado a partir da posição p; a posição do primeiro caractere é zero),
//     o texto a ser inserido (sem brancos).
// Saída: o resultado da inserção.
// O programa não precisa ser capaz de lidar com textos que, após a inserção, tenham mais de 200 caracteres.
// É permitido usar funções de biblioteca para determinar o tamanho das strings lidas.
// Exemplo de entrada:
// cores
// 2
// mputado
// Exemplo de saída:
// computadores
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 95% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>
#include <string>

using namespace std;

int main() {
    char final[201];
    string insert, into;
    int where;
    int k = 0;

    cin >> into >> where >> insert;

    if (where > into.length()) {
        where = into.length();
    }

    for (size_t i = 0; i < where; i++) {
        final[k] = into[i];
        k++;
    }

    for (size_t i = 0; i < insert.length(); i++) {
        final[k] = insert[i];
        k++;
    }

    for (size_t i = where; i < into.length(); i++) {
        final[k] = into[i];
        k++;
    }

    for (int i = 0; i < k; i++) {
        cout << final[i];
    }

    cout << endl;

    return 0;
}