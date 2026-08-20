#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int valor;
    int centena, dezena, unidade;

    cin >> valor;

    centena = valor / 100;
    dezena =  (valor / 10) % 10;
    unidade = valor % 10;

    cout << centena + dezena + unidade << endl;

    ofstream arquivo("saida.txt");

    if (arquivo) arquivo << (centena * dezena * unidade) << endl; 

    return 0;
}