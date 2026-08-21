// Faça um programa que leia do arquivo notas.txt três notas, e seus respectivos pesos. O programa deve calcular e imprimir em um arquivo final.txt a média ponderada dos valores informados. Use fixed e setprecision() para informar o resultado com duas casas decimais
// Entrada (arquivo notas.txt):
//     Primeira nota e seu peso (valores inteiros)
//     Segunda nota e seu peso (valores inteiros)
//     Terceira nota e seu peso (valores inteiros)
// Saída (arquivo final.txt):
//     Média ponderada dos valores informados (em ponto flutuante, com duas casas decimais)
// Exemplo de Entrada (notas.txt):
// 50 30
// 60 20
// 70 50
// Exemplo de Saída final.txt):
// 62.00
// Exemplo de Entrada (notas.txt):
// 50 4
// 60 5
// 70 3
// Exemplo de Saída final.txt):
// 59.17
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    int notas[3], pesos[3];
    int i = 0;

    ifstream arquivo("notas.txt");

    if (arquivo) {
        while (i < 3) {
            arquivo >> notas[i] >> pesos[i]; 
            i++;
        }
        arquivo.close();

        ofstream arquivo("final.txt");
    
        if (arquivo) {
            int dividendo = (notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2]);
            int divisor = pesos[0] + pesos[1] + pesos[2];
            arquivo << fixed << setprecision(2);
            arquivo << dividendo / float(divisor) << endl;
        }
    }

    return 0;
}