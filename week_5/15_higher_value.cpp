#include <iostream>
#include <fstream>

using namespace std;

int higherValue(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int number, higher;

    ifstream inputFile("valores.txt");

    inputFile >> higher;
    while (inputFile >> number) {
        higher = higherValue(higher, number);
    }
    inputFile.close();
    cout << higher << endl;

    return 0;
}