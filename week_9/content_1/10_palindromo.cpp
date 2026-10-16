// Um palíndromo é um texto que pode ser lido igualmente da esquerda para a direita e da direita para a esquerda. Por exemplo, sem considerar sinais gráficos, acentos e letras maiúsculas e minúsculas: "socorram me subi no onibus em marrocos". Outros exemplos de palíndromos ocorrem com números (por exemplo: 12321) ou com datas (por exemplo: 20-02-2002).
// Faça um programa que leia vários caracteres, armazenando-os num vetor alocado dinamicamente. Depois determine se esse vetor é um palíndromo ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.
// Entradas:
//     A quantidade de valores que deve ser lida para criar o vetor.
//     Linha contendo os caracteres do vetor.
// Saídas:
//     Sequencia de posições e elementos enquanto as comparações forem verdadeiras.
//     Uma palavra ("sim" ou "nao" - em minúsculas, sem acentos) que indica se a sequência é palíndromo ou não.
// Exemplo de entrada:
// 5
// a b c b a
// Exemplo de saída:
// 0 a 4 a 1 b 3 b
// sim
// Exemplo de entrada:
// 6
// a b c d b a
// Exemplo de saída:
// 0 a 5 a 1 b 4 b
// nao
// Exemplo de entrada:
// 8
// a b c d d c b a
// Exemplo de saída:
// 0 a 7 a 1 b 6 b 2 c 5 c 3 d 4 d
// sim
// Exemplo de entrada:
// 7
// a b c d c b e
// Exemplo de saída:
// nao
#include <iostream>

using namespace std;

int main() {
    unsigned N;
    int isPalindromo = true;
    unsigned i, j, middle;
    
    cin >> N;
    char *v = new char[N];
    
    for (i = 0; i < N; i++) {
        cin >> v[i];
    }

    middle = N / 2;
    j = N - 1;

    for (i = 0; i < middle; i++) {
        if (v[i] != v[j]) {
            isPalindromo = false;
            i = middle;
        } else {
            cout << i << " " << v[i] << " ";
            cout << j << " " << v[j] << " ";
        }
        j--;
        if (i == middle - 1) cout << endl;
    }
    
    cout << (isPalindromo ? "sim" : "nao") << endl;

    delete[] v;
    return 0;
}