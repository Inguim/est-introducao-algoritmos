// Coringa enviou uma mensagem para o Charada, mas por medo da mensagem ser alterada no meio do caminho pela Liga da Justiça (incluindo o terrível Batman), eles vão utilizar um cálculo de hash para verificar se a mensagem chegou corretamente, sem qualquer modificação. Um hash é um algoritmo que mapeia dados de comprimento variável para dados de comprimento fixo, sendo muito utilizado para fazer verificações (checksums ou hashes). No caso, ele enviará um vetor de palavras, informando antes quantas palavras farão parte da mensagem. Após o envio da última palavra, será enviado um único número para indicar o hash da mensagem.
// O código a seguir faz o hash de uma palavra qualquer, utilizando uma chave baseada em um número primo e um valor inteiro M:
// const int UMPRIMO = 97;
// const int M = 100;
// long hash = 0;
// for (unsigned j = 0; j < palavra.size(); j++) {
//         hash = (UMPRIMO * hash + palavra[j]) % M;   
// }
// Nesse caso, perceba que o hash vai ser o resto da divisão por 100 a partir de um cálculo com os caracteres da palavra. Ou seja, cada palavra terá um hash entre 0 e 99. O hash da mensagem inteira será o resultado da soma dos hashes individuais. Por exemplo, caso a mensagem enviada seja "pinguim faca alguma coisa", cada palavra terá o seguinte hash:
// pinguim 9
// faca 19
// alguma 19
// coisa 19
// E nesse caso o hash da mensagem inteira será 66 (soma dos hashes individuais).
// Para auxiliá-los, seu objetivo é implementar um algoritmo que recebe um vetor de palavras, armazenando-o, e imprime o hash individual de cada palavra, bem como o hash da mensagem inteira, utilizando como base o código fornecido acima.
// Entradas:
//     Tamanho do vetor de palavras
//     Vetor de palavras separadas por espaço
// Saídas:
//     Hash individual de cada palavra
//     Hash de toda a mensagem
// Exemplo de Entrada:
// 4
// pinguim faca alguma coisa
// Exemplo de Saída:
// 9 19 19 19 66
// Exemplo de Entrada:
// 5
// pegue aquele maldito batman agora
// Exemplo de Saída:
// 22 9 46 11 30 118
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

    for (int i = 0; i < N; i++){
        cin >> word;
        hash = hashWord(word);
        sum += hash;
        cout << hash << " ";
    }
    cout << sum << endl;

    return 0;
}