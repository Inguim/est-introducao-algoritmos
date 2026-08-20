#include <iostream>
#include <fstream>

using namespace std;

// ofstream saida/escrita dados

int main() {
    string nomeArquivo, palavra;
    
    cin >> nomeArquivo;
    cin >> palavra;

    ofstream arquivo(nomeArquivo);

    if (arquivo) {
        arquivo << palavra;
        arquivo.close();

        ifstream arquivo(nomeArquivo);
        arquivo >> palavra;
        
        cout << palavra << endl;
    }

    return 0;
}