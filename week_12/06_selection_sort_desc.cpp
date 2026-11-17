// Uma forma de realizar a ordenação é pesquisando o menor valor presente no vetor e colocá-lo em seu devido lugar. Caso a ordenação desejada seja decrescente, o maior valor deve ser pesquisado e colocado em seu devido lugar, no início do vetor. O algoritmo Selection Sort apresentado abaixo organiza os elementos em ordem crescente. Faça as alterações necessárias para que a implementação do método organize os elementos em ordem decrescente. Considere que vetor corresponde ao vetor a ser ordenado e tamanho do vetor é o número de elementos do vetor:
//     Para cada indice do vetor iniciando em 0 até tamanho do vetor - 1 faça
//         Fixe o menor indice
//         Para cada j de indice +1 até tamanho do vetor faça
//             Se vetor[j] for menor do que vetor[menor] então
//                 menor recebe j 
//             Fim-Se
//         Fim-Para
//         Troque o conteúdo de vetor[menor] com vetor[indice] 
//     Fim-Para
// A cada percorrimento realizado, o estado do vetor deverá ser escrito, facilitando assim a análise da execução do algoritmo.
// Entradas:
//     Tamanho do vetor (um inteiro)
//     Elementos do vetor (valores reais) sem ordenação
// Saídas:
//     Cada passo da ordenação. Ou seja, os valores do vetor a cada percorrimento completo realizado.
// Exemplo de Entrada
// 5
// 6.3 2.2 -1.0 7.2 8.1
// Saida
// 8.1 2.2 -1 7.2 6.3 
// 8.1 7.2 -1 2.2 6.3 
// 8.1 7.2 6.3 2.2 -1 
// 8.1 7.2 6.3 2.2 -1 
// 8.1 7.2 6.3 2.2 -1
#include <iostream>

using namespace std;

void printVector(float v[], unsigned S) {
    for (unsigned i = 0; i < S; i++) {
        cout << v[i];
        if (i < S - 1) cout << " ";
    }
    cout << endl;
}

void sort(float vet[], int tam) {
    int pos_greater;
    float temp;

    for (int i = 0; i < tam - 1; i++) {
        pos_greater = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j] > vet[pos_greater]) {
                pos_greater = j;
            }
        }
        
        temp = vet[i];
        vet[i] = vet[pos_greater];
        vet[pos_greater] = temp;

        printVector(vet, tam);
    }
}

int main() {
    unsigned S;

    cin >> S;

    float *v = new float[S];

    for (unsigned i = 0; i < S; i++) {
        cin >> v[i];
    }
    
    sort(v, S);

    printVector(v, S);

    delete[] v;

    return 0;
}
