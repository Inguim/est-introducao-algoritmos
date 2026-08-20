#include <iostream>
#include <fstream>

using namespace std;

// ifstream entrada/leitura dados

int main() {
    string nomeArquivo, palavra;
    
    cin >> nomeArquivo;
    ifstream arquivo(nomeArquivo);

    if (arquivo) {
        arquivo >> palavra;
        cout << palavra << endl;
    }

    return 0;
}