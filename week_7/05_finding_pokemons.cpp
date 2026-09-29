// Um caçador de Pokémons criou um aparelho para coletar múltiplos Pokémons simultaneamente, entretanto o aparelho tem duas restrições: Só pode ser disparado uma vez e só consegue coletar Pokémons a uma determinada distância (nem menos, nem mais). O caçador tem à sua disposição um mapa no formato de uma matriz. A matriz é sempre de um tamanho 7 por 7 e o centro da matriz possui sempre o número 9 representando o caçador. As outras posições da matriz possuem números de 0 a 8. Os números representam a importância do Pokémon. Faça um algoritmo que informada a distância do centro da matriz e calcule a soma das importâncias dos Pokémons encontrados.
// Os elementos a serem somados são definidos pela distância a partir do centro. No exemplo, esses elementos estão destacados em vermelho. A distância será sempre um número válido, ou seja, que represente um quadrado dentro do tamanho da matriz definida.
// Entradas:
//     Distância que representa o quadrado que deseja utilizar para calcular a soma das importâncias dos Pokémons.
//     Matriz contendo as importâncias dos Pokémons.
// Saídas:
//     Soma das importâncias dos Pokémons no quadrado definido.
// Exemplo de Entrada:
// 2
// 1 1 1 1 1 1 1
// 1 5 0 2 0 0 1
// 1 5 2 2 2 0 1
// 1 0 4 9 5 0 1
// 1 0 3 3 3 5 1
// 1 5 0 0 3 0 1
// 1 1 1 1 1 1 1
// Exemplo de Saída:
// 25
#include <iostream>

using namespace std;

int main() {
    const int ROW = 7, COL = 7;
    const int CENTER = 3;
    int m[ROW][COL];
    int i, j;
    int distance, start, end;
    int sum = 0;
    
    
    cin >> distance;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cin >> m[i][j];
        }
    }

    start = CENTER - distance;
    end = CENTER + distance;

    for (i = start; i <= end; i++) {
        if (i == start or i == end) {
            for (j = start; j <= end; j++) {
                if(m[i][j] != 9) sum += m[i][j];
            }
        } else {
            sum += m[i][start] + m[i][end];
        }
    }

    cout << sum << endl;

    return 0;
}