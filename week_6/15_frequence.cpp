// Uma professora passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de matrícula. Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de matrícula de seus amigos fujões. O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de matrícula acabaram sendo repetidamente inseridos na lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!
// A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de matrícula estavam na lista. Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula. A lista de presença, no arquivo entrada.txt, contém 15 posições, sendo que as posições não utilizadas são preenchidas com 0. Portanto, as entradas com 0 devem ser descartadas.
// Entradas (arquivo entrada.txt):
// Contém até 15 números de matrícula (número inteiro) que foram inseridos na lista de presença. As linhas faltantes são preenchidas com zeros.
// Saídas:
// Seu programa deve escrever uma única linha, contendo apenas um número inteiro: o número de alunos que receberam presença.
// Exemplo de entradas:
// 1
// 4
// 12
// 13
// 11
// 13
// 9 
// 4
// 6
// 11
// 13
// 12
// 0
// 0
// 0
// Exemplo de saída:
// 7
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int SIZE = 15;
    int a[SIZE], uniques[SIZE] = {0};
    int i = 0, j = 0;
    int presences = 0;
    bool isIn = false;

    ifstream inputFile("entrada.txt");
    for (i = 0; i < SIZE; i++) {
        inputFile >> a[i];
    }
    inputFile.close();

    for (i = 0; i < SIZE; i++) {
        if (a[i] != 0) {
            isIn = false;
            for (j = 0; j < SIZE; j++) {
                if (a[i] == uniques[j]) isIn = true;
            }
            if (not isIn) {
                uniques[presences] = a[i];
                presences++;
            }         
        }
    }

    cout << presences << endl;

    return 0;
}