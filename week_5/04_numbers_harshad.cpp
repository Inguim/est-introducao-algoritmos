// Na matemática, um número Harshad é um número natural que é divisível pela soma dos seus dígitos. O número 6804, por exemplo, é um número Harshad pois 6+8+0+4 = 18, e 6804 é divisível por 18.
// Escreva um programa que verifica se um número é número Harshad. É preciso criar dois subprogramas:
//     Um subprograma que recebe um número natural e retorna a soma de seus dígitos.
//     Um subprograma que recebe um número natural e retorna um valor lógico, indicando se ele é um número Harshad.
// Para uma boa nota, é preciso um bom planejamento. Não repita código, não repita processamento, escolha nomes significativos, não use parâmetros que não entradas dos subprogramas e não misture interface e processamento (esses dois subprogramas não podem ter operações de leitura ou escrita).
// Entradas:
//     Um número inteiro e positivo.
// Saídas:
//     O resto da divisão do número pela soma de seus digitos.
//     Um texto (sim/nao), indicando se o número tem a propriedade em questão. Atenção para a ausência de acento em "nao".
// Exemplo de Entrada:
// 81
// Exemplo de Saída:
// 0 sim
// Exemplo de Entrada:
// 143
// Exemplo de Saída:
#include <iostream>

using namespace std;

int digitSum(int number = 6804) {
    int sum = 0;

    if (number == 0) return 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

bool verifyHarshad(int number) {
    int sum = digitSum(number);
    return number % sum == 0;
}

int main () {
    int number;
    int sum;
    bool isHarshad;

    cin >> number;

    sum = digitSum(number);
    isHarshad = verifyHarshad(number);

    cout << (number % sum) << (isHarshad ? " sim" : " nao") << endl;

    return 0;
}