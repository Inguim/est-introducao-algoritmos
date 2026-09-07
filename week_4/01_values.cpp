// Faça um programa que leia uma sequência números positivos ou nulos em um arquivo chamado entrada.txt. Após isso, imprima: o menor valor, segundo menor valor, o maior valor e o segundo maior valor. Assuma que a sequência tem pelo menos dois números e que não há elementos repetidos.
// Entradas (arquivo entrada.txt):
//     int n - Números que o usuário irá digitar.
// Saídas:
//     Menor valor digitado (int).
//     Segundo menor valor digitado (int).
//     Maior valor digitado (int).
//     Segundo maior valor digitado (int).
// Exemplos de Entradas e Saídas:
// Entradas (arquivo entrada.txt):
// 3
// 2
// 1
// 4
// 5
// 6
// 7
// Saídas:
// 1
// 2
// 7
// 6
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, n1, n2;
    int lowestValue = 0, secondLowestValue = 0;
    int highestValue = 0, secondHighestValue = 0;

    ifstream inputFile("entrada.txt");
    
    if(inputFile) {
        inputFile >> n1 >> n2;

        if (n1 > n2) {
            highestValue = n1;
            secondHighestValue = n2;
            lowestValue = n2;
            secondLowestValue = n1;
        } else {
            highestValue = n2;
            secondHighestValue = n1;
            lowestValue = n1;
            secondLowestValue = n2;
        }

        while (inputFile >> n) {            
            if (n >= secondHighestValue) {
                if (n > highestValue) {
                    secondHighestValue = highestValue;
                    highestValue = n;
                } else {
                    secondHighestValue = n;
                }
            } 
            
            if (n <= secondLowestValue) {
                if (n < lowestValue) {
                    secondLowestValue = lowestValue;
                    lowestValue = n;
                } else {
                    secondLowestValue = n;
                }
            }
        }
        inputFile.close();
    }

    cout << lowestValue << endl;
    cout << secondLowestValue << endl;
    cout << highestValue << endl;
    cout << secondHighestValue << endl;

    return 0;
}