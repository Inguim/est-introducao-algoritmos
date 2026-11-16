// Nem sempre deseja-se ordenar um vetor inteiro. Faça um programa que receba um conjunto de inteiros e a posição (índice) do vetor até onde deseja-se ordenar. A ordenação deverá ser por ordem decrescente, usando selectionsort, de tal forma que os primeiros elementos são os maiores do vetor todo, mas após a ordenação parcial, os últimos elementos não estão necessariamente ordenados.
// Você deverá adaptar o trecho de código a seguir do algoritmo selectionsort com ordenação crescente. Atenção com a implementação de algoritmos clássicos: adicionar testes ou variáveis, introduzir processamento desnecessário resultará em perda de pontos na avaliação manual. Os nomes das variáveis devem ser significativos: altere os nomes conforme necessário para que continuem sendo significativos após as modificações realizadas.
// Use modularização. Não misture interface e processamento.
// for (int i=0; i < tam-1; ++i) {
//     posMenor = i;
//     for (int j=i+1; j < tam; ++j) {
//         if (vetor[j] < vetor[posMenor])
//             posMenor = j;
//     }
//     aux = vetor[i];
//     vetor[i] = vetor[posMenor];
//     vetor[posMenor] = aux;
// }
// Entradas:
//     Tamanho do vetor
//     Os elementos do vetor (números inteiros)
//     Posição até onde o vetor deve ser ordenado.
// Saídas:
//     Todo o vetor resultante.
// Exemplo de Entrada :
// 5 
// 1 3 4 5 2
// 2
// Exemplo de Saída:
// 5 4 3 1 2
#include <iostream>

using namespace std;

void sort(int vetor [], int tam, int ate) {
    int posMenor;
    int aux;
    for (int i = 0; i <= ate; ++i) {
        posMenor = i;
        for (int j = i + 1; j < tam; ++j) {
            if (vetor[j] > vetor[posMenor])
                posMenor = j;
        }
        aux = vetor[i];
        vetor[i] = vetor[posMenor];
        vetor[posMenor] = aux;
    }
}

int main() {
    unsigned S;
    int ate;

    cin >> S;

    int *v = new int[S];

    for (unsigned i = 0; i < S; i++) {
        cin >> v[i];
    }
    
    cin >> ate;

    sort(v, S, ate);

    for (unsigned i = 0; i < S; i++) {
        cout << v[i];
        if (i < S - 1) cout << " ";
    }
    cout << endl;

    delete[] v;

    return 0;
}