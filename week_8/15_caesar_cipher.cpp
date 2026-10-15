// A cifra de César é uma forma de criptografia antiga, onde cada letra de uma determinada mensagem é trocada pela letra que a sucede em um determinado número de posições. A chave da cifra de césar é dada justamente pelo número de posições utilizadas. Por exemplo, utilizando 5 como chave, a palavra AJUDA seria transformada em FOZIF. Escreva uma função que leia um arquivo texto e escreva a cifra de César correspondente em um outro arquivo texto.
// A letra V é trocada por A, W por B, X por C, Y por D e Z por E.
// O programa deve ler um nome de arquivo da entrada padrão, e aplicar a cifra de César em seu conteúdo, escrevendo o resultado num arquivo cujo nome é "cifrado.txt". Suponha que no arquivo de entrada só existem letras maiúsculas sem qualquer tipo de acentos, além espaços e finais de linha. Os caracteres brancos (espaços e finais de linha) não podem ser modificados. Leia cada frase com getline().
// Entradas:
//     Nome de um arquivo a ser lido (não há espaços no nome).
//     Conteúdo do arquivo informado.
// Saída:
//     Um arquivo cujo nome é "cifrado.txt", contendo o resultado da aplicação da cifra ao conteúdo do arquivo da entrada.
// Exemplo de entrada (conteúdo do arquivo - nome informado pelo usuário):
// GALLIA EST OMNIS DIVISA IN PARTES TRES
// QUARUM UNAM INCOLUNT BELGAE
// Exemplo de saída (conteúdo do arquivo cujo nome é "cifrado.txt"):
// LFQQNF JXY TRSNX INANXF NS UFWYJX YWJX
// VZFWZR ZSFR NSHTQZSY GJQLFJ
// Exemplo de entrada (conteúdo do arquivo - nome informado pelo usuário):
// EU VOU PRA MARACANGALHA 
// EU VOU
// EU VOU COM CHAPEU DE PALHA 
// EU VOU
// SE ANALIA NAO QUISER IR
// EU VOU SO
// EU VOU SO 
// EU VOU SEM ANALIA MAS EU VOU
// Exemplo de saída (conteúdo do arquivo cujo nome é "cifrado.txt"):
// JZ ATZ UWF RFWFHFSLFQMF 
// JZ ATZ
// JZ ATZ HTR HMFUJZ IJ UFQMF 
// JZ ATZ
// XJ FSFQNF SFT VZNXJW NW
// JZ ATZ XT
// JZ ATZ XT 
// JZ ATZ XJR FSFQNF RFX JZ ATZ
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string filename;
    string sentence;

    cin >> filename;

    ifstream inputFile(filename);
    ofstream outputFile("cifrado.txt");

    while (getline(inputFile, sentence)) {
        for (size_t i = 0; i < sentence.length(); i++) {
            if (sentence[i] != ' ') {
                // slk lembrava disso aqui não
                sentence[i] = ((sentence[i] - 'A' + 5) % 26) + 'A';
            }
        }
        outputFile << sentence << endl;
    }

    inputFile.close();
    outputFile.close();
    return 0;
}