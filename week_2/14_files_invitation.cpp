#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    float cost, invitationPrice;
    float minimumCost;

    ifstream inputFile("teatro.txt");
    inputFile >> cost >> invitationPrice;
    inputFile.close();

    minimumCost = ceil(cost / invitationPrice);

    cout << minimumCost << endl;

    ofstream outputFile("convite.txt");
    outputFile << minimumCost;

    return 0;
}