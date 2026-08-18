#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int serieProduto, serieCaixa;

    cin >> serieProduto;
    
    serieCaixa = ceil((float) serieProduto / 6);

    cout << serieCaixa;

    return 0;
}