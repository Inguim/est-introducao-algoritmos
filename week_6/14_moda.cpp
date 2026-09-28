// Em estatística, moda é o valor que ocorre com maior frequência num conjunto de dados, não sendo necessariamente única. Por exemplo a série {1, 3, 5, 5, 6, 6} apresenta 2 modas: 5 e 6.
// Faça um programa que leia um arquivo denominado "entrada.txt", contendo um vetor com 10 valores inteiros. O programa deverá escrever no arquivo "saida.txt" quantas e quais as modas do vetor.
// Dica: construa um vetor auxiliar para marcar quantos elementos daquela posição existem no vetor, marcando as repetições com -1. Utilize depois esse vetor para ver é o maior valor, bem como para imprimir as posições do vetor principal com o maior valor.
// Exemplos de Entrada e Saída em arquivo:
// Exemplo de entrada no arquivo "entrada.txt":
// 2 4 1 10 4 2 1 9 8 7
// Exemplo de saída no arquivo "saida.txt":
// 3
// 2 4 1
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int SIZE = 10;
    int a[SIZE], b[SIZE] = {0};
    int f[SIZE];
    int i = 0, j = 0;
    int total = 0, quantity = 0;
    int maxFreq = 0;
    bool isIn = false; 

    ifstream inputFile("entrada.txt");
    for (i = 0; i < SIZE; i++){
        inputFile >> a[i];
    }
    inputFile.close();

    for (i = 0; i < SIZE; i++){
        quantity = 0;
        for (j = 0; j < SIZE; j++){
            if (i != j and a[i] == a[j]) quantity++;
        }
        
        f[i] = quantity;
        if (quantity > maxFreq) maxFreq = quantity;
    }

    quantity = 0;
    for (i = 0; i < SIZE; i++){
        b[i] = -1;
    }
    for (i = 0; i < SIZE; i++){
        if (f[i] == maxFreq) {
            isIn = false;
            for (j = 0; j < SIZE; j++){
                if (a[i] == b[j]) isIn = true;
            }
            if (not isIn) b[total++] = a[i];
        };
    }

    ofstream outputFile("saida.txt");
    outputFile << total << endl;
    for (i = 0; i < total; i++){
        outputFile << b[i] << " ";
    }
    outputFile.close();

    return 0;
}