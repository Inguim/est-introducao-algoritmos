// Ao vender os produtos à prazo, uma determinada loja cobrava 10% de acréscimo sobre cada prestação (após calculá-la a partir do valor à vista e do número de prestações). Como os clientes começaram a reclamar, o dono do comércio disse que não cobraria mais acréscimos. Mas os boletos já estavam todos impressos; ele então ordenou aos funcionários que dessem 10% de desconto sobre o valor da prestação na hora que os clientes fizessem o pagamento. Os funcionários discutiram entre si que o dono deveria ter faltado às aulas de matemática na escola, mas quando tentaram argumentar ele não aceitou. Portanto, eles cumpriram a ordem.
// Faça um programa que dado o valor à vista de um produto e o número de prestações (um em cada linha), mostre o total que um cliente pagaria para a loja antes da reclamação dos clientes e o total depois da ordem do dono.
// Entradas:
//     Valor à vista do produto (número real).
//     Quantidade de prestações.
// Saídas:
//     Valor total que o cliente pagaria antes das reclamações.
//     Valor total que o cliente pagaria depois da ordem do dono.
// Exemplo 1:
// Exemplo de Entrada:
// 1200.0
// 10
// Exemplo de Saída:
// 1320.0
// 1188.0
// Exemplo 2:
// Exemplo de Entrada:
// 1000.0
// 4
// Exemplo de Saída:
// 1100.0
// 990.0
// Exemplo 3:
// Exemplo de Entrada:
// 99.9
// 2
// Exemplo de Saída:
// 109.89
// 98.901
#include <iostream>

using namespace std;

int main () {
	float value, installmentValue;
    int totalInstallments;
	
	cin >> value >> totalInstallments;

    installmentValue = (value / float(totalInstallments)) * 1.1;

    cout << installmentValue * totalInstallments << endl;
    cout << installmentValue * 0.9 * totalInstallments << endl;

	return 0;	
}