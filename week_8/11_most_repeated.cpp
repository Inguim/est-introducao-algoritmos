// Faça um programa que dada uma string de entrada, informa qual o caractere que mais se repete.
// Entradas:
//     Uma string.
// Saídas:
//     Letra que mais se repete.
// Exemplo de Entrada:
// aabbbarra
// Exemplo de Saída:
// a
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    string letters;
    char most;
    int mostQuantity = 0;
    int quantity = 0;
    bool isIn = false;

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
            if (letters[i] == sentence[j]) quantity++;
        }
        if (quantity > mostQuantity) {
            mostQuantity = quantity;
            most = letters[i];
        }
    }
    
    cout << most << endl;

    return 0;
}