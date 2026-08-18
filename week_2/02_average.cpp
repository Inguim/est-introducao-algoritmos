#include <iostream>
using namespace std;

int main()
{
    float media;
    int valor1, valor2, valor3, valor4;

    cin >> valor1 >> valor2 >> valor3 >> valor4;

    int soma = valor1 + valor2 + valor3 + valor4;
    media = float(soma) / 4;

    cout << media << endl;

    return 0;
}