// Faça um programa que dada um string de entrada, informa qual o primeiro caractere que não se repete.
// Obs: Considere que sempre existirá pelo menos uma letra que não se repete.
// Entradas:
//     Uma string.
// Saídas:
//     Primeira letra que não se repete na string.
// Exemplo de Entrada:
// aabcade
// Exemplo de Saída:
// b
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    string letters;
    int quantity = 0;
    bool isIn = false;
    char letter;

    cin >> sentence;

    for (size_t i = 0; i < sentence.length(); i++) {
        isIn = false;
        for (size_t j = 0; j < letters.length(); j++) {
            if (sentence[i] == letters[j]) {
                isIn = true;
                j = sentence.length();
            }
        }
        if (not isIn) letters += sentence[i];
    }

    for (size_t i = 0; i < letters.length(); i++) {
        quantity = 0;
        for (size_t j = 0; j < sentence.length(); j++) {
            if (sentence[j] == letters[i]) quantity++;
        }
        if (quantity <= 1) {
            letter = letters[i];
            i = letters.length();
        }
    }
    
    cout << letter << endl;

    return 0;
}