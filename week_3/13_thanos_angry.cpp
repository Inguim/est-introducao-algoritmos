// Thanos aguarda pacientemente a chegada de seus comparsas, que irá lhe trazer, finalmente, mais jóias do infinito. Como ele está muito ansioso e irritado, implemente um algoritmo para calcular quanto tempo, em minutos, você, fiel escudeiro de Thanos, terá que suportar sua irritação. Para isso, você receberá o horário de saída da nave do comparsa e o horário prevista para chegada, que é informado em dois inteiros representando, respectivamente, horas e minutos. Para o cálculo, você irá levar em consideração que o tempo de viagem é inferior a 24 horas, já que os comparsas seriam destruídos caso demorassem mais que isso.
// Entradas:
//     Horário de saída da nave (dois inteiros representado horas e minutos)
//     Horário previsto para chegada da nave (dois inteiros representado horas e minutos)
// Saída:
//     Tempo de espera, em minutos
// Exemplo de Entrada:
// 12 59
// 18 01
// Exemplo de Saída:
// 302
// Exemplo de Entrada:
// 21 13
// 05 07
// Exemplo de Saída:
// 474
#include <iostream>

using namespace std;

int main() {
    int leaveHours, leaveMinutes;
    int arriveHours, arriveMinutes;
    int totalLeaveMinutes, totalArriveMinutes;
    int aux;

    cin >> leaveHours >> leaveMinutes >> arriveHours >> arriveMinutes;

    totalLeaveMinutes = (leaveHours * 60) + leaveMinutes;
    totalArriveMinutes = (arriveHours * 60) + arriveMinutes;

    if (leaveHours > arriveHours) {
        aux = 24 - leaveHours;
        aux += arriveHours;
        cout << (aux * 60) + (arriveMinutes - leaveMinutes) << endl;
    } else {
        cout << totalArriveMinutes - totalLeaveMinutes << endl;
    }

    return 0;
}