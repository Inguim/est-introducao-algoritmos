// De acordo com a geometria básica, podemos definir três figuras simples: um círculo, um triângulo e um retângulo. A dimensão de um círculo é basicamente representada pelo seu raio, um retângulo necessita de dois parâmetros, base e altura, e um triângulo é representado por três valores, um para cada um de seus lados. Munido dessas informações, pode-se calcular o perímetro e a área de qualquer uma dessas figuras citadas utilizando o método matemático correto.
// Faça um programa que, referente a essas 3 figuras geométricas, receba as informações de 5 figuras quaisquer do usuário, sendo que cada figura será composta pelo tipo dela (adotando uma nomenclatura 'C' 'R' 'T' para identificá-las) além de, de acordo com a figura indicada, receber os parâmetros geométricos que as representam (suas dimensões). Por fim, exibir o nome, a área e o perímetro de cada uma dessas 5 figuras fornecidas pelo usuário.
// Obs.: As figura devem ser identificadas por um caracter da seguinte maneira:
//     'C' = Círculo (parâmetro: raio)
//     'R' = Retângulo (parâmetros: base e altura)
//     'T' = Triângulo (parâmetros: 3 lados - podendo ser diferentes)
// Obs.: Para o valor de PI utilize a constante M_PI disponível na biblioteca cmath.
// Sugestão: O cálculo da área de um triângulo pode ser feito através do Teorema de Herão.
// Entrada:
//     Um caracter representando o tipo da figura geométrica.
//     Os valores de suas dimensões (raio, lado, etc.) em ponto flutuante (float).
// Saída:
//     Nome da figura geométrica.
//     Perímetro da figura.
//     Área da figura.
// Exemplo de entrada:
// 	C 5
// 	C 2
// 	T 3 4 5
// 	R 5 10
// 	R 2 2
// Exemplo de saída:
// 	Circulo 31.4159 78.5398 
// 	Circulo 12.5664 12.5664 
// 	Triangulo 12 6 
// 	Retangulo 30 50 
// 	Retangulo 8 4
#include <iostream>
#include <cmath>

using namespace std;

struct form {
    char type;
    float d1 = 0;
    float d2 = 0;
    float d3 = 0;
};

void showDimensions(form g) {
    switch (g.type) {
        case 'C':
            cout << "Circulo" << " ";
            cout << 2 * M_PI * g.d1 << " ";
            cout << M_PI * pow(g.d1, 2) << endl;
            break;
        case 'R':
            cout << "Retangulo" << " ";
            cout << (g.d1 * 2) + (g.d2 * 2) << " ";
            cout << g.d1 * g.d2 << endl;
            break;
        case 'T':
            float p = (g.d1 + g.d2 + g.d3) / 2;
            float area = sqrt(p * (p - g.d1) * (p - g.d2) * (p - g.d3));
            cout << "Triangulo" << " ";
            cout << g.d1 + g.d2 + g.d3 << " ";
            cout << area << endl;
            break;
    }
} 

int main () {
    const unsigned SIZE = 5;
    form forms[SIZE];

    for (unsigned i = 0; i < SIZE; i++) {
        cin >> forms[i].type;
        switch (forms[i].type) {
            case 'C':
                cin >> forms[i].d1;
                break;
            case 'R':
                cin >> forms[i].d1
                    >> forms[i].d2;
                break;
            case 'T':
                cin >> forms[i].d1
                    >> forms[i].d2
                    >> forms[i].d3;
                break;
        }
    }
    
    for (unsigned i = 0; i < SIZE; i++) {
        showDimensions(forms[i]);
    }

    return 0;
}