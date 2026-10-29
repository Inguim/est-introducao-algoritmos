// Para produzir seus brinquedos, Papai Noel recebe o auxílio de seus queridos e fiéis gnomos. Para não sobrecarregar seus queridos auxiliares, a fábrica funciona apenas das 5h00 às 23h00, com cada gnomo trabalhando no máximo quinze horas diárias, sendo que a quantidade de horas trabalhadas por um gnomo varia entre os dias da semana. Para controlar isso, ele utiliza um sistema de cadastro com as seguintes informações (usar registro com vetores):
// Nome: o primeiro nome ou apelido do Gnomo
// Hora de Entrada: um vetor com sete valores inteiros
// Hora de Saída: um vetor com sete valores inteiros
// Por conta de uma falha no sistema de controle de presentes, descobriu-se que estão faltando vários presentes e Papai Noel terá que convocar alguns gnomos para auxiliar em um turno extra. Entretanto, ele só irá convocar aqueles que na última semana trabalharam menos que 70 horas ao todo.
// Para salvar o Natal, faça um programa que receba o controle de ponto dos gnomos da semana anterior e imprima a relação de gnomos aptos ao trabalho, informando também a carga horária trabalhada por cada um (usando a mesma ordem da entrada de dados). O controle de ponto é informado da seguinte maneira: nome do gnomo, seguido pelo horário de entrada e saída em cada um dos sete dias da semana. Antes disso, é informado o número de gnomos para entrada.
// É obrigatório o uso de registros para representar dados relativos aos gnomos.
// Exemplo de Entrada:
// 5
// Trabalhador 
// 6 21
// 5 20
// 7 22
// 5 20
// 8 23
// 8 21
// 9 20
// Capaz 
// 6 20
// 5 18
// 7 20
// 5 18
// 8 21
// 8 20
// 9 17
// Marchalenta
// 15 21
// 15 20
// 17 22
// 15 16
// 18 23
// 18 21
// 19 20
// Dorminhoco
// 12 21
// 11 20
// 10 22
// 10 20
// 11 23
// 12 21
// 13 23
// Tranquilo
// 8 14
// 5 10
// 12 20
// 14 20
// 18 23
// 16 21
// 16 20
// Exemplo de Saída:
// Marchalenta 26
// Tranquilo 39
#include <iostream>
#include <string>

using namespace std;

struct gnomo {
    string nome;
    int entradas[7];
    int saidas[7];
};

int main() {
    unsigned N;
    const int HORAS_MAXIMA = 70;
    int horas;

    cin >> N;

    gnomo *gnomos = new gnomo[N];
    for (unsigned i = 0; i < N; i++) {
        cin >> gnomos[i].nome;

        for (unsigned j = 0; j < 7; j++) {
            cin >> gnomos[i].entradas[j];
            cin >> gnomos[i].saidas[j];
        }
    }

    for (unsigned i = 0; i < N; i++) {
        horas = 0;
        for (unsigned j = 0; j < 7; j++) {
            horas += gnomos[i].saidas[j] - gnomos[i].entradas[j];
        }
        if (horas < HORAS_MAXIMA) {
            cout << gnomos[i].nome << " " << horas << endl;
        }
    }
    

    delete[] gnomos;

    return 0;
}