// Mjölnir é a arma utilizada pelo Deus do Trovão (Thor). Existe muita discussão a respeito do peso desta arma. Alguns afirmam que ele foi construído a partir de materiais encontrados em uma estrela de nêutrons, outros afirmam que ele foi apenas forjado em uma estrela e foi construído com um material chamado Uru. De qualquer forma é possível estimar o peso do martelo sabendo suas medidas e também o peso por cm3 do material utilizado. Dessa forma faça um programa que ajude os aficionados a resolver a questão assumindo que o martelo tem o formato de um Paralelepípedo e que a fórmula para cálculo do volume é v = altura x largura x profundidade. As informações de entrada devem ser lidas a partir do arquivo entrada.txt
// Entradas (a partir do arquivo entrada.txt:
//     Valor real da estimativa da profundidade do Mjölnir em cm.
//     Valor real da estimativa da altura do Mjölnir em cm.
//     Valor real da estimativa da largura do Mjölnir em cm.
//     Valor real da estimativa do peso do cm3 (densidade) do material usado na construção do Mjölnir.
// Saídas:
//     Peso do Mjölnir em um valor real.
// Exemplo de Entrada (conteúdo do arquivo entrada.txt):
// 2.0
// 3.0
// 5.0
// 22.5
// Exemplo de Saída:
// 675.0
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // 0 - height | 1 - width | 2 - length
    float dimensions[3], weight;

    ifstream inputFile("entrada.txt");
    inputFile >> dimensions[0] >> dimensions [1] >> dimensions[2] >> weight;
    inputFile.close();

    cout << fixed << setprecision(1);
    cout << dimensions[0] * dimensions[1] * dimensions[2] * weight << endl;

    return 0;
}