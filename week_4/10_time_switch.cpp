// No mundo de Harry Potter um vira-tempo é uma espécie de relógio mágico que permite voltar no tempo. Ele tem a forma de um colar e possui uma espécie de ampulheta e o número de voltas que se dá na ampulheta determina quantas horas uma pessoa voltará no tempo.
// O Ministério da Magia adverte: 
// - Deve-se obter permissão especial para usar um vira-tempo.
// - O passado jamais pode ser alterado!
// Suponha que você teve permissão do Ministério da Magia para usar o vira-tempo e, para não se perder no tempo, toda vez que você usou o aparelho você anotou as horas e quantas voltas deu na ampulheta. A partir desses dados você agora quer saber, para um determinado horário H, quantas vezes você retornou a esse horário. Por exemplo, supondo H = 8, se você usou o vira-tempo às 09h e deu 2 voltas na ampulheta, você voltou até às 07h e, portanto, você retornou uma vez ao horário das 08h.
// Faça então um programa que receba do arquivo magia.txt: o horário H, o número de vezes que você voltou no tempo e, em seguida, em cada linha: os horários quando usou o vira-tempo e o número de voltas que deu na ampulheta. Obs: considere que o vira-tempo é usado sempre em um horário posterior ao seu último uso e também que todos os usos são no mesmo dia.
// Entradas (arquivo magia.txt):
//     Valor de H (horário para o qual deseja saber quantas vezes você retornou a ele).
//     Sequência de dados de cada volta no tempo, tendo em cada linha: horas e quantidade de voltas da ampulheta.
// Saídas:
//     Quantidade de vezes que você retornou ao horário H.
// Exemplo de Entrada (arquivo magia.txt):
// 9
// 8 2
// 12 4
// 13 1
// 14 5
// Exemplo de Saída:
// 2
// Nesse exemplo, o valor de H é 9, portanto, precisamos saber quantas vezes você voltou ao horário das 09h. Nas linhas subsequentes vemos que o vira-tempo foi usado 4 vezes. Na primeira vez ele foi usado às 08h e voltou 2 horas no tempo (até 06h) e nesse caso não houve retorno às 09h; na segunda vez foi usado às 12h e voltou 4 horas no tempo (até 08h) e, portanto, você retornou ao horário das 09h uma vez; depois o vira-tempo foi usado às 13h e voltou 1 hora (até 12:00h) e não houve retorno às 09h; por fim, foi usado às 14h e retornou 5 horas (até 09h) e, portanto, você retornou ao horário das 09h uma segunda vez.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int timeToVerify;   
    int start, tick;
    int passedBy = 0;

    ifstream inputFile("magia.txt");
    inputFile >> timeToVerify;

    while (inputFile >> start >> tick) {
        if (start >= timeToVerify and start - tick <= timeToVerify) {
            passedBy += 1;
        }
    }
    inputFile.close();

    cout << passedBy << endl;

    return 0;
}