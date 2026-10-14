// Faça um programa que recebe um número inteiro com no mínimo 3 dígitos e cria uma representação textual para o número com vírgula antes dos dois últimos dígitos, além de pontos para separar os outros dígitos de três em três para facilitar a leitura.
// Como o número pode ter muitos dígitos, e eles devem ser processados individualmente, é recomendável que seu armazenamento seja feito numa string (array de char) com capacidade para cerca de 40 dígitos. O número processado também deve usar o mesmo tipo.
// O programa não deve apenas escrever o número formatado, ele deve guardar a string numa variável (vetor) antes de escrever.
// Exemplo de entrada:
// 2187483647
// Exemplo de saída:
// 21.874.836,47
#include <iostream>
#include <string>

using namespace std;

int main() {
    string number, aux, result;
    int group = 0;
    
    cin >> number;

    for (int i = number.length() - 1; i >= 0; i--) {
        result = number[i] + result;
        group++;

        if (group == 2) result = "," + result;
        else if (group > 2 and (group - 2) % 3 == 0) {
            if (i > 0) result = "." + result;
        }
    }

    cout << result << endl;

    return 0;
}