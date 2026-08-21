// Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// • O número digitado ao quadrado;
// • O número digitado ao cubo;
// • A raiz quadrada do número digitado;
// Entradas:
//     Número real positivo (float).
// Saídas:
//     Número elevado ao quadrado.
//     Número elevado ao cubo.
//     Raiz quadrada do número.
// Exemplo de Entrada:
// 16
// Exemplo de Saída:
// 256
// 4096
// 4
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float value;
	
	cin >> value;
	
	cout << pow(value, 2) << endl;
	cout << pow(value, 3) << endl;
	cout << sqrt(value);
  
    return 0;
}