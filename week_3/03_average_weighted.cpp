// A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:
// Nota 	Peso
// Trabalho de Laboratório 	2
// Avaliação Semestral 	3
// Exame Final 	5
// Faça um programa que receba as três notas do dispositivo de entrada padrão, calcule e mostre a média ponderada das notas obtidas pelo aluno. Seu programa deverá informar também o conceito obtido pelo aluno na disciplina, segundo a relação a seguir:
// Média Ponderada 	Conceito
// [8.0,10.0] 	A
// [7.0,8.0[ 	B
// [6.0,7.0[ 	C
// [5.0,6.0[ 	D
// [0.0,5.0[ 	E
// Entradas:
//     Três números em ponto flutuante que denotam as três notas obtidas pelo aluno. As notas são fornecidas de acordo com a seguinte ordem: nota do trabalho de laboratório, nota da avaliação semestral e, por último, nota do exame final. Cada dado de entrada será fornecido em uma linha diferente.
// Saídas:
//     Número em ponto flutuante que indica a média ponderada das notas passadas como entrada.
//     Caractere que indica o conceito obtido pelo aluno na disciplina.
// Exemplo de entrada:
// 7.5
// 5.0
// 6.1
// Exemplo de saída:
// 6.05
// C
// Exemplo de Entrada:
// 8.0
// 6.5
// 8.9
// Exemplo de Saída:
// 8.0
// A
#include <iostream>

using namespace std;

int main() {
    float scores1, scores2, scores3, avg;
    char letter; 

    cin >> scores1 >> scores2 >> scores3;

    avg = ((scores1 * 2) + (scores2 * 3) + (scores3 * 5)) / (2 + 3 + 5);

    if (avg >= 8.0) {
        letter = 'A';
    } else if (avg >= 7.0) {
        letter = 'B';
    } else if (avg >= 6.0) {
        letter = 'C';
    } else if (avg >= 5.0) {
        letter = 'D';
    } else {
        letter = 'E';
    }

    cout << avg << endl << letter << endl;

    return 0;
}