// A proporção áurea, número de ouro, número áureo ou proporção de ouro é uma constante real algébrica irracional denotada pela letra grega phi (Φ), em homenagem ao escultor Phideas (Fídias), que a teria utilizado para conceber o Parthenon, e com o valor arredondado a três casas decimais de 1,618. Também é chamada de seção áurea , razão áurea, razão de ouro, média e extrema razão, divina proporção, divina seção, proporção em extrema razão, divisão de extrema razão ou áurea excelência. O número de ouro é ainda frequentemente chamado razão de Phidias [Wikipédia].
// Faça um procedimento que calcula o valor aproximado de phi usando a série de raízes abaixo:
// A quantidade de termos deverá ser passada como parâmetro para o procedimento e o resultado retornado por referência para o programa principal. O resultado deverá ser impresso no programa principal. Quanto mais termos usados, mais preciso será o resultado. A quantidade de termos da fórmula é a quantidade de raízes, incluindo a última que é a raiz de 1. Use uma variável do tipo ponto flutuante de precisão dupla (double) para conseguir cálculos mais precisos.
// Entradas:
//     A quantidade de termos (raízes) utilizados no cálculo.
// Saídas:
//     O resultado da série de raízes (valor aproximado de phi).
// Exemplo de entrada:
// 11
// Exemplo de saída:
// 1.61803
#include <iostream>
#include <cmath>

using namespace std;

void calcProportion(int precision, double &result) {
    result = 0.0;
    int i = 0;
    while (i < precision) {
        result = sqrt(1.0 + result);
        i++;
    }
}

int main() {
    int precision;
    double result;

    cin >> precision;

    calcProportion(precision, result);

    cout << result << endl;

    return 0;
}