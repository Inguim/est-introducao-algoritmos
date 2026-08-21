// Faça um programa que lê um texto de um arquivo e escreve esse texto na saída padrão. Suponha que o texto é uma única palavra ou melhor, que esse texto não possui espaços.
// O nome do arquivo do onde será lido o texto deverá ser lido da entrada padrão. Suponha que este nome também não possui espaços.
// Entrada (entrada padrão):
//     Nome do arquivo texto (não terá espaços).
// Entrada (conteúdo do arquivo texto):
//     uma palavra
// Saída (saída padrão):
//     O conteúdo do arquivo (uma palavra).
// Exemplo de entrada (entrada padrão):
// meu-arquivo.txt
// Exemplo de entrada (conteúdo do arquivo "meu-arquivo.txt"):
// Saudacoes!
// Exemplo de saídas (saída padrão):
// Saudacoes!
#include <iostream>
#include <fstream>

using namespace std;

// ifstream entrada/leitura dados

int main() {
    string nomeArquivo, palavra;
    
    cin >> nomeArquivo;
    ifstream arquivo(nomeArquivo);

    if (arquivo) {
        arquivo >> palavra;
        cout << palavra << endl;
    }

    return 0;
}