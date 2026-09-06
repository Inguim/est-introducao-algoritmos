// Faça um programa que receba o peso e a altura de uma pessoa. De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa.
// Altura 	Peso
// Abaixo de 60Kg 	Entre 60Kg e 90Kg (inclusive) 	Acima de 90Kg
// Menores que 1,20m 	A 	D 	G
// De 1,20m a 1,70m (inclusive) 	B 	E 	H
// Maiores que 1,70m 	C 	F 	I
// Entradas:
//     Peso e altura do indivíduo (em ponto flutuante)
// Saídas:
//     Classificação do indivíduo (um caracter)
// Exemplo de entrada:
// 54.2
// 1.56
// Exemplo de saída:
// B
// Exemplo de Entrada:
// 90
// 1.83
// Exemplo de Saída:
// F
#include <iostream>

using namespace std;

int main() {
    double weight, height;
    char classification;

    cin >> weight >> height;

    if (height > 1.70) {
        if (weight > 90.0) {
            classification = 'I';
        } else if (weight >= 60.0) {
            classification = 'F';
        } else {
            classification = 'C';
        }
    } else if (height >= 1.20) {
        if (weight > 90.0) {
            classification = 'H';
        } else if (weight >= 60.0) {
            classification = 'E';
        } else {
            classification = 'B';
        }
    } else {
        if (weight > 90.0) {
            classification = 'G';
        } else if (weight >= 60.0) {
            classification = 'D';
        } else {
            classification = 'A';
        }
    }

    cout << classification << endl;

    return 0;
}