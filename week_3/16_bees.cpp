// Escreva um programa que avalie a saúde de uma abelha com base em algumas informações básicas lidas a partir do arquivo "abelhas.txt". O programa deve ler as respostas para três perguntas:
//     A abelha está zumbindo? (S/N)
//     A abelha tem manchas no corpo? (S/N)
//     Qual é a temperatura da colmeia? (em graus Celsius)
// Com base nas respostas lidas, o programa deve imprimir um código que indica a saúde da abelha. O código é composto por uma letra e, possivelmente, um sufixo: "S": a abelha está saudável, "DB": a abelha está doente devido à temperatura baixa da colmeia, "DA": a abelha está doente devido à temperatura alta da colmeia ou "I": não foi possível determinar a saúde da abelha.
// A avaliação da saúde da abelha deve seguir as seguintes regras:
//     Se a abelha estiver zumbindo, não tiver manchas no corpo e a temperatura da colmeia estiver entre 34°C e 37°C, a abelha está saudável.
//     Se a abelha estiver zumbindo, tiver manchas no corpo e a temperatura da colmeia estiver abaixo de 34°C, a abelha está doente devido à temperatura baixa da colmeia.
//     Se a abelha estiver zumbindo, tiver manchas no corpo e a temperatura da colmeia estiver acima de 37°C, a abelha está doente devido à temperatura alta da colmeia.
//     Caso contrário, não é possível determinar a saúde da abelha.
// Ao final, o programa deve imprimir apenas o código de saúde da abelha.
// Entradas (conteúdo do arquivo "abelhas.txt"):
//     String contendo 'S' ou 'N' para indicar se a abelha está zumbindo.
//     String contendo 'S' ou 'N' para indicar se a abelha possui manchas no corpo.
//     Número real indicando a temperatura da colméia em graus celsius.
// Saídas:
//     "S" caso a abelha esteja saudável.
//     "DB" caso a abelha não esteja saudável devido a tempertura baixa.
//     "DA" caso a abelha não esteja saudável devido a tempertura baixa.
//     "I" caso a abelha não seja possível identificar se a abelha está saudável.
// Exemplo de Entrada (conteúdo do arquivo "abelhas.txt"):
// S
// N
// 35
// Exemplo de Saída:
// S
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char tinnitus, stains;
    double temperature;

    ifstream inputFile("abelhas.txt");
    if (inputFile) {
        inputFile >> tinnitus >> stains >> temperature;
        inputFile.close();
    }

    if (tinnitus == 'S' and stains == 'N' and temperature > 34 and temperature < 37) {
        cout << 'S' << endl;
    } else if (tinnitus == 'S' and stains == 'S' and temperature < 34) {
        cout << "DB" << endl;
    } else if (tinnitus == 'S' and stains == 'S' and temperature > 37) {
        cout << "DA" << endl;
    } else {
        cout << 'I' << endl;
    }

    return 0;
}