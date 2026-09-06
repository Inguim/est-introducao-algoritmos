// Pedro Álvares Cabral precisa organizar as caravelas para carregarem os cavalos, as vacas e as galinhas necessárias para a viagem para as Índias.
// A caravela possui um limite de carga e você deverá calcular a quantidade máxima de cada tipo de animal que a caravela poderá carregar. Lembre-se que Cabral possui uma quantidade limitada de cada tipo de animal, além disso, ele também informou qual o tipo de animal que é prioritário e que tipo de informação ele precisa para poder finalizar sua tarefa.
// A tabela abaixo apresenta o peso de cada tipo de animal:
// Tipo 	Peso
// Cavalo 	250
// Vaca 	150
// Galinha 	2
// Informações extras:
//     O objetivo é colocar o máximo de animais, dessa forma os animais de pequeno porte tem prioridade.
//     Ao final do processo é necessário ter como informação a quantidade de cada animal que não pode ser incluído na caravela.
// Entradas:
//     Limite de Carga (Inteiro).
//     Quantidade de cavalos disponíveis (Inteiro).
//     Quantidade de vacas disponíveis (Inteiro).
//     Quantidade de galinhas disponíveis (Inteiro).
// Saída:
//     Quantidade de animais que NÃO podem ser incluídos numa caravela na seguinte ordem: Cavalos, Vacas e Galinhas.
// Exemplo de entrada:
// 3000
// 10
// 10
// 10
// Exemplo de saída:
// 5
// 0
// 0
#include <iostream>

using namespace std;

int main() {
    int limit = 0, quantity;
    int qttHorse, qttCow, qttChicken;
    int leftHorse = 0, leftCow = 0, leftChicken = 0;
    int WEIGHT_HORSE = 250, WEIGHT_COW = 150, WEIGHT_CHICKEN = 2;

    cin >> limit >> qttHorse >> qttCow >> qttChicken;

    quantity = limit / WEIGHT_CHICKEN;
    if (quantity < qttChicken) leftChicken = qttChicken - quantity;
    limit -= qttChicken * WEIGHT_CHICKEN;

    quantity = limit / WEIGHT_COW;
    if (quantity < qttCow) leftCow = qttCow - quantity;
    limit -= qttCow * WEIGHT_COW;

    quantity = limit / WEIGHT_HORSE;
    if (quantity < qttHorse) leftHorse = qttHorse - quantity;

    cout << leftHorse << endl << leftCow << endl << leftChicken << endl;

    return 0;
}