#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int A, SP;
    int V, SH;

    fstream inputFile("entrada.txt");
    inputFile >> A >> SP;
    inputFile.close();

    V = (2 * A - SP) / 3;
    SH = A - 2 * V;

    ofstream outputFile("saida.txt");
    outputFile << SH << endl << V;
    outputFile.close();

    return 0;
}