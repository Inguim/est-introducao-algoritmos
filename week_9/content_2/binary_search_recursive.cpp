#include <iostream>

using namespace std;

int search(int v[], int index_start, int index_final, int K) {
    int middle = (index_start + index_final) / 2;
    if (K == v[middle]) return middle;
    if (index_start < index_final) {
        if (v[middle] < K) return search(v, middle + 1, index_final, K);
        return search(v, index_start, middle - 1, K);
    }
    return -1;
}

int main() {
    int K, N = 10;
    int v[N];
    int index = -1;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    cin >> K;

    index = search(v, 0, N - 1, K);
    
    cout << index << endl;

    return 0;
}