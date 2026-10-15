#include <iostream>
#include <string>

using namespace std;

long hashWord(string word){
    const int COUSIN = 97;
    const int M = 100;
    long hash = 0;

    for (unsigned j = 0; j < word.size(); j++) {
            hash = (COUSIN * hash + word[j]) % M;   
    }

    return hash;
}

int main() {
    string word;
    int N;
    long hash;
    long sum = 0;

    cin >> N;

    for (size_t i = 0; i < N; i++){
        cin >> word;
        hash = hashWord(word);
        sum += hash;
        cout << hash << " ";
    }
    cout << sum << endl;

    return 0;
}