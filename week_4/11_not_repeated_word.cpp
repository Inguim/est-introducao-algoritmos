// Você e seu colega combinaram de trocar um número em código. Para isso, vão usar um arquivo com diversas palavras. O código será formado a partir do número de palavras que não se repetem em uma dada sequência. A contagem de um dado dígito sempre se reinicia à cada vez que uma palavra é igual à anterior. Por exemplo considere o seguinte texto em um arquivo:
// café pedra pão açúcar feijão feijão arroz tomate abacaxi maçã maçã pera pera uva tomate café
// Tem-se 4 palavras até a primeira repetição (feijão), então o primeiro dígito é 4. Da primeira palavra após a repetição (feijão) até a segunda repetição (maçã), temos 3 palavras (arroz tomate abacaxi). Da primeira palavra após segunda repetição (maçã) até a terceira repetição (pera) não temos nenhuma palavra, ou seja o dígito é zero. Após essa última repetição, temos 3 palavras até o fim do arquivo. Assim o código é 4303.
// Em outras palavras, as palavras repetidas funcionam como separadores e o dígito a ser utilizado é o número de palavras entre esses separadores. Para simplificar, considere que cada palavra repetida só irá se repetir uma única vez na sequência.
// Dessa maneira, elabore um programa que recebe o nome de um arquivo de texto e imprima o código associado ao texto do arquivo. O nome do arquivo a ser aberto deverá ser digitado pelo usuário e o código associado escrito na saída padrão.
// Entradas:
    // entrada padrão
        // o nome do arquivo de onde serão lidas as palavras
    // arquivo texto
        // várias palavras separadas por espaços
// Saída:
    // O código associado ao arquivo.
// Exemplo de entrada:
// arquivo-a-ser-aberto.txt
// Exemplo de arquivo:
// cantemos abc abc toda crianca tem que ler ler e escrever abc abc toda toda crianca tem que ler e e escrever
// Exemplo de saída:
// 142041 
// 
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename;
    string before, after;
    string code = "";
    int quantity = 0;

    cin >> filename;

    ifstream inputFile(filename);
    while (inputFile >> after) {
        if (before == after) {
            code += to_string(quantity - 1);
            quantity = 0;
            before = "";
        } else {
            quantity++;
            before = after;
        };
    }
    inputFile.close();

    code += to_string(quantity);
    cout << code << endl;

    return 0;
}