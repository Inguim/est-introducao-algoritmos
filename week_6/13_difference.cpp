#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    bool isIn = false;
    int a[SIZE], b[SIZE], c[SIZE];
    int i = 0, j = 0, k = 0;

    for (i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    for (i = 0; i < SIZE; i++) {
        cin >> b[i];
    }
    
    for (i = 0; i < SIZE; i++) {
        isIn = false;
        for (j = 0; j < SIZE; j++) {
            if (a[i] == b[j]) isIn = true;
        }
    
        if (not isIn) {
            isIn = false;
            for (j = 0; j < SIZE; j++) {
                if (a[i] == c[j]) isIn = true;
            }
            if (not isIn) {
                c[k] = a[i];
                k++;
            }
        }
    }

    if (k > 0) {
        for (i = 0; i < k; i++) {
            cout << c[i] << " ";
        }
    } else {
        cout << "VAZIO" << endl;
    }
    cout << endl;

    return 0;
}