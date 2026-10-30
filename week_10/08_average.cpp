// Faça um programa para ajudar a professora de AED I a obter as estatísticas das notas da terceira prova.
// O programa deve ler a quantidade de alunos que fizeram a prova e os dados de cada aluno. Os dados dos alunos são: matrícula (string), nome (string), nota (inteiro, de 0 a 100) e devem ser armazenados em um registro. O programa deve calcular e exibir:
//     A média das notas;
//     A matrícula dos alunos que zeraram a prova;
//     A porcentagem dos alunos que ficaram abaixo da média das notas da turma;
//     O nome do aluno que tirou a maior nota.
// Obs1.: Se nenhum aluno teve nota 0, nada deve ser impresso;
// Obs2.:Em caso de empate da maior nota, considerar a primeira ocorrência;
// Obs3.: Fique atento aos tipos dos dados!
// Entradas:
//     Quantidade de alunos (inteiro);
//     Os dados de cada aluno: matrícula (string), nome (string), nota (inteiro)
// Saídas:
//     A média das notas (real);
//     A matrícula dos alunos que zeraram a prova (string);
//     A porcentagem dos alunos que ficaram abaixo da média da turma (real);
//     O nome do aluno que tirou a maior nota.
// Exemplo de Entrada:
// 6
// 20171 ana 60
// 20172 jose 80
// 20173 carlos 0
// 20174 luana 0
// 20175 mateus 50
// 20176 lucio 45
// Exemplo de Saída:
// 39.1667
// 20173
// 20174
// 33.3333%
// jose
#include <iostream>
#include <string>

using namespace std;

struct student {
    int id;
    string name;
    float grade;
};

int main() {
    unsigned N;
    student higherGrade;
    float avgGrade = 0.0;
    float percent = 0.0;

    cin >> N;

    student *students = new student[N];
    for (unsigned i = 0; i < N; i++) {
        cin >> students[i].id
            >> students[i].name
            >> students[i].grade;
        if (i == 0) higherGrade = students[i];
        else if (students[i].grade > higherGrade.grade) {
            higherGrade = students[i];
        }
        avgGrade += students[i].grade;
    }
    avgGrade /= N;
    
    cout << avgGrade << endl;

    for (unsigned i = 0; i < N; i++) {
       if (students[i].grade == 0) cout << students[i].id << endl; 
       if (students[i].grade < avgGrade) percent++;
    }
    percent = percent / N * 100;

    cout << percent << "%" << endl;
    cout << higherGrade.name << endl;

    delete[] students;

    return 0;
}