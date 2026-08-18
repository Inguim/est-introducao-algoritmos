#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, aux;
    float peri, area;

    cin >> a >> b;
    cout << a << " " << b << endl;
    
    aux = a;
    a = b;
    b = aux;

    cout << a << " " << b << endl;

    return 0;
}