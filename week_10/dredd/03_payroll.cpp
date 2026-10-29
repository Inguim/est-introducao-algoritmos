// Uma empresa possui diversos funcionários, sobre os quais se tem estas informações: nome, número de horas trabalhadas no mês, turno de trabalho (pode ser M ­ matutino, V - vespertino ou N - noturno) e categoria (pode ser O - operário ou G ­ gerente). Sabendo-se que essa empresa deseja informatizar sua folha de pagamento, faça um programa que leia o nome, o número de horas trabalhadas no mês, o turno e a categoria dos funcionários. O programa deverá calcular o valor do salário de cada funcionário, conforme a tabela a seguir (adotando o valor de R$ 380,00 para o salário mínimo).
// Categoria 	Turno 	Valor da Hora Trabalhada
// G 	N 	18% do salário mínimo
// G 	M ou V 	15% do salário mínimo
// O 	N 	13% do salário mínimo
// O 	M ou V 	10% do salário mínimo
// Entradas:
//     Número de funcionários (número natural).
//     Nome (texto sem espaços), horas trabalhadas no mês (número natural), turno de trabalho (letra), categoria (letra).
// Saídas:
//     Novos salário de cada funcionário (número reais).
// Exemplo de Entrada:
// 3
// Caio 80 N G
// Peterson 120 V O
// Bruno 100 M O
// Exemplo de Saída:
// Caio 5472
// Peterson 4560
// Bruno 3800
#include <iostream>
#include <string>

using namespace std;

struct funcionario {
    string nome;
    int horas;
    char turno;
    char categoria;
};

int main() {
    unsigned N;
    const double SALARIO_MINIMO = 380.0;
    double salario;

    cin >> N;

    funcionario *funcionarios = new funcionario[N];
    for (unsigned i = 0; i < N; i++) {
        cin >> funcionarios[i].nome
            >> funcionarios[i].horas
            >> funcionarios[i].turno
            >> funcionarios[i].categoria;
    }

    for (unsigned i = 0; i < N; i++) {
        salario = 0.0;
        if (funcionarios[i].categoria == 'G') {
            if (funcionarios[i].turno == 'N') {
                salario += SALARIO_MINIMO * 0.18 * funcionarios[i].horas;
            } else if (funcionarios[i].turno == 'M' or funcionarios[i].turno == 'V') {
                salario += SALARIO_MINIMO * 0.15 * funcionarios[i].horas;
            }
        } else {
            if (funcionarios[i].turno == 'N') {
                salario += SALARIO_MINIMO * 0.13 * funcionarios[i].horas;
            } else if (funcionarios[i].turno == 'M' or funcionarios[i].turno == 'V') {
                salario += SALARIO_MINIMO * 0.10 * funcionarios[i].horas;
            }
        }
        cout << funcionarios[i].nome << " " << salario << endl;
    }
    
    delete[] funcionarios;

    return 0;
}