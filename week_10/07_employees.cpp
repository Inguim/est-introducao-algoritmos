// Faça um algoritmo que leia informações de 5 funcionários. O algoritmo deve pesquisar um determinado funcionário pelo número de matrícula utilizando o método binário e apresentar o nome do mesmo. Considere, para isso, que as entradas já foram inseridas de forma ordenada pelo número de matrícula. Também deverá apresentar de forma ordenada (crescente, por salário) os registros dos empregados que recebem salários iguais ou superior a um determinado valor.
// Entradas:
//     Os dados de cada funcionário:
//         matrícula (número inteiro),
//         nome,
//         salário (número real) e
//     Matrícula a ser pesquisada,
//     Salário a ser pesquisado.
// Saídas:
//     Nome do funcionário correspondente a matrícula a ser pesquisada,
//     lista com nomes dos funcionários com salários iguais ou superiores ao salário a ser pesquisado.
// Exemplo de entrada:
// 200
// Michel
// 3000
// 201
// Anderson
// 2850
// 202
// Fernanda
// 2600
// 203
// Marcia
// 2900
// 204
// Pablo
// 3500
// 202
// 2900
// Exemplo de saída:
// Fernanda
// Marcia
// Michel
// Pablo
#include <iostream>

using namespace std;

struct employee {
    int id;
    string name;
    double salary;
};

void sortASCSalary(employee e[], int tam){
	int lower;
	employee aux;

	for (int i = 0; i < tam - 1; i++) {
		lower = i;
		for (int j = i + 1; j < tam; j++) {
			if (e[j].salary < e[lower].salary) lower = j;
		}
		aux = e[i];
		e[i] = e[lower];
		e[lower] = aux;
	}
}

int main() {
    const unsigned SIZE = 5;
    employee employees[SIZE];
    int id;
    double salary;

    for (unsigned i = 0; i < SIZE; i++) {
        cin >> employees[i].id
            >> employees[i].name
            >> employees[i].salary;
    }
    
    cin >> id >> salary;

    for (unsigned i = 0; i < SIZE; i++) {
        if (employees[i].id == id) {
            cout << employees[i].name << endl;
            i = SIZE;
        }
    }

    sortASCSalary(employees, SIZE);

    for (unsigned i = 0; i < SIZE; i++) {
        if (employees[i].salary >= salary) {
            cout << employees[i].name << endl;
        }
    }

    return 0;
}