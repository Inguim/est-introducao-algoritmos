// Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione seus valores em 90º, em sentido horário, e imprima a matriz resultante.
// Por exemplo, considere a matriz de entrada:
//  1   2    3    4    5    6
//  8   9   10   11   12   13   
// 15  16   17   18   19   20   
// 22  23   24   25   26   27   
// 29  30   31   32   33   34
// 36  37   38   39   40   41
// Ao rotacionar essa matriz em 90º, em sentido horário, obtemos:
// 36   29   22    15   8   1
// 37   30   23    16   9   2   
// 38   31   24    17   10  3   
// 39   32   25    18   11  4   
// 40   33   26    19   12  5
// 41   34   27    20   13  6
// Entradas:
//     Os elementos da matriz (valores inteiros), da esquerda para a direita, de cima para baixo (uma linha de cada vez).
// Saída:
//     Matriz rotacionada em 90º em sentido horário.
// Exemplo de Entrada:
// 10  0   2   3  -1   8
//  4  5  16   9  13  15
// 27 -3  18  21  38  46
// 35 14  27  -7  54  12
// 77 20  25  33  90  64
// 22 45  18  50  65  81
// Exemplo de Saída:
// 22  77  35  27  4  10 
// 45  20  14  -3  5  0 
// 18  25  27  18  16 2 
// 50  33  -7  21  9  3 
// 65  90  54  38  13 -1 
// 81  64  12  46  15 8
#include <iostream>

using namespace std;

int main() {
    const int ROW = 6, COL = 6;
    int m[ROW][COL], rotated[ROW][COL];
    int i, j, k;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cin >> m[i][j];
        }
    }

    for (j = COL - 1; j >= 0; j--) {
        k = ROW - 1;
        for (i = 0; i < ROW; i++) {
            rotated[j][k--] = m[i][j];
        }
    }

    // // Abordagem usando formula 
    // for (i = 0; i < ROW; i++) {
    //     for (j = 0; j < COL; j++) {
    //         rotated[j][ROW - 1 - i] = m[i][j];
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