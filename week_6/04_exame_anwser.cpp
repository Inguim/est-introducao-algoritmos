// Escreva um algoritmo que leia um vetor de 10 posições do tipo caractere, que representa o gabarito de uma prova. Em seguida leia 2 vetores que representam as provas de 2 alunos. Escreva a quantidade de questões que o aluno acertou e se o aluno acertar 6 ou mais questões, escreva "APROVADO", e "REPROVADO" se o aluno acertou menos que 6 questões.
// Obs.: Considere que não existirão vetores vazios
// Entradas:
//     vetor[10] (char)
//     O vetor prova de cada um dos 2 alunos
// Saídas:
//     Número (int)de acertos de cada aluno
//     "APROVADO" se o número de acertos for maior ou igual a 6
//     ou "REPROVADO" se o número de acertos for menor que 6 
// Exemplo de Entrada:
// E C A D C A D C C B
// A B A D E A E C C B
// D C C E C A D C D A
// Exemplo de Saída:
// 6
// APROVADO
// 5
// REPROVADO
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int qtt1 = 0, qtt2 = 0;
    char anwserKey[SIZE];
    char student1[SIZE], student2[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        cin >> anwserKey[i];
    }

    for (i = 0; i < SIZE; i++) {
        cin >> student1[i];
    }

    for (i = 0; i < SIZE; i++) {
        cin >> student2[i];
    }

    for (i = 0; i < SIZE; i++) {
        if (anwserKey[i] == student1[i]) {
            qtt1++;
        }
        if (anwserKey[i] == student2[i]) {
            qtt2++;
        }
    }

    cout << qtt1 << endl;
    cout << (qtt1 >= 6 ? "APROVADO" : "REPROVADO") << endl;
    
    cout << qtt2 << endl;
    cout << (qtt2 >= 6 ? "APROVADO" : "REPROVADO") << endl;

    return 0;
}