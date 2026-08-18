#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    float peri, area;

    cin >> a >> b >> c;

    peri = (a+b+c) / 2;
    area = sqrt(peri * (peri - a) * (peri - b) * (peri - c));

    cout << area;

    return 0;
}