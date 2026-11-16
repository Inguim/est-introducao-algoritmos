// A Operação Lava Java deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.
// Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no arquivo ordenadas de forma crescente pelo número da operação e as demais em ordem decrescente.
// Seu programa deve usar o método SelectionSort e não pode fazer uso de vetores auxiliares.
// Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações presentes no arquivo.
// Entradas:
//     Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
//     Um número K, sendo 0 <= K <= número de operações existentes no arquivo.
// Saídas:
//     Os nomes das K primeiras operações do arquivo em ordem crescente de número (um em cada linha).
//     Os nomes operações restantes do arquivo em ordem decrescente de número (um em cada linha).
// Exemplo de Entrada (arquivo fases.txt):
// 33 RestaUm
// 7 JuizoFinal
// 31 Abismo
// 26 Xepa
// 10 QuePaisEhEsse
// 23 Acaraje
// 17 Pixuleco
// Exemplo de Entrada (entrada padrão):
// 4
// Exemplo de Saída:
// JuizoFinal
// Xepa
// Abismo
// RestaUm
// Acaraje
// Pixuleco
// QuePaisEhEsse
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct stage {
    int id;
    string name;
};

void resize(stage* &vetor, int &size) {
	stage *newVector = new stage[size * 2];

	for (int i = 0; i < size; i++) {
		newVector[i] = vetor[i];
	}

	delete[] vetor;
	vetor = newVector;
	size *= 2;
}

void sortASC(stage vet[], int tam) {
    int pos_lower;
    stage temp;

    for (int i = 0; i < tam - 1; i++) {
        pos_lower = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j].id < vet[pos_lower].id) {
                pos_lower = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_lower];
        vet[pos_lower] = temp;
    }
}

void sortDESC(stage vet[], int tam, int start) {
    int pos_greater;
    stage temp;

    for (int i = start; i < tam - 1; i++) {
        pos_greater = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j].id > vet[pos_greater].id) {
                pos_greater = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_greater];
        vet[pos_greater] = temp;
    }
}

int main() { 
    int size = 5;
    int k = 0;
    int step;
    int id;

    stage *v = new stage[size];

    ifstream inputFile("fases.txt");
    while (inputFile >> id) {
        if (k >= size) resize(v, size);
        v[k].id = id;
        inputFile >> v[k].name;
        k++;
    }
    inputFile.close();

    cin >> step;

    sortASC(v, step);

    for (int i = 0; i < step; i++) {
        cout << v[i].name << endl;
    }

    sortDESC(v, k, step);

    for (int i = step; i < k; i++) {
        cout << v[i].name << endl;
    }
    
    delete[] v;

    return 0;
}