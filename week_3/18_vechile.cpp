//  Sabemos que veículos autônomos se valem de diversos sensores e sistemas de monitoramento para estimar a sua posição em relação ao ambiente, e, assim, determinar as ações a serem tomadas para seguir seu destino. Um desses sistema, por exemplo, é responsável por detectar se existe alguma coisa a frente do veículo. Assim, em uma rodovia, esse sistema servirá para verificar se há algum carro a frente. Se tiver um carro, o sistema reduzirá a velocidade, se não houver, ele manterá a velocidade.
// Pensando nisso, faça um programa que receba dois valores de entrada, o primeiro um número ou uma string dizendo se há ou não um carro a frente do veículo autônomo (0 ou NÃO HÁ, se não houver; e 1 ou HÁ, se tiver), o segundo valor será a velocidade na qual o carro está. Depois disso, o programa deve determinar a ação a ser tomada pelo carro, ou seja, se ele pode manter a velocidade atual ou se precisa reduzir.
// No fim seu programa deve imprimir na tela de saída o que aconteceu com o carro, se o carro precisou reduzir ou se ele manteve a velocidade, ou ainda, se colidiu com o veículo à frente por não ter tempo de desacelerar.
// Observações: Suponha que seja possível detectar o carro a frente a partir de uma distância de cinco (5) metros, que a velocidade do carro à frente seja 60 km/h e que a desaceleração do carro do sistema autônomo seja de 10m/s2. Assim, se o carro estiver numa velocidade maior que 60 km/h, para evitar a colisão ele deve ser capaz de reduzir a velocidade para a mesma dentro de 5 metros.
// Entradas:
//     Número ou string indicando se há ou não carro à frente (0 ou NÃO HÁ, se não houver; e 1 ou HÁ, se tiver);
//     Número real indicando a velocidade do veículo autônomo.
// Saídas:
//     Uma string dizendo o que aconteceu com o carro. Siga o seguinte padrão de mensagens: se manteve a velocidade: Manteve a velocidade; se reduziu: Reduziu; e por fim, se colidiu: Colidiu.
// Exemplo de Entrada:
// HÁ
// 59
// Exemplo de Saída:
// Manteve a velocidade
// Exemplo de Entrada:
// 1
// 68.5
// Exemplo de Saída:
// Reduziu
// Para saber se o carro colidiu ou não, basta fazer o cálculo da distância necessária para o veículo reduzir da sua velocidade inicial (V0) até uma velocidade final (V). Note também que a velocidade final, neste caso, será 60 km/h (a velocidade do carro à frente).
// Para isso use a equação de Torricelli:
// V2 = V02+2*a*s, onde a é aceleração e s é o deslocamento/distância percorrida.
// Assim, se a distância encontrada for menor que a distância entre os carros, foi possível reduzir, caso contrário, ocorreu a colisão
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string exists;
    bool convertedExists;
    float speed, collisionSpeed;

    cin >> exists >> speed;

    convertedExists = (exists == "1" || exists == "HÁ" || exists == "HA");

    if (not convertedExists or speed <= 60.0) {
        cout << "Manteve a velocidade" << endl;
    } else {
        speed = speed / 3.6;

        collisionSpeed = (pow(60.0 / 3.6, 2) - pow(speed, 2)) / -20;
        if (collisionSpeed > 5.0) cout << "Colidiu" << endl;
        else cout << "Reduziu" << endl;
    }

    return 0;
}