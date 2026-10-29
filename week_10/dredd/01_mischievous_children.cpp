// Papai Noel precisa de ajuda para montar a lista de crianças que merecem receber presentes neste Natal. Para ajudá-lo nessa tarefa, crie um programa que receba um conjunto de registros com as informações de cada criança: nome da criança, presente desejado, quantidade de boas ações e quantidade de travessuras. O programa deverá então verificar quais crianças não merecem presentes (ou seja, fizeram mais travessuras que boas ações) e gerar a lista dos presentes que deverão ser dados. Obs.: os nomes das crianças e os presentes não possuem espaço. Caso nenhuma criança deva receber presentes, o programa deve imprimir a palavra "nada".
// Entradas:
//     Um número inteiro representando a quantidade de crianças que desejam ganhar presentes no Natal.
//     Os dados de cada criança armazenados em um registro com os campos: nome da criança, presente, número de boas ações e número de travessuras.
// Saídas:
//     Nomes dos presentes que serão entregues(na ordem em que aparecem na entrada).
// Exemplo de entrada:
// 5
// Huguinho Piao 5 4
// Zezinho  Bolinha_de_gude 2 2
// Luizinho Carrinho 8 2
// Biquinho Bodoque 6 10
// Lala Boneca 9 3
// Exemplo de saída:
// Piao Carrinho Boneca
// Exemplo de entrada:
// 5
// Huguinho Piao 4 5
// Zezinho  Bolinha_de_gude 1 2
// Luizinho Carrinho 2 8
// Biquinho Bodoque 1 6
// Lala Boneca 3 9 
// Exemplo de saída:
// nada
#include <iostream>
#include <string>

using namespace std;

struct crianca {
    string nome;
    string brinquedo;
    int boasAcoes;
    int travessuras;
};

int main() {
    int passiveis = 0;
    crianca pessoa;
    unsigned N;

    cin >> N;

    crianca *pessoas = new crianca[N];
    for (unsigned i = 0; i < N; i++) {
        cin >> pessoas[i].nome >> pessoas[i].brinquedo >> pessoas[i].boasAcoes >> pessoas[i].travessuras;
    }

    for (unsigned i = 0; i < N; i++) {
        if (pessoas[i].boasAcoes > pessoas[i].travessuras) {
            cout << pessoas[i].brinquedo << " ";
            passiveis++;
        }
    }
    
    if (passiveis == 0) cout << "nada" << endl;
    else cout << endl;

    delete[] pessoas;

    return 0;
}