// Gargamel irá mais uma vez tentar algo contra os Smurfs. Dessa vez, ele irá tentar não apenas uma, mas duas poções mágicas de uma única vez. Para isso, ele fez uma lista com os ingredientes de cada poção, para poder comprá-los na Lojinha da Maga Patalógica. Como ele fez duas listas, uma para cada poção, ele precisa agora juntá-las, mas destacando os itens que deverão ser comprados em dobro, ou seja, aqueles itens que fazem parte das duas listas.
// Para ajudá-lo, você irá implementar um algoritmo que recebe duas listas de ingredientes (dois vetores de strings) e imprime apenas os itens que estão nas duas listas ao mesmo tempo.. A impressão deverá ser feita seguindo a ordem da primeira lista. Considere que os itens das listas não possuem espaço, cada lista contém o número de ingredientes no topo e que nenhuma lista possui itens repetidos na própria lista. Caso não existam itens em comum, imprima NADA (todo em maiúsculo).
// Entradas:
//     Número de ingredientes da primeira lista.
//     ingredientes (strings) da primeira lista, separados por espaço.
//     Número de ingredientes da segunda lista.
//     ingredientes (strings) da segunda lista, separados por espaço.
// Saídas:
//     Elementos da lista resultante.
// Exemplo de Entrada:
// 5
// asa_de_aranha
// pe_de_piranha
// pelo_de_minhoca
// olho_de_pedra
// glitter_rosa
// 6
// glitter_rosa
// dente_de_rosa
// piolho_de_peixe
// pe_de_piranha
// pelo_de_minhoca
// bolor_laranja
// Exemplo de Saída:
// pe_de_piranha
// pelo_de_minhoca
// glitter_rosa
// Exemplo de Entrada:
// 5
// asa_de_aranha
// pe_de_piranha
// pelo_de_minhoca
// olho_de_pedra
// glitter_rosa
// 6
// glitter_azul
// dente_de_rosa
// piolho_de_peixe
// pe_de_cobra
// pelo_de_piranha
// bolor_laranja
// Exemplo de Saída:
// NADA
#include <iostream>
#include <string>

using namespace std;

int main() {
    int qtt1, qtt2;
    bool isIn = false;
    int k = 0;
    int i, j;
    
    cin >> qtt1;
    string list1[qtt1];

    for (i = 0; i < qtt1; i++) {
        cin >> list1[i];
    }

    cin >> qtt2;
    string list2[qtt2];

    for (i = 0; i < qtt2; i++) {
        cin >> list2[i];
    }
    
    for (i = 0; i < qtt1; i++) {
        isIn = false;
        for (j = 0; j < qtt2; j++) {
            if (list1[i] == list2[j]) {
                isIn = true;
                j = qtt2;
                k++;
            }
        }
        if (isIn) cout << list1[i] << endl;
    }

    if (k == 0) cout << "NADA" << endl;

    return 0;
}