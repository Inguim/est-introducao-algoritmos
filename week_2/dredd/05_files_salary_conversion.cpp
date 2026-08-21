// Faça um programa que receba o valor do salário de um funcionário em reais e converta este valor para Dólar, Euro e Libra. O resultado deve ser armazenado em um arquivo chamado salario.txt.
// Para isso, utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Adote os seguintes valores:
//     1 Dólar = 2.13 Reais
//     1 Euro = 2.84 Reais
//     1 Libra = 3.34 Reais
// Entrada:
//     Valor em reais do salário do funcionário (número real).
// Saídas (arquivo salario.txt) (atenção à ordem):
//     Valor do salário em Dólar (número real).
//     Valor do salário em Euro (número real).
//     Valor do salário em Libra (número real).
// Exemplo de Entrada:
// 600
// Exemplo de Saída:
// 281.69
// 211.26
// 179.64
// Exemplo de Entrada:
// 816.87
// Exemplo de Saída:
// 383.51
// 287.63
// 244.57

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()  {
	float real, dolar, euro, libra;

	cin >> real;
	
	dolar = real / 2.13;
	euro = real / 2.84;
	libra = real / 3.34;
	
    ofstream arquivo("salario.txt");

    arquivo << fixed << setprecision(2);

	arquivo << dolar << endl;
	arquivo << euro << endl;
	arquivo << libra << endl;

	arquivo.close();

	return 0;
}