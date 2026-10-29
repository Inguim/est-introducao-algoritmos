// Faça um programa que lê os dados (nome e data de nascimento) de n pessoas, e que exiba o nome da pessoa mais velha. Em caso de empate, a resposta deve ser a pessoa que apareceu antes na entrada dos dados.
// Cada pessoa deverá ser representada por um registro, sendo que a data de nascimento deverá ser representada por um outro registro com dia, mês e ano.
// Obs.: Registros em Python são implementados como dicionários
// Entrada:
//     A quantidade de pessoas que serão lidas (um número inteiro).
//     Os dados de cada pessoa (nome, dia de nascimento, mês de nascimento e ano de nascimento). Os nomes não terão caracteres brancos, e os dados serão lidos na mesma linha.
// Saída:
//     O nome da pessoa mais velha
// Exemplo de entrada:
// 4
// Joao 4 12 1990
// Jose 31 1 1991
// Chico 20 6 1989
// Maria 20 4 1991
// Exemplo de saída:
// Chico
#include <iostream>
#include <string>

using namespace std;

struct datee {
    int day;
    int month;
    int year;
};

struct person {
    string name;
    datee date;
};

bool verifyIsOlder(datee older, datee than) {
    bool isOlder = older.year < than.year;
    if (older.year == than.year) {
        if (older.month != than.month) {
            isOlder = older.month < than.month; 
        } else {
            isOlder = older.day < than.day;
        }
    };
    return isOlder;
}

int main() {
    unsigned size;
    bool isOlder = false;
    person older;

    cin >> size;

    person *persons = new person[size];
    for (unsigned i = 0; i < size; i++) {
        cin >> persons[i].name
            >> persons[i].date.day
            >> persons[i].date.month
            >> persons[i].date.year;
    }

    older = persons[0];
    for (unsigned i = 1; i < size; i++) {
        isOlder = verifyIsOlder(persons[i].date, older.date);
        if (isOlder) older = persons[i];
    }

    cout << older.name << endl;

    delete[] persons;

    return 0;
}