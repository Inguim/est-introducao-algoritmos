// Faça um programa para calcular a média de notas de uma determinada turma. Faça um registro para guardar as informações do aluno, onde irá receber o número de matrícula (inteiro), nome, 2 notas de 0 - 10(float) e o sexo(M - Masculino ou F - Feminino). Primeiro o programa deve solicitar o número de alunos e depois as informações de cada aluno. A saída do programa deve ter a média geral das notas, a média das pessoas do sexo masculino e a média das pessoas do sexo feminino.
// Entradas:
//     Número inteiro de alunos.
//     Número de matrícula(inteiro), nome, 2 notas(float) e sexo(char).
// Saídas:
//     Média geral dos alunos.
//     Média das pessoas do sexo masculino.
//     Média das pessoas do sexo feminino.
// Exemplo de Entrada:
// 3
// 1 amanda 5 10 F
// 2 flavio 2.5 9.1 M
// 3 renato 8.4 5.1 M
// Exemplo de Saída:
// 6.68
// 6.275
// 7.5
#include <iostream>
#include <string>

using namespace std;

struct student {
    int id;
    string name;
    float grades[2];
    char gender;
};

int main() {
    student a;
    unsigned N;
    float avgClass, avgMales, avgWomen;
    int qttMales = 0, qttWomen = 0;

    avgClass = avgMales = avgWomen = 0.0;

    cin >> N;

    for (unsigned i = 0; i < N; i++) {
        cin >> a.id
            >> a.name
            >> a.grades[0]
            >> a.grades[1]
            >> a.gender;
        avgClass += (a.grades[0] + a.grades[1]) / 2;
        if (a.gender == 'M') {
            avgMales += (a.grades[0] + a.grades[1]) / 2;
            qttMales++;
        } else {
            avgWomen += (a.grades[0] + a.grades[1]) / 2;
            qttWomen++;
        }
    }
    
    avgClass /= N;
    avgMales /= qttMales;
    avgWomen /= qttWomen;

    cout << avgClass << endl;
    cout << avgMales << endl;
    cout << avgWomen << endl;

    return 0;
}