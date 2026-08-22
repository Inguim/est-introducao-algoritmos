// Um trabalhador recebeu seu salário mensal e o depositou em sua conta corrente bancária, cujo saldo até então era de R$0,00. Sabendo que após o depósito do salário, esse mesmo trabalhador fez duas compras usando pagamento em débito e agora deseja saber seu saldo atual, faça um programa que receba o valor do salário mensal deste trabalhador, assim como os valores das despesas realizadas. As informações sobre o salário recebido e as duas despesas serão recebidas através do arquivo entrada.txt e seu programa deverá informar qual o saldo atual da conta corrente do trabalhador, considerando que para cada despesa, é cobrado pelo banco uma taxa de 0,38% do valor da despesa.
// Entradas (conteúdo do arquivo entrada.txt:
//     Um número real indicando o salário mensal do trabalhador.
//     Dois números reais indicando os valores do primeiro cheque e do segundo cheque emitidos, respectivamente.
// Saídas:
//     Número real que indica o saldo atual da conta do trabalhador após a realização de todas as transações bancárias.
// Exemplo de Entrada (conteúdo do arquivo entrada.txt):
// 3500.00 
// 500.00 
// 375.25 
// Exemplo de Saída:
// 2621.42 
// Exemplo de Entrada (conteúdo do arquivo entrada.txt):
// 2196.32
// 709.60
// 199.00
// Exemplo de Saída:
// 1284.27
#include <iostream>
#include <fstream>

using namespace std;

int main () {
    double salary, debits[2];
    float BANK_FEE = 1.0038;

    ifstream inputFile("entrada.txt");
    inputFile >> salary >> debits[0] >> debits[1];
    inputFile.close();

    cout << salary - (debits[0] * BANK_FEE) - (debits[1] * BANK_FEE) << endl;

    return 0;
}