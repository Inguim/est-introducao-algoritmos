// Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione os seus valores em 180º, em sentido horário, e imprima a matriz resultante.
// Por exemplo, considere a matriz de entrada:
//  1   2    3    4    5    6
//  7   8    9   10   11   12   
// 13  14   15   16   17   18   
// 19  20   21   22   23   24   
// 25  26   27   28   29   30
// 31  32   33   34   35   36
// Ao rotacionar essa matriz em 180º obtemos:
// 36   35   34    33   32  31
// 30   29   28    27   26  25   
// 24   23   22    21   20  19   
// 18   17   16    15   14  13   
// 12   11   10    9    8   7
// 6    5    4     3    2   1
// Entradas:
//     Os elementos da matriz (valores inteiros), da esquerda para a direita, de cima para baixo (uma linha de cada vez).
// Saída:
//     Matriz rotacionada em 180º, em sentido horário.
// Exemplo de Entrada:
// 10 -1   3  4  0   9
// 65 12  30 47 99 100
// 10 11  12 13 14  15
// 26 51 -87  0  2   3
// 45 16   7 21 36  40
//  1  2   3  4  5   6
// Exemplo de Saída:
//   6  5  4   3  2  1
//  40 36 21   7 16 45
//   3  2  0 -87 51 26
//  15 14 13  12 11 10
// 100 99 47  30 12 65
//   9  0  4   3 -1 10
#include <iostream>

using namespace std;

int main() {
    const int ROW = 6, COL = 6;
    int m[ROW][COL];
    int rotated[ROW][COL];
    int i, j, k = ROW;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cin >> m[i][j];
        }
    }

    for (i = 0; i < ROW; i++) {
        k = ROW - 1;
        for (j = 0; j < COL; j++) {
            rotated[(ROW - 1) - i][j] = m[i][k--];
        }
    }

    // Abordagem usando logica padrão de matriz
    // melhor recomenda, remove a existencia da 
    // variavel K e sua realocação constante
    // for (int i = 0; i < ROW; i++) {
    //     for (int j = 0; j < COL; j++) {
    //         rotated[(ROW - 1) - i][(COL - 1) - j] = m[i][j];
    //     }
    // }

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}