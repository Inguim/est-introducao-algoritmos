// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
// Para isso utilize o código fornecido. Baixe-o, faça as correções necessárias e submeta para avaliação.
// Entradas:
//     Dois números reais representando as notas nas avaliações
// Saídas:
//     Número real correspondente a média ponderada das notas
// Exemplo de Entrada:
// 80
// 60
// Exemplo de Saída:
// 68
// Exemplo de Entrada:
// 85.3
// 48.9
// Exemplo de Saída:
// 63.46
#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, media;
    
    cin >> nota1;
    cin >> nota2;
    
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    
    cout << media;
  
    return 0;
}
