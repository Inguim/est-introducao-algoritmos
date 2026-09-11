// Faça um programa que abra um arquivo, cujo nome é fornecido pelo usuário, que contenha apenas números inteiros positivos. O programa deverá contar a quantidade de números no arquivo que são o dobro do número anterior e guardar o resultado em um arquivo chamado “dobro.txt”.
// Exemplo de Entrada (entrada padrão):
// entrada.txt
// Exemplo de Entrada (arquivo entrada.txt):
// 10 4 3 6 12 8 16
// Exemplo de Saída (arquivo dobro.txt):
// 3
// Exemplo de Entrada (entrada padrão):
// valores.txt
// Exemplo de Entrada (arquivo valores.txt):
// 1 2 4 8 16 8 4 2 1 3 6 9
// Exemplo de Saída (arquivo dobro.txt):
// 5
#include <iostream>
#include <fstream>

using namespace std;

int main() {    
    int quantity = 0;
    int before = 0, after;
    string filename;

    cin >> filename;

    ifstream inputFile(filename);

    if (inputFile) {
        while (inputFile >> after) {
        if (after == before) quantity++;
            before = after * 2;
        }
        inputFile.close();

        ofstream outputFile("dobro.txt");
        outputFile << quantity << endl;
        outputFile.close();
    }
    
    return 0;
}