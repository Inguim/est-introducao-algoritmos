// Crie um registro representando um atleta. Esse registro deve conter o nome do atleta, seu esporte, idade e altura. Em seguida, escreva um programa que leia os dados de cinco atletas, armazenando as informações em um vetor. Calcule e exiba os nomes e os esportes do atleta mais alto e do mais velho.
// Entradas:
//     Os dados de cada atleta em cada linha, sendo eles:
//         nome (sem espaços),
//         esporte (sem espaços),
//         idade (número inteiro) e
//         altura (número real).
// Saídas:
//     Nome e esporte do atleta mais alto.
//     Nome e esporte do atleta mais velho.
// Exemplo de Entrada:
// Joao	Futebol		28		1.60
// Maria	Volei		31		1.82
// Pedro	Basquete	22		1.95
// Jairo	Tenis		30		1.76
// Tiago	Tenis		29		1.77
// Exemplo de Saída:
// Pedro	Basquete
// Maria	Volei
#include <iostream>

using namespace std;

struct atlet {
    string name;
    string sport;
    int age;
    float height;
};

int main() {
    const unsigned SIZE = 5;
    atlet atlets[SIZE];
    atlet older;
    atlet higher;

    for (unsigned i = 0; i < SIZE; i++) {
        cin >> atlets[i].name
            >> atlets[i].sport
            >> atlets[i].age
            >> atlets[i].height;
        if (i == 0) older = higher = atlets[i];
        else {
            if (atlets[i].age > older.age) older = atlets[i];
            if (atlets[i].height > higher.height) higher = atlets[i];
        }
    }
    
    cout << higher.name << " " << higher.sport << endl;
    cout << older.name << " " << older.sport << endl;

    return 0;
}