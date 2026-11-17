// Mario é um grande fã de futebol e por isso decidiu realizar um torneio com times amadores de sua cidade, ficou decidido que todos os time jogariam entre si onde uma vitória daria 3 pontos empate 1 ponto e derrota 0 pontos, ao final do torneio o time vencedor seria aquele com maior número de pontos, caso houvesse empate seria escolhido o time com maior número de vitórias, persistindo o empate a escolha seria feita pelo time com maior saldo de gols (considere que não existirão times com saldo de gols iguais), Mario no entanto não ordenou a tabela do campeonato durante a competição e agora pede a você que crie um programa que a ordene e informe sua ordem correta.
// Só é permitido usar um dos seguintes métodos: Insertion sort, Selection sort ou Shell sort.
// Entradas:
//     Quantidade de times que participaram da competição.
//     vetor de registros representando os times contendo os campos de nome do time (cadeia de caracteres), pontos que o time fez no decorrer da competição (número inteiro), número de vitórias (número inteiro) e saldo de gols (número inteiro).
// Saídas:
//     O programa deve ordenar o vetor dos times modo que o time com mais pontos apareça primeiro seguido do segundo com mais pontos e assim por diante, caso ocorra empate no número de pontos seu programa deve ordenar os times empatados pelo número de vitórias, se o empate ainda existir o programa deve ordenar pelo saldo de gols.
// Exemplo de Entrada:
// 5
// DesertorFC 9 3 10
// CarrascoFC 13 4 7
// Campinais 13 4 9
// Machado 11 3 10
// RealSport 1 0 -4
// Exemplo de Saída:
// Campinais 13 4 9
// CarrascoFC 13 4 7
// Machado 11 3 10
// DesertorFC 9 3 10
// RealSport 1 0 -4
#include <iostream>
#include <string>

using namespace std;

struct teams {
    string name;
    int points;
    int victories;
    int goals;
};

void sort(teams vet[], int tam) {
    int pos_lower;
    teams temp;

    for (int i = 0; i < tam - 1; i++) {
        pos_lower = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j].points > vet[pos_lower].points) {
                pos_lower = j;
            } else if (vet[j].points == vet[pos_lower].points and vet[j].victories > vet[pos_lower].victories) {
                pos_lower = j;
            } else if (vet[j].points == vet[pos_lower].points and
                       vet[j].victories == vet[pos_lower].victories and
                       vet[j].goals > vet[pos_lower].goals) {
                pos_lower = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_lower];
        vet[pos_lower] = temp;
    }
}

int main() {
    unsigned S;

    cin >> S;

    teams *v = new teams[S];

    for (unsigned i = 0; i < S; i++) {
        cin >> v[i].name
            >> v[i].points
            >> v[i].victories
            >> v[i].goals;
    }

    cout << endl;
    
    sort(v, S);

    for (unsigned i = 0; i < S; i++) {
        cout << v[i].name << " "
             << v[i].points << " "
             << v[i].victories << " "
             << v[i].goals;
        cout << endl;
    }

    delete[] v;

    return 0;
}