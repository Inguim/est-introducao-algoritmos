// Elabore um programa que recebe o nome de um arquivo de texto e imprima quantas vogais esse arquivo possui. O nome do arquivo a ser aberto deverá ser digitado pelo usuário e o número de vogais escrito na saída padrão.
// Entradas:
//     entrada padrão
//         o nome do arquivo de onde serão lidos vários caracteres
//     arquivo texto
//         vários caracteres
// Saída:
//     O número de vogais desse arquivo.
// Exemplo de entrada:
// arquivo-a-ser-aberto.txt
// Exemplo de arquivo:
// O que queriamos preservar era nao so um bom ambiente para fazer programacao.
// Mas sim um sistema em torno do qual um companheirismo poderia se formar. 
// Exemplo de saída:
// 57
#include <iostream>
#include <fstream>

using namespace std;

int main() {    
    string filename, word;
    int quantity = 0;
    char letter;
    
    cin >> filename;

    ifstream inputFile(filename);
    if (inputFile) {
        while (inputFile >> word){
            size_t i = 0;
            while (i < word.size()){
               letter = word[i];
               if (letter == 'A' or letter == 'a') quantity++;
               else if (letter == 'E' or letter == 'e') quantity++;
               else if (letter == 'I' or letter == 'i') quantity++;
               else if (letter == 'O' or letter == 'o') quantity++;
               else if (letter == 'U' or letter == 'u') quantity++;
               i++;
            }
        }
        inputFile.close();
    }   
   
    cout << quantity << endl;
    
    return 0;
}