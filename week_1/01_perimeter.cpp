#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double raio, area;
    char controle;

    cout << "Deseja ler um valor para o raio? (s-sim/n-nao)" << endl;
    cin >> controle;

    while(controle == 's') {
        cout << "Digite o valor do raio: ";
        cin >> raio;
        area = M_PI*pow (raio, 2);
        cout << "A area é: " << area << endl;

        cout << "Deseja ler um valor para o raio? (s-sim/n-nao)" << endl;
        cin >> controle;
    }
    
    return 0;
}