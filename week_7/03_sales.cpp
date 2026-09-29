// Elabore um programa que receba as vendas de cinco produtos em três lojas diferentes e em dois meses consecutivos. O programa deverá receber os dados de cada mês a partir do arquivo "vendas.txt". O conteúdo do arquivo são os dados de duas matrizes 5 x 3. O bimestre é uma matriz 5 x 3, resultado da soma das duas matrizes anteriores. O programa deverá ainda calcular e armazenar em um arquivo "saida.txt":
//     as vendas de cada produto em cada loja no bimestre;
//     a maior venda do bimestre;
//     o total vendido por loja no bimestre;
//     o total vendido de cada produto no bimestre.
// Entrada (dados lidos a partir do arquivo "vendas.txt"):
//     dados para uma matriz 5 x 3 contendo as vendas de 5 produtos por 3 lojas em um mês;
//     dados para uma matriz 5 x 3 contendo as vendas de 5 produtos por 3 lojas no mês seguinte;
// Saída (dados gravados no arquivo "saida.txt"):
//     as vendas de cada produto em cada loja no bimestre (em forma de tabela separadas por tabulações);
//     o número de vendas do(s) produto(s) mais vendido no bimestre;
//     o total vendido por loja no bimestre (separado por espaços);
//     o total vendido de cada produto no bimestre (separado por espaços).
// Exemplo de entrada (conteúdo do arquivo "vendas.txt"):
// 1	5	3
// 2	4	2
// 3	3	1
// 4	2	0
// 5	1	1
// 0	5	3
// 2	2	0
// 4	2	5
// 6	1	0
// 5	1	1
// Exemplo de saída (conteúdo do arquivo "saida.txt"):
// 1	10	6
// 4	6	2
// 7	5	6
// 10	3	0
// 10	2	2
// 10
// 32 26 16
// 17 12 18 13 14
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int LINE = 5, COL = 3;
    int m1[LINE][COL], m2[LINE][COL];
    int sum[LINE] = {0};
    int total[COL] = {0};
    int i, j;
    int qttMostSale = 0, sales = 0;

    ifstream inputFile("vendas.txt");
    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COL; j++) {
            inputFile >> m1[i][j];
        }
    }

    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COL; j++) {
            inputFile >> m2[i][j];
        }
    }
    inputFile.close();

    ofstream outputFile("saida.txt");
    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COL; j++) {
            sales = m1[i][j] + m2[i][j];
            outputFile << sales << " ";
            sum[i] += sales;
            if (sales > qttMostSale) qttMostSale = sales;
        }
        outputFile << endl;
    }
    outputFile << qttMostSale << endl;

    for (j = 0; j < COL; j++) {
        sales = 0;
        for (i = 0; i < LINE; i++) {
            sales += m1[i][j] + m2[i][j];
        }
        total[j] += sales;
    }
    
    for (j = 0; j < COL; j++) {
        outputFile << total[j] << " ";
    }
    outputFile << endl;

    for (i = 0; i < LINE; i++) {
        outputFile << sum[i] << " ";
    }

    outputFile.close();

    return 0;
}