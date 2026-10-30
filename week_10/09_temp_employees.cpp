// Uma empresa contratou 3 funcionários temporários. De acordo com o valor das vendas mensais, os funcionários ganham pontos que determinarão seus salários ao final de cada mês. Sabe­-se que eles trabalharão nos meses de novembro de 2007 a janeiro de 2008. Leve em conta que cada 100.00 R$ equivalem a 1 ponto. Assuma que os pontos sempre serão representados por números inteiros.
// Entradas:
//     Os nomes dos funcionários e suas respectivas vendas (número real) mensais.
// Saídas:
//     Nome de cada funcionário e a pontuação total do mesmo considerando os três meses,
//     nome do funcionário com a maior pontuação,
//     valor total vendido por todos os funcionários nos três meses.
// Exemplo de entrada:
// Elder 2500.0 2800.0 3000.0
// Sara 2000.0 4300.0 1500.0
// Karen 1700.0 2300.0 4700.0
// Exemplo de saída:
// Elder 83
// Sara 78
// Karen 87
// Karen
// 24800.0
#include <iostream>
#include <string>

using namespace std;

struct employee {
    string name;
    double sales[3];
    int points = 0;
};

int main() {
    const unsigned SIZE = 3;
    employee employees[SIZE];
    employee mostPoints;
    double totalSales = 0.0;

    for (unsigned i = 0; i < SIZE; i++) {
        cin >> employees[i].name;
        for (unsigned j = 0; j < 3; j++) {
            double sale;
            cin >> sale;

            totalSales += sale;
            employees[i].points += sale / 100;
            employees[i].sales[j] = sale;
        }
        
        if (employees[i].points > mostPoints.points) mostPoints = employees[i];
    }
    
    for (unsigned i = 0; i < SIZE; i++) {
        cout << employees[i].name << " " << employees[i].points << endl;
    }
    
    cout << mostPoints.name << endl;
    cout << totalSales << endl;

    return 0;
}