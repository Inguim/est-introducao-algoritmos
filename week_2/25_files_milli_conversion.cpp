// Implemente um programa que receba no arquivo tempo.txt um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir no arquivo horario.txt a hora representada por este número de milissegundos.
// Entrada (arquivo tempo.txt):
//     Número inteiro representando o tempo em milissegundos.
// Saída (arquivo horario.txt)
//     Tempo convertido para o formato "HORAS:MINUTOS:SEGUNDOS", conforme essa formatação (itens separados por dois pontos), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número em ponto flutuante.
// Exemplo de Entrada (arquivo tempo.txt):
// 3600001
// Exemplo de Saída horario.txt:
// 1:0:0.001
// Exemplo de Entrada (arquivo tempo.txt):
// 8746900
// Exemplo de Saída horario.txt:
// 2:25:46.9
#include <iostream>
#include <fstream>

using namespace std;

int main () {
   int milliseconds;
   int horas, minutos;
   float segundos;
   // 1s = 1_000ms
   // 1m = 60_000ms
   // 1h = 3_600_000ms

   fstream inputFile("tempo.txt");
   inputFile >> milliseconds;
   inputFile.close();

   ofstream outputFile("horario.txt");

   horas = milliseconds / 3600000;
   minutos = milliseconds % 3600000 / 60000;
   segundos = (milliseconds % 60000) / 1000.0;
   
   outputFile << horas << ":" << minutos << ":" << segundos << endl;
   outputFile.close();
   
   return 0;
}