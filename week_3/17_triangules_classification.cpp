// Faça um programa que leia os comprimentos de três arestas e verifique se elas podem ou não ser lados de um triângulo. Lembre-se que só irá existir um triângulo se os seus lados obedeceram à seguinte regra:
//     um de seus lados deve ser maior que o valor absoluto (módulo) da diferença dos outros dois lados e menor que a soma dos outros dois lados.
// Em seguida, classifique este triângulo em equilátero, isósceles ou escaleno.
// Lembrete:
//     Triângulo equilátero: possui todos os lados congruentes, ou seja, iguais.
//     Triângulo isósceles: possui pelo menos dois lados de mesma medida.
//     Triângulo escaleno: as medidas dos três lados são todas diferentes.
// OBS: Caso as três medidas fornecidas não formem um triângulo, seu programa deverá exibir a mensagem NAO E UM TRIANGULO.
// Entradas:
//     Três valores reais que representam os comprimentos das arestas de um triângulo.
// Saída:
//     A mensagem EQUILATERO, ISOSCELES, ESCALENO ou NAO E UM TRIANGULO. Note que a grafia das palavras deve obrigatoriamente ser em letras maiúsculas e sem acentos.
// Exemplo de entradas:
// 7.0 2.0 7.0
// Exemplo de saída:
// ISOSCELES
// Exemplo de Entrada:
// 4.0 4.0 4.0
// Exemplo de Saída:
// EQUILATERO
// Exemplo de Entrada:
// 2.0 111.0 3.0
// Exemplo de Saída:
// NAO E UM TRIANGULO
// Exemplo de Entrada:
// 3.0 4.0 5.0
// Exemplo de Saída:
// ESCALENO
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    if (A > abs(B - C) and A < A + B) {
        if (A == B and B == C) {
            cout << "EQUILATERO" << endl;
        } else if (B == C or B == A or C == A) {
            cout << "ISOSCELES" << endl;
        } else {
            cout << "ESCALENO" << endl;
        }
    } else {
        cout << "NAO E UM TRIANGULO" << endl;
    }

    return 0;
}