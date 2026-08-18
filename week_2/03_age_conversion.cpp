#include <iostream>
using namespace std;

int main()
{
    int idade, meses, semanas, dias;

    cin >> idade;
    
    meses = idade * 12;
    semanas = idade * 48;
    dias = 30 * meses;

    cout << meses << endl << semanas << endl << dias << endl;

    return 0;
}