// Considere um arquivo de dados do tipo texto chamado "entrada.txt" com o seguinte conteúdo:
// 3
// JOSE
// 8.5
// 10.0
// ANTONIO
// 7.5
// 8.5
// SEBASTIAO
// 5.0
// 6.0
// O arquivo anterior é apenas um exemplo. Nestes arquivos de alunos a primeira linha contém o número de alunos no arquivo. As linhas seguintes contém os seguintes dados:
// o nome do aluno, que será sempre uma palavra sem espacos;
// o nota da primeira prova, número real;
// o nota da segunda prova, número real.
// Escreva um programa que imprima em um arquivo chamado "saida.txt", os nomes de todos os alunos que têm a média das duas notas menor que 7.0. Os nomes devem ser impressos na mesma ordem que foram lidos do arquivo "entrada.txt".
// Exemplo de Entrada (arquivo entrada.txt):
// 5
// AMELIA
// 5.0
// 8.8
// JOSE
// 8.5
// 10.0
// ANTONIO
// 7.5
// 8.5
// SEBASTIAO
// 5.0
// 6.0
// MARIA
// 2.0
// 10.0
// Exemplo de Saída (arquivo saida.txt):
// AMELIA
// SEBASTIAO
// MARIA
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int qttStudents;
    string name;
    double n1, n2, avg;

    ifstream inputFile("entrada.txt");
    inputFile >> qttStudents;

    ofstream outputFile("saida.txt");
    while(qttStudents > 0) {
        inputFile >> name >> n1 >> n2;
        avg = (n1 + n2) / 2.0;
        if (avg < 7.0) outputFile << name << endl;
        qttStudents--;
    }
    inputFile.close();
    outputFile.close();

    return 0;
}   