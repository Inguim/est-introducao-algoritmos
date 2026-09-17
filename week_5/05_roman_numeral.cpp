// Escreva um subprograma que receba um número arábico inteiro e retorne o seu correspondente em número romano. A função deve ser capaz de gerar o número romano para qualquer número natural no intervalo [1,50]. Caso seja digitado um valor fora do intervalo válido, uma mensagem "NUMERO INVALIDO" deve ser mostrada e o programa deve esperar por uma nova entrada. A execução deve ser encerrada se um valor negativo for digitado. As operações de leitura e escrita de dados devem ser realizadas na função principal.
// Entradas:
//     Número arábico a ser convertido para número romano.
// Saídas:
//     Número romano correspondente ao valor inserido.
// Exemplo de Entrada:
// 13
// 9
// 16
// 72
// 34
// -8
// Exemplo de Saída:
// XIII
// IX
// XVI
// NUMERO INVALIDO
// XXXIV
#include <iostream>

using namespace std;

string numberToRomanNumeral(int number) {
    string roman = "";

    if (number == 50) return "L";

    if (number >= 40) {
        roman += "XL";
        number -= 40;
    }

    while (number >= 10) {
        roman += "X";
        number -= 10;
    }

    if (number == 9) {
        roman += "IX";
        number -= 9;
    }

    if (number >= 5) {
        roman += "V";
        number -= 5;
    }

    if (number == 4) {
        roman += "IV";
        number -= 4;
    }

    while (number >= 1) {
        roman += "I";
        number -= 1;
    }

    return roman;
}

int main() {
    int number = 1;

    while (number >= 1) {
        cin >> number;

        if (number > 0) {
            if (number < 1 or number > 50) cout << "NUMERO INVALIDO" << endl;
            else {
                cout << numberToRomanNumeral(number) << endl;
            }
        }
    } ;
    
    return 0;
}