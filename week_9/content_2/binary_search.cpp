#include <iostream>

using namespace std;

int main() {
    int K, N = 10;
    int v[N];
    int i, index = -1;
    int index_start = 0;
    int index_final = N - 1;
    int middle;

    for (i = 0; i < N; i++) {
        cin >> v[i];
    }

    cin >> K;

    while (index_start <= index_final) {
        middle = (index_start + index_final) / 2;
        if (K == v[middle]) {
            index = middle;
            index_start = index_final + 1; // stop while
        } else {
            if (K > v[middle]) index_start = middle + 1;
            else index_final = middle - 1;
        }
    }
    
    cout << index << endl;

    return 0;
}