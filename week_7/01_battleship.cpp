// No dia dos pais você o convidou a jogar Batalha Naval, pois sabe que gosta muito. Seu pai ficou super animado!
// Para quem não conhece o jogo, normalmente ele é jogado sobre uma cartela de papel com vários quadradinhos (matriz de N x N linhas e colunas), onde são colocados os navios, fragatas, destróiers, encouraçados, lanchas etc. Em geral, os destróiers são os maiores, ocupando até cinco quadradinhos, e as lanchas as menores, ocupando só um quadradinho. Ambos o jogadores marcam em sua respectiva cartela as embarcações, mas sem mostrar onde as colocou para o oponente.
// Uma vez marcadas as embarcações na cartela, começa o jogo. A cada jogada, um jogador "dispara" três bombas em três quadradinhos diferentes, dizendo em voz alta a linha e a coluna onde atingem cada bomba. O jogador oponente responde se atingiu uma embarcação, ou se acertou apenas a água. Depois, o segundo jogador é que dispara três bombas, e assim por diante. Ganha quem destruir todas as embarcações do oponente primeiro.
// Faça um programa que leia uma "cartela" marcada com as embarcações (1 Destróier, 2 Fragatas e 3 Lanchas), e 0 indicando água. Em seguida, leia a linha e a coluna das três bombas disparadas. O programa deve então dizer onde atingiu cada bomba disparada, ou seja, se acertou a embarcação destróier, deve mostrar 'destroier; se atingiu a fragata, deve mostrar 'fragata'; a lancha, mostrar 'lancha; e se não atingiu nenhuma embarcação dever mostrar 'agua'.
// OBS1: preste atenção para a posição da linha e coluna, pois o 1o. quadradinho -- da 1a. linha e da 1a. coluna -- deve ser o primeiro na cartela. Assim, a posição 0,0 é a do 1o. quadradinho; veja no exemplo de entrada abaixo.
// OBS2: as respostas (agua, fragata, lancha e destroier) devem estar todas em minúsculas e sem acentos.
// Entradas:
//     Matriz de 15 linhas por 15 colunas com as marcações das seis embarcações (como mostrado no exemplo abaixo)
//     Três tiros de bomba (linha e coluna do tiro) 
// Saídas:
//     Qual o tipo de embarcação atingida
// Exemplo de entrada:
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
// 0 0 0 2 2 2 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 0 0 3 0 
// 0 0 2 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 2 0 0 3 0 0 0 0 0 0 0 0 0 
// 0 0 2 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 1 1
// 14 14
// 4 11
// Exemplo de Saída:
// lancha
// agua
// destroier
// 2o. Exemplo de entrada:
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 3 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 3 0 0 0
// 0 2 2 2 0 0 0 0 3 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 1 1 1 1 1 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 12 5
// 5 10
// 7 6
// 2o. Exemplo de Saída:
// agua
// agua
// fragata
#include <iostream>

using namespace std;

int main() {
    const int LINE = 15, COL = 15, SIZE = 3;
    int m[LINE][COL];
    int shotL[SIZE], shotC[SIZE];
    int i, j, shot = 0, local;

    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COL; j++) {
            cin >> m[i][j];
        }
    }

    for (i = 0; i < SIZE; i++) {
        cin >> shotL[i] >> shotC[i];
    }

    for (shot = 0; shot < SIZE; shot++) {
        local = m[shotL[shot]][shotC[shot]];
        switch (local) {
            case 1:
                cout << "destroier" << endl;
                break;
            case 2:
                cout << "fragata" << endl;
                break;
            case 3:
                cout << "lancha" << endl;
                break;
            default:
                cout << "agua" << endl;
                break;
            }
    }

    return 0;
}