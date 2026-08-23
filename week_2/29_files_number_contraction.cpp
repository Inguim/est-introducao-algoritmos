// Faça um programa que receba como um entrada um número inteiro N de 6 algarismos, tal que 100000 <= N <= 999999, e a partir dele calcule um novo número inteiro M de 5 algarismos. O dado será lido do arquivo entrada.txt e o resultado será gravado no arquivo saida.txt.
// O valor de M será calculado a partir da divisão inteira dos algarismos de N. O 1º algarismo de M será o resultado da divisão inteira do 1º algarismo de N pelo 2º algarismo de N; o 2º algarismo de M será o resultado da divisão inteira do 2º algarismo de N pelo 3º algarismo de N, e assim sucessivamente. Atente-se ao fato de que, ao final, M será um único número inteiro de cinco algarismos.
// Obs: considere que o número N não tem nenhum algarismo igual a zero e que o número M gerado terá sempre 5 algarismos (ou seja, nunca começará com zero).
// Entradas (arquivo entrada.txt):
//     Um número inteiro N de seis algarismos.
// Saídas (arquivo entrada.txt):
//     Um número inteiro M de cinco algarismos calculado conforme o enunciado.
// Exemplo de Entrada (arquivo entrada.txt):
// 918273
// Exemplo de Saída (arquivo saida.txt):
// 90402
// Exemplo de Entrada (arquivo entrada.txt):
// 854221
// Exemplo de Saída (arquivo saida.txt):
// 11211
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int value;
    int potency = 5;
    int numbers[6] = {0};
    int results[5] = {0};

    ifstream inputFile("entrada.txt");
    inputFile >> value;
    inputFile.close();

    for (int i = 0; i < 6; i++) {
        numbers[i] = value / pow(10, potency);
        value = value - (numbers[i] * pow(10, potency));
        potency--;
    }

    for (int i = 0; i < 5; i++) {
        results[i] = numbers[i] / numbers[i+1];
    }

    ofstream outputFile("saida.txt");

    for (int i = 0; i < 5; i++) {
        outputFile << results[i];
    }
    outputFile.close();

    return 0;
}

// Segunda solução sem usar POW e base 10
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main () {
//     int value;
//     int numbers[6] = {0};
//     int results[5] = {0};

//     ifstream inputFile("entrada.txt");
//     inputFile >> value;
//     inputFile.close();

//     // Extrai os dígitos do fim para o início usando apenas inteiros
//     for (int i = 5; i >= 0; i--) {
//         numbers[i] = value % 10;
//         value /= 10;
//     }

//     // Realiza as divisões inteiras dos pares de dígitos
//     for (int i = 0; i < 5; i++) {
//         results[i] = numbers[i] / numbers[i+1];
//     }

//     ofstream outputFile("saida.txt");

//     for (int i = 0; i < 5; i++) {
//         outputFile << results[i];
//     }
//     outputFile.close();

//     return 0;
// }