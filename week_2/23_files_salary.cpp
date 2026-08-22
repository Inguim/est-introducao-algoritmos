// Faça um programa que receba o salário​ base de um funcionário, calcule e mostre o seu salário a receber, mostrando descontos e adicionais. Você receberá da entrada os seguintes valores: salário base, gratificação e percentual de imposto sobre o salário base. Escreva no arquivo holerite.txt os seguintes dados: valor total bruto, valor do desconto, valor líquido a ser recebido. Utilize fixed e setprecision() para imprimir os valores com duas casas decimais.
// Entradas:
//     Valor do salário base do funcionário (float).
//     Valor da gratificação do funcionário (float).
//     Percentual do imposto sobre o salário base do funcionário (float).
// Saídas (arquivo holerite.txt):
//     Salário final bruto (salário + gratificação)
//     Valor do desconto com imposto
//     Salário final líquido
// Exemplo de Entrada:
// 920
// 80
// 15
// Exemplo de Saída (arquivo holerite.txt):
// 1000.00
// 150.00
// 850.00
// Exemplo de Entrada:
// 3210
// 50
// 25
// Exemplo de Saída (arquivo holerite.txt):
// 3260.00
// 815.00
// 2445.00
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
    float baseSalary, extras, fees;

    cin >> baseSalary >> extras >> fees;

    ofstream outputFile("holerite.txt");
    outputFile << fixed << setprecision(2);

    outputFile << baseSalary + extras << endl;
    outputFile << (baseSalary + extras) * (fees / 100) << endl;
    outputFile << (baseSalary + extras) - ((baseSalary + extras) * (fees / 100)) << endl;
    outputFile.close();

    return 0;
}