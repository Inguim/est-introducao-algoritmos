// Uma empresa decidiu dar uma gratificação de natal a seus funcionários, baseada no número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
// H=número de horas extras - (2/3*(número de horas-faltas))
// H(Minutos) 	Prêmio(R$)
// Maior que 2400 	500
// Entre 1800 e 2400 (incluso) 	400
// Entre 1200 e 1800 (incluso) 	300
// Entre 600 e 1200 (incluso) 	200
// Menor igual a 600 	100
// Entradas:
//     Número de horas extras (float).
//     Número de horas-faltas (float).
// Saídas:
//     Prêmio que o funcionário irá receber.
// Exemplo de Entrada:
// 24
// 3
// Exemplo de Saída:
// 300
#include <iostream>

using namespace std;

int main() {
    float overtime, missedHours, calculatedTime;

    cin >> overtime >> missedHours;

    calculatedTime = overtime - ((2 / 3) * missedHours);
    calculatedTime = calculatedTime * 60;
    
    if (calculatedTime > 2400.0) {
        cout << 500 << endl;
    } else if (calculatedTime > 1800.0) {
        cout << 400 << endl;
    } else if (calculatedTime > 1200.0) {
        cout << 300 << endl;
    } else if (calculatedTime > 600.0) {
        cout << 200 << endl;
    } else {
        cout << 100 << endl;
    }

    return 0;
}