// Um grupo de atletas resolveu se preparar para correr a Corrida de São Silvestre. Para auxiliar na preparação, pretende-se guardar os dados de cada corredor e suas informações dos treinamentos. Com isso, espera-se levantar informações que possam ajudar os corredores a direcionarem seus treinamentos.
// Faça um programa que receba o número de atletas do grupo e permita guardar os dados de cada corredor em um registro com as seguintes informações: código do atleta, primeiro nome, idade, peso e sexo (M para masculino e F para feminino). O programa deve também guardar os dados de treinamento sabendo-se que, em cada treino, cada atleta corre uma determinada distância e é medido o tempo gasto. Portanto, o programa deve ter um registro com: dia do treino (ignore mês e ano), código do atleta, distancia percorrida (km, real) e tempo gasto (minutos). Os dados dos treinamentos devem ser lidos até que um dia -1 seja digitado.
// O programa deve exibir o nome e a distância total percorrida pelo atleta mais velho do sexo masculino, o nome e a idade do atleta que participou de mais dias de treino (em caso de empate, considerar o que encontrar primeiro) e o nome e o tempo médio diário de treino de cada atleta.
// Obs.1: quando for digitado dia de valor -1 não serão digitados os valores dos demais campos.
// Obs.2: considere que em cada dia existe apenas um registro de treino para cada atleta.
// Entrada:
//     A quantidade de corredores a serem registrados.
//     Os dados de todos os corredores (código, nome, idade, peso e sexo).
//     Os dados de treinamento (dia, código, distância e tempo).
// Saída:
//     O nome e a distância total percorrida pelo atleta mais velho do sexo masculino (se nenhum homem for registrado, exibir somente -1).
//     O nome e a idade do atleta que participou de mais dias de treino (em caso de empate, considerar o que encontrar primeiro).
//     O nome e o tempo médio diário de treino de cada atleta.
// Exemplo de entrada:
// 	3
// 	1 Joao	30	80	M
// 	2 Maria	25	68	F
// 	3 Pedro	40	95	M
// 	1 1 10.4 30
// 	1 2 6.2 25
// 	1 3 8.0 36
// 	2 1 12.4 32
// 	2 2 7.1 27
// 	2 3 8.1 35
// 	3 1 12.0 30
// 	3 3 9.1 38
// 	-1
// Exemplo de saída:
// 	Pedro 25.2
// 	Joao 30
// 	Joao 30.6667
// 	Maria 26
// 	Pedro 36.3333
#include <iostream>
#include <string>

using namespace std;

struct atlet {
    int id = -1;
    string name;
    int age = 0;
    float weight;
    char gender;
    float totalDistance = 0;
    int totalMinutes = 0;
    int totalDays = 0;
};

struct training {
    int day;
    int atletId;
    float distance;
    int minutes;

};

int findAtlet(atlet a[], unsigned S, int id) {
    int index = -1;
    for (unsigned i = 0; i < S; i++) {
        if (a[i].id == id) {
            index = i;
            i = S;
        }
    }
    return index;
}

atlet findAtletWithMoreTrainings(atlet a[], unsigned S) {
    atlet more;
    for (unsigned i = 0; i < S; i++) {
        if (a[i].totalDays > more.totalDays) {
            more = a[i];
        }
    }
    return more;
}

void showAverageTrainingTime(atlet a[], unsigned S) {
    for (unsigned i = 0; i < S; i++) {
        cout << a[i].name << " " << (a[i].totalMinutes / (float) a[i].totalDays) << endl;
    }
}

int main() {
    unsigned S;
    int day = 0;
    atlet older, moreTraining;
    unsigned olderIndex;
    training trainingDay;

    cin >> S;

    atlet *atlets = new atlet[S];
    for (unsigned i = 0; i < S; i++) {
        cin >> atlets[i].id
            >> atlets[i].name
            >> atlets[i].age
            >> atlets[i].weight
            >> atlets[i].gender;

        if (atlets[i].gender == 'M' and atlets[i].age > older.age) {
            older = atlets[i];
            olderIndex = i;
        }
    }

    do {
        cin >> day;

        if (day != -1) {
            trainingDay.day = day;
            cin >> trainingDay.atletId
                >> trainingDay.distance
                >> trainingDay.minutes;

            int indexAtlet = findAtlet(atlets, S, trainingDay.atletId);
            if (indexAtlet != -1) {
                atlets[indexAtlet].totalDays++;
                atlets[indexAtlet].totalDistance += trainingDay.distance;
                atlets[indexAtlet].totalMinutes += trainingDay.minutes;
            }
        }

    } while (day != -1);
    
    if (older.id != -1) {
        older = atlets[olderIndex];
        cout << older.name << " " << older.totalDistance << endl;
    } else cout << -1 << endl;

    moreTraining = findAtletWithMoreTrainings(atlets, S);
    cout << moreTraining.name << " " << moreTraining.age << endl;

    showAverageTrainingTime(atlets, S);

    delete[] atlets;

    return 0;
}
