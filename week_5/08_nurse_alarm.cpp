// Daniela é enfermeira em um grande hospital, e tem os horários de trabalho muito variáveis. Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com relógios despertadores. Recentemente ela ganhou de presente um relógio digital, com alarme com vários tons, e tem esperança que isso resolva o seu problema. No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. Por isso, carrega seu relógio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.
// Um problema que a tem atormentado na hora de dormir é saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. Mas ela realmente não é muito boa com números, e pediu sua ajuda para escrever uma função que, dada a hora corrente e a hora do alarme, determine o número de minutos que ela poderia dormir.
// Entrada:
//     A entrada contém vários casos de teste. Cada caso de teste é descrito em uma linha, contendo quatro números inteiros H1, M1, H2 e M2, com H1:M1 representando a hora e minuto atuais, e H2:M2 representando a hora e minuto para os quais o alarme despertador foi programado (0 ≤ H1 ≤ 23, 0 ≤ M1 ≤ 59, 0 ≤ H2 ≤ 23, 0 ≤ M2 ≤ 59). O final da entrada é indicado por uma linha que contém apenas quatro zeros, separados por espaços em branco.
// Saídas:
//     Para cada caso de teste da entrada seu programa deve imprimir uma linha no bloco principal, cada uma contendo um número inteiro, indicando o número de minutos que Daniela tem para dormir.
// Exemplo de Entrada:
// 1 5 3 5
// 23 59 0 34
// 21 33 21 10
// 0 0 0 0
// Exemplo de Saída:
// 120
// 35
// 1417
#include <iostream>

using namespace std;

int calcTimeDiff(int startH, int startM, int endH, int endM) {
    int startInMinutes, endInMinutes;
    int MINUTES_BY_DAY = 24 * 60; 
    
    startInMinutes = (startH * 60) + startM;
    endInMinutes = (endH * 60) + endM;

    if (endInMinutes > startInMinutes) {
        return endInMinutes - startInMinutes;
    }
    // caso você tenha se perdido nessa parte
    // adiciona-se um dia ao endInMinutes pois se a data final é menor
    // logo se passou um dia entre as duas datas
    return (endInMinutes + MINUTES_BY_DAY) - startInMinutes;
}

int main() {
    int startH, startM, endH, endM;
    bool hasToStop = false;

    do {
        cin >> startH >> startM >> endH >> endM;
        if (startH == 0 and startM == 0 and endH == 0 and endM == 0) hasToStop = true;
        else cout << calcTimeDiff(startH, startM, endH, endM) << endl;
    } while (not hasToStop);

    return 0;
}