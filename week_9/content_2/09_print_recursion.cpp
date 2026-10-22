#include <iostream>

using namespace std;

void printNumber(int n) {
    if (n < 0) return;
    printNumber(n - 1);
    cout << n << " ";
}

int main() {
    int N;

    cin >> N;

    printNumber(N);
    cout << endl;

    return 0;
}