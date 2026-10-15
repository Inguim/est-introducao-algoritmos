// Faça um programa que procura um texto dentro de outro texto, sem utilizar qualquer função ou método auxiliar (ou seja: a busca deve ser manual).
// O programa deve informar a posição da primeira ocorrência do texto procurado. Caso o texto procurado não seja encontrado, a posição informada deverá ser -1 para indicar essa situação especial.
// O textos terão no máximo 254 caracteres. Todos os caracteres do texto serão não-brancos.
// Entradas:
//     O texto no qual será realizada a busca,
//     O texto que será buscado no anterior.
// Saída:
//     a posição em que o texto procurado começou a ser encontrado no outro texto, ou -1 se ele não for encontrado.
// Exemplo de entrada:
// aabcbcbbacbbaa
// cbb
// Exemplo de saída:
// 5
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence, word;
    int index = -1;
    bool founded = false;

    cin >> sentence >> word;

    for (unsigned i = 0; i < sentence.length(); i++) {
        founded = true;
        for (unsigned j = 0; j < word.length(); j++) {
            if (sentence[i + j] != word[j]) founded = false;
        }
        if (founded) {
            index = i;
            i = sentence.length();
        }
    }

    cout << index << endl;

    return 0;
}