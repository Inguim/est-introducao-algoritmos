// Faça um programa que leia dados de vários doadores de sangue (nome e tipo sanguíneo), após isso leia um determinado tipo sanguíneo. O programa deve mostrar quais pessoas podem doar sangue para este tipo sanguíneo na ordem de melhor compatibilidade. No caso de empate para a compatibilidade, a ordem da entrada de dados serve como desempate. Os dados dos doadores de sangue devem ser armazenados na forma de registros.
//     Para um paciente que necessita do tipo sanguíneo A, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: A e O.
//     Para um paciente que necessita do tipo sanguíneo B, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: B e O.
//     Para um paciente que necessita do tipo sanguíneo AB, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: AB, A, B e O.
//     Para um paciente que necessita do tipo sanguíneo O, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: O.
// Entradas:
//     A quantidade de doadores (número inteiro positivo).
//     Nome do doador (texto sem espaços) e tipo sanguíneo (texto sem espaços).
//     Tipo sanguíneo a comparar (texto sem espaços).
// Saídas:
//     Nomes dos doadores em ordem de melhor compatibilidade.
// Exemplo de Entrada:
// 10  
// Jorge O  
// Luiza AB  
// Sara A  
// Elder B  
// Matheus A  
// Gabriela AB  
// Laiz A  
// Talita O  
// Simone O  
// Ana AB  
// AB 
// Exemplo de Saída:
// Luiza
// Gabriela  
// Ana  
// Sara  
// Matheus  
// Laiz  
// Elder  
// Jorge  
// Talita  
// Simone
#include <iostream>
#include <string>

using namespace std;

struct doador {
    string nome;
    string tipo;
};

void prioridadeA(doador d[], unsigned N) {
    string ordem[2] = {"A", "O"};

    for (unsigned i = 0; i < 2; i++) {
        for (unsigned j = 0; j < N; j++) {
            if (d[j].tipo == ordem[i]) {
                cout << d[j].nome << endl;
            }
        }
    }
    
}

void prioridadeB(doador d[], unsigned N) {
    string ordem[2] = {"B", "O"};

    for (unsigned i = 0; i < 2; i++) {
        for (unsigned j = 0; j < N; j++) {
            if (d[j].tipo == ordem[i]) {
                cout << d[j].nome << endl;
            }
        }
    }
    
}

void prioridadeAB(doador d[], unsigned N) {
    string ordem[4] = {"AB", "A", "B", "O"};
    unsigned i = 0;
    
    while (i < 4) {
        if (i == 0) { // tipo AB
            for (unsigned j = 0; j < N; j++) {
                if (d[j].tipo == "AB") {
                    cout << d[j].nome << endl;
                }
            }
        } else {
            for (unsigned j = 0; j < N; j++) {
                if (d[j].tipo == ordem[i]) {
                    cout << d[j].nome << endl;
                }
            }
        }
        i++;
    }
}

void prioridadeO(doador d[], unsigned N) {
    for (unsigned j = 0; j < N; j++) {
        if (d[j].tipo == "O") {
            cout << d[j].nome << endl;
        }
    } 
}

int main() {
    unsigned N;
    string emBusca;

    cin >> N;

    doador *doadores = new doador[N];
    for (unsigned i = 0; i < N; i++) {
        cin >> doadores[i].nome >> doadores[i].tipo;
    }

    cin >> emBusca;

    if (emBusca == "A") {
        prioridadeA(doadores, N);
    } else if (emBusca == "B") {
        prioridadeB(doadores, N);
    } else if (emBusca == "AB") {
        prioridadeAB(doadores, N);
    } else if (emBusca == "O") {
        prioridadeO(doadores, N);
    }
    

    delete[] doadores;
    return 0;
}