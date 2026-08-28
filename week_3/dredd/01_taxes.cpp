// Faça um programa que receba o salário​ base de um funcionário, calcule e mostre o seu salário líquido, sabendo​ se que esse funcionário tem gratificação de R$ 100,00 e paga imposto de 10% sobre o salário​ bruto, que é o salário base mais a gratificação.
// Entradas:
//     Valor do salário base do funcionário (número real não negativo).
// Saídas:
//     Salário Líquido (número real).
// Exemplo de Entrada:
// 920
// Exemplo de Saída:
// 918
#include <iostream>

using namespace std;

int main() {
	float salario;
	
	cin >> salario;
	
	cout << (salario + 100) * 0.9 << endl;

	return 0;
}