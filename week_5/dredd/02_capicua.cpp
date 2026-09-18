// Um numero é dito ser capicua quando lida da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. O ano 2002
// por exemplo, é capicua. Implemente um função que recebe como parâmetro um inteiro e retorne um valor lógico que indica se o número
// tem essa caracteristica. Se o número não for capicua ele deve ser impresso na saida padrão.
// Seu programa deve ainda determinar qual o maior e o menor capicua. Se nenhum dos numeros for capicua, não se deve tentar 
// determinar o maior e o menor número e, consequentemente, esses dois valores não serão escritos;
// As funções serão parte de um programa cujo modulo principal le a quantidade de numeros a serem analisados e escreve os numeros que nao
// são capicuas, e dentre os capicuas, o menor e o maior valores. Os zeros a esquerda, se existirem, dever ser ignorados.

// Entrada programa:
// 1. A quantidade de valores a serem testados;
// 2. Numeros naturais a serem testados

// Saida programa:

// 1. Numeros que nao sao capicuas;
// 2. menor numero capicua lido, se houver;
// 3. maior numero capicua lido, se houver;

// Exemplo de entrada:
// 7
// 12
// 1122
// 131
// 13412
// 344312
// 1111111
// 4578754

// Exemplo saida:
// 12
// 1122
// 13412
// 344312
// 131
// 4578754
#include <iostream>

using namespace std;

// bool verificarCapicua(int valor) {
//     // Seguindo a logica do Marcos
//     // Logica usando potencia
//     int numero = valor;
//     int numeroInvertido = 0;
//     int qtdAlgarismo = 0;

//     while (valor > 0) {
//         valor /= 10;
//         qtdAlgarismo++;
//     }

//     valor = numero;
//     while (qtdAlgarismo - 1 > 0) {
//         numeroInvertido += (valor % 10) * pow(10, qtdAlgarismo - 1);
//         valor /= 10;
//         qtdAlgarismo--;
//     }

//     numeroInvertido += valor;
//     return numero == numeroInvertido;
// }

bool verficarCapicua(int valor) {
    //Logica usando string
    string numero = to_string(valor);
    string numeroInvertido = "";

    while (valor > 0) {
        numeroInvertido += to_string(valor % 10);
        valor /= 10;
    }

    return numero == numeroInvertido;
}

int main() {
    int numero;
    int quantidade;
    int maior = 0, menor = 0;
    int i = 0;
    bool eCapicua;

    cin >> quantidade;

    while (i < quantidade) {
        cin >> numero;
        eCapicua = verficarCapicua(numero);
        if (not eCapicua) cout << "nao e" << numero << endl;
        else {
            if (numero > maior) maior = numero;
            if (menor == 0) menor = numero;
            else if (numero <= menor) menor = numero;
        }
        i++;
    }

    if (menor != 0) cout << menor << endl;
    if (maior != 0) cout << maior << endl;

    return 0;
}