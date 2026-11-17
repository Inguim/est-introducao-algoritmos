// Uma pizzaria precisa entregar mais pizzas que estava planejando. Entretanto, para agilizar as entregas, seu motoboy atenderá somente os N clientes mais próximos da pizzaria. Como saída, o programa deverá retornar a soma do valor das pizzas nos N clientes mais próximos da pizzaria.
// Lembre: N é somente uma porção de clientes de um total de clientes que serão fornecidos na entrada.
// Para cada cliente, a pizzaria possui os seguintes dados (usar um registro):
// Nome do cliente (string)
// Coordenada x do cliente (inteiro)
// Coordenada y do cliente (inteiro)
// Distância da pizzaria (inteiro)
// Valor da pizza (real) .
// Para cada cliente, deverá ser criado um registro com os dados acima, e a ordenação deverá ser feita usando o algoritmo InsertionSort. Não haverá clientes com distância repetida.
// Dica: A distância entre dois pontos pode ser calculada por: sqrt [(x1-x2)^2 + (y1-y2)^2]
// Entradas:
//     Número de clientes que serão atendidos
//     Coordenada x da pizzaria
//     Coordenada y da pizzaria
//     Número total de clientes
//     Nome cliente 1
//     Coordenada x do cliente 1
//     Coordenada y do cliente 1
//     Valor da pizza do cliente 1
//     Nome cliente 2
//     Coordenada x do cliente 2
//     Coordenada y do cliente 2
//     Valor da pizza do cliente 2
//     ...
// Saídas :
//     Soma do valor das pizzas dos N clientes mais próximos da pizzaria
// Exemplo de Entrada:
// 2
// 5 
// 5 
// 3
// Joao 
// 10 
// 5 
// 22.50 
// Lucas 
// 15 
// 30 
// 32.00 
// Maria 
// 20 
// 10 
// 21.00 
// Exemplo de Saída:
// 43.50
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct client {
    string name;
    int x;
    int y;
    int deliveryDistance;
    double pizzaValue;
};

void sort(client vet[], int tam) {
    client temp;
    int j;
    
    for (int i = 1; i < tam; i++) {
        temp = vet[i];
        j = i - 1;

        while (j >= 0 and temp.deliveryDistance < vet[j].deliveryDistance) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = temp;        
    }
}

int calcDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double sumServedClients(client v[], unsigned n) {
    double sum = 0.0;
    for (unsigned i = 0; i < n; i++) {
        sum += v[i].pizzaValue; 
    }
    return sum;
}

int main() {
    unsigned servedClients;
    unsigned totalClients;
    int deliveryX, deliveryY;

    cin >> servedClients
        >> deliveryX
        >> deliveryY
        >> totalClients;

    client *v = new client[totalClients];

    for (unsigned i = 0; i < totalClients; i++) {
        cin >> v[i].name
            >> v[i].x
            >> v[i].y
            >> v[i].pizzaValue; 
        v[i].deliveryDistance = calcDistance(v[i].x, v[i].y, deliveryX, deliveryY); 
    }

    sort(v, totalClients);

    double total = sumServedClients(v, servedClients);

    cout << total << endl;
    
    delete[] v;

    return 0;
}