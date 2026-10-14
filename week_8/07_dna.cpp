// A espectrometria de massa é uma técnica química analítica usada para determinar a massa, a composição elementar e a estrutura das moléculas. Na espectrometria de massa, a massa monoisotópica é usada com mais frequência do que a massa média e, portanto, todas as massas de aminoácidos são consideradas monoisotópicas, a menos que indicado de outra forma. A unidade padrão usada em espectrometria de massa para medir a massa é a unidade de massa atômica, que também é chamada de dalton (Da) e é definida como um duodécimo da massa de um átomo neutro de carbono-12. A massa de um único aminoácido é igual à massa monoisotópica deste mesmo aminoácido (fornecido pela tabela abaixo) mais a massa monoisotópica de uma única molécula de água (cujo valor é 18.01056 Da). Por exemplo (considere hipoteticamente um aminoácido A):
// M_aminoacidoA = M_monoisotopicaA + M_monoisotopicaÁgua
// Dada uma fita de DNA com comprimento de 70 proteínas, composta por 4 nucleobases (contendo os símbolos A, C, G e T), seu papel é criar um programa que receberá uma fita de DNA (String, dados inseridos na mesma linha e sem espaço) e retornará o peso total da fita de DNA de acordo com a tabela de massa monoisotópica em relação a cada proteína.
// Tabela Simplificada de Massa Monoisotópica (Fonte Wikipédia):
// Aminoácidos	Massa (Da)
// A	71.03711
// C	103.00919
// G	57.02146
// T	101.04768
// Entradas:
//     Uma string que representa uma fita de DNA.
// Saídas:
//     Um número real que indica o peso total da fita de DNA de acordo com a tabela de massa monoisotópica do enunciado.
// Exemplo de Entrada:
// AGCAAATCATTCTGACTGCAACAAGCAATATGAAAATGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC
// Exemplo de Saída:
// 6822.99207
// Exemplo de Entrada:
// AGCCCCTCCCCCTGACCGCAACGGGCAATATGTCTCTGTGTGGATTAATTTAGAGAGTGTGTGAGAGCAG
// Exemplo de Saída:
// 7006.728950000001
// Exemplo de Entrada:
// AGCGGGGCAGGCTGACTGCAACGGGCAAGAGGTCTCTGTGTGGATTAGGAAAGGAGAGTGTCTGATAGCA
// Exemplo de Saída:
// 6582.7289900000005
#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna;
    double sum = 0;
    const double MASS_WATER = 18.01056;
    const double MASS_A = 71.03711 + MASS_WATER;
    const double MASS_C = 103.00919 + MASS_WATER;
    const double MASS_G = 57.02146 + MASS_WATER;
    const double MASS_T = 101.04768 + MASS_WATER;

    cin >> dna;

    for (size_t i = 0; i < dna.length(); i++){
        switch (dna[i]) {
            case 'A':
                sum += MASS_A;
            break;
        
            case 'C':
                sum += MASS_C;
            break;

            case 'G':
                sum += MASS_G;
            break;

            case 'T':
                sum += MASS_T;
            break;

        }
    }
    
    cout << sum << endl;

    return 0;
}