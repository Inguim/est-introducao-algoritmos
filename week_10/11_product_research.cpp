// Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um de seus novos produtos lançados no mercado. Faça um programa que gera um relatório contendo informações (ver abaixo) a respeito da pesquisa. O programa deve usar registros para armazenar dados de entrevistados.
// Entradas:
//     Número de entrevistados,
//     Os dados de cada entrevistado:
//         sexo (um caractere, que pode ser M ou F),
//         idade (um número inteiro) e
//         resposta (um caractere, que pode ser S ou N).
// Saídas:
//     Número de pessoas que responderam SIM.
//     Número de pessoas que responderam NÃO.
//     Número de pessoas maiores de 18 anos que gostaram do produto.
//     Número de pessoas menores de 18 anos que não gostaram do produto.
//     Número de pessoas maiores de 18 anos, do sexo feminino que não gostaram do produto.
//     Número de pessoas menores de 18 anos, do sexo masculino que gostaram do produto.
// Exemplo de entrada:
// 6
// M 16 S
// M 23 S
// F 15 N
// M 29 N
// F 32 S
// M 22 S
// Exemplo de saída:
// 4
// 2
// 3
// 1
// 0
// 1
#include <iostream>

using namespace std;

struct interviewee {
    char gender;
    int age;
    char anwser;
};

int main() {
    unsigned S;
    int totalY = 0, totalN = 0; 
    // gostaram | não gostaram
    int totalHY18 = 0, totalLN18 = 0; 
    // maior de 18 gostaram | menor 18 não gostaram
    int totalFHN18 = 0, totalMLY18 = 0; 
    // feminino maior 19 nao gostaram | masculino menor 18 gostaram
    interviewee inter;


    cin >> S;

    for (unsigned i = 0; i < S; i++) {
        cin >> inter.gender >> inter.age >> inter.anwser;

        if (inter.anwser == 'S') totalY++;
        else totalN++;

        if (inter.age > 18 and inter.anwser == 'S') totalHY18++;
        if (inter.age < 18 and inter.anwser == 'N') totalLN18++;

        if (inter.age > 18 and inter.gender == 'F' and inter.anwser == 'N') totalFHN18++;
        if (inter.age < 18 and inter.gender == 'M' and inter.anwser == 'S') totalMLY18++;

    }

    cout << totalY << endl;
    cout << totalN << endl;
    cout << totalHY18 << endl;
    cout << totalLN18 << endl;
    cout << totalFHN18 << endl;
    cout << totalMLY18 << endl;

    return 0;
}