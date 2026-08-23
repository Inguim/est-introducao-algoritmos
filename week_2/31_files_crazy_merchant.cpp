// Ao vender os produtos à prazo, uma determinada loja cobrava 10% de acréscimo no valor do produto. Como os clientes começaram a reclamar, o dono do comércio disse que não cobraria mais acréscimos. Mas os boletos já estavam todos impressos; ele então ordenou aos funcionários que dessem 10% de desconto sobre o valor da prestação na hora que os clientes fizessem o pagamento. Os funcionários discutiram entre si que o dono deveria ter faltado às aulas de matemática na escola, mas quando tentaram argumentar ele não aceitou. Portanto, eles cumpriram a ordem.
// Faça um programa que receba no arquivo venda.txt o valor à vista de um produto e o número de prestações (um em cada linha). Calcule e imprima no arquivo cliente.txt: i) o total que um cliente pagaria para a loja antes da reclamação dos clientes; ii) o valor de cada prestação antes da reclamação; iii) o valor atualizado de cada prestação; e iv) o valor total a ser pago pelo cliente.
// Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision()
// Entradas (arquivo venda.txt):
//     Valor à vista do produto (número real).
//     Quantidade de prestações.
// Saídas (arquivo cliente.txt):
//     Valor total que o cliente pagaria antes das reclamações.
//     Valor de cada prestação antes da reclamação.
//     Valor atualizado de cada prestação.
//     Valor total que o cliente deverá pagar depois da ordem do dono.
// Exemplo 1:
// Exemplo de Entrada (arquivo venda.txt):
// 1200.0
// 10
// Exemplo de Saída (arquivo cliente.txt):
// 1320.0
// 132.0
// 118.8
// 1188.0
// Exemplo 2:
// Exemplo de Entrada (arquivo venda.txt):
// 1000.0
// 4
// Exemplo de Saída (arquivo cliente.txt):
// 1100.0
// 275.0
// 247.5
// 990.0
// Exemplo 3:
// Exemplo de Entrada (arquivo venda.txt):
// 99.9
// 2
// Exemplo de Saída (arquivo cliente.txt):
// 109.89
// 54.95
// 49.46
// 98.92
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
	float value, installmentValue;
    int totalInstallments;
	
    ifstream inputFile("venda.txt");
	inputFile >> value >> totalInstallments;
    inputFile.close();

    installmentValue = (value / float(totalInstallments)) * 1.1;

    ofstream outputFile("cliente.txt");
    outputFile << fixed << setprecision(1);
    outputFile << installmentValue * totalInstallments << endl;
    outputFile << installmentValue << endl;
    outputFile << installmentValue * 0.9 << endl;
    outputFile << installmentValue * 0.9 * totalInstallments << endl;
    outputFile.close();

	return 0;	
}