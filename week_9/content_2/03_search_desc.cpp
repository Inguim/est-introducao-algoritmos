#include <iostream>

using namespace std;

int find(int v[], int index_start, int index_final, int K) {
    int middle = (index_start + index_final) / 2;   
    if (K == v[middle]) return middle;
    if (index_start < index_final) {
        if (v[middle] < K) return find(v, index_start, middle - 1, K);
        return find(v, middle + 1, index_final, K);
    }
    return -1;
}

int main() {
    unsigned N;
    int number;
    int index;

    cin >> N;

    int *V = new int[N];

    for (unsigned i = 0; i < N; i++) {
        cin >> V[i];
    }

    cin >> number;

    index = find(V, 0, N - 1, number);

    cout << index << endl;
    
    return 0;
}