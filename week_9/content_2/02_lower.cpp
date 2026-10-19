#include <iostream>

using namespace std;

int find(int v[], int n) {
    if (n == 1) return v[0];
    int lower = find(v + 1, n - 1);
    lower = v[0] < lower ? v[0] : lower;
    return lower;
}

int main() {
    unsigned N;
    int lower;

    cin >> N;

    int *v = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> v[i];
    }

    lower = find(v, N);

    cout << lower << endl;
    
    return 0;
}