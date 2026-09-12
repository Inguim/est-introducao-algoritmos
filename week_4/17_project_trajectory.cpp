// Na engenharia mecânica, o estudo do movimento de projéteis é uma aplicação prática e teórica fundamental da dinâmica e da física. A trajetória de um projétil envolve a análise de forças e movimentos sob a influência da gravidade, o que é essencial em muitas áreas, como o design de armas, foguetes, e até mesmo no desenvolvimento de equipamentos de lançamento em esportes.
// Você é um engenheiro mecânico encarregado de calcular a trajetória de um projétil lançado de um canhão. O canhão é disparado a um ângulo θ (em graus) com uma velocidade inicial V0 (em m/s). A aceleração devido à gravidade é g = 9.81 m/s2.
// A trajetória do projétil pode ser descrita pelas seguintes equações paramétricas:
// X(t) = V0 * t * cos (θ)
// Y(t) = V0 * t * sin (θ) – ½ * g * t2
// Onde:
//     θ é o ângulo de lançamento (em graus).
//     V0 é a velocidade inicial (em m/s).
//     t é o tempo (em s).
//     g é a aceleração da gravidade (em m/s2).
//     X(t) é a componente do descolamento na coordenada x (em m).
//     Y(t) é a componente do descolamento na coordenada y (em m).
// O seu programa, deverá solicitar ao usuário o ângulo de lançamento θ (em graus) e a velocidade inicial V0 (em m/s), fornecidos em linhas subsequentes. Em seguida, seu programa deverá calcular e retornar os resultados da trajetória do projétil para ambas as coordenadas x e y em intervalos de tempo de 0.5 segundos até que o projétil atinja o solo (ou seja, Y(t) ≤ 0).
// OBS: Sugestão utilizar a biblioteca matemática do C++ para importar as funções: cos(θ), sin(θ) e o número pi para realizar a conversão do ângulo θ (em graus) para radianos.
// Entradas:
//     Número real correspondente ao ângulo de lançamento do projétil (em graus).
//     Número real correspondente a velocidade inicial (em m/s).
// Saídas:
//     Conjunto de Coordenadas (x, y) - correspondente a trajetória do projétil (em m).
// A saída de dados do programa deverá seguir a formatação dos exemplos abaixo, limitando os valores das coordenadas x e y a duas casas decimais.
// Exemplo de Entrada:
// 45.0
// 30.0
// Exemplo de Saída:
// Tempo de 0.0s (x, y) -> (0.0 m, 0.0 m)
// Tempo de 0.5s (x, y) -> (10.61 m, 9.38 m)
// Tempo de 1.0s (x, y) -> (21.21 m, 16.31 m)
// Tempo de 1.5s (x, y) -> (31.82 m, 20.78 m)
// Tempo de 2.0s (x, y) -> (42.43 m, 22.81 m)
// Tempo de 2.5s (x, y) -> (53.03 m, 22.38 m)
// Tempo de 3.0s (x, y) -> (63.64 m, 19.49 m)
// Tempo de 3.5s (x, y) -> (74.25 m, 14.16 m)
// Tempo de 4.0s (x, y) -> (84.85 m, 6.37 m)
// Tempo de 4.5s (x, y) -> (95.46 m, -3.87 m)
// Exemplo de Entrada:
// 30.0
// 50.0
// Exemplo de Saída:
// Tempo de 0.0s (x, y) -> (0.0 m, 0.0 m)
// Tempo de 0.5s (x, y) -> (21.65 m, 11.27 m)
// Tempo de 1.0s (x, y) -> (43.3 m, 20.09 m)
// Tempo de 1.5s (x, y) -> (64.95 m, 26.46 m)
// Tempo de 2.0s (x, y -> (86.60 m, 30.38 m)
// Tempo de 2.5s (x, y) -> (108.25 m, 31.84 m)
// Tempo de 3.0s (x, y) -> (129.9 m, 30.85 m)
// Tempo de 3.5s (x, y) -> (151.55 m, 27.41 m)
// Tempo de 4.0s (x, y) -> (173.21 m, 21.52 m)
// Tempo de 4.5s (x, y) -> (194.86 m, 13.17 m)
// Tempo de 5.0s (x, y) -> (216.51 m, 2.37 m)
// Tempo de 5.5s (x, y) -> (238.16 m, -10.88 m)
// Exemplo de Entrada:
// 60.0
// 40.0
// Exemplo de Saída:
// Tempo de 0.0s (x, y) -> (0.0 m, 0.0 m)
// Tempo de 0.5s (x, y) -> (10.0 m, 16.09 m)
// Tempo de 1.0s (x, y) -> (20.0 m, 29.74 m)
// Tempo de 1.5s (x, y) -> (30.0 m, 40.93 m)
// Tempo de 2.0s (x, y) -> (40.0 m, 49.66 m)
// Tempo de 2.5s (x, y) -> (50.0 m, 55.95 m)
// Tempo de 3.0s (x, y) -> (60.0 m, 59.78 m)
// Tempo de 3.5s (x, y) -> (70.0 m, 61.16 m)
// Tempo de 4.0s (x, y) -> (80.0 m, 60.08 m)
// Tempo de 4.5s (x, y) -> (90.0 m, 56.56 m)
// Tempo de 5.0s (x, y) -> (100.0 m, 50.58 m)
// Tempo de 5.5s (x, y) -> (110.0 m, 42.15 m)
// Tempo de 6.0s (x, y) -> (120.0 m, 31.27 m)
// Tempo de 6.5s (x, y) -> (130.0 m, 17.93 m)
// Tempo de 7.0s (x, y) -> (140.0 m, 2.14 m)
// Tempo de 7.5s (x, y) -> (150.0 m, -16.1 m)
// OBS: OBTIVE APENAS 98.2% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 98.2% DE ACERTO NESSA RESOLUÇÃO
// OBS: OBTIVE APENAS 98.2% DE ACERTO NESSA RESOLUÇÃO
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float angle, Vo, x, y;
    float time = 0.0;
    float GRAVITY = 9.81;

    cin >> angle >> Vo;

    angle = angle * (M_PI / 180.0);

    cout << "Tempo de 0.0s (x, y) -> (0.0 m, 0.0 m)" << endl;
    
    do {
        time += 0.5;
        x = Vo * time * cos(angle);
        y = Vo * time * sin(angle) - (0.5 * GRAVITY * pow(time, 2));
        
        cout << fixed << setprecision(1);
        cout << "Tempo de " << time << "s (x, y) -> (";
        cout << fixed << setprecision(2);
        cout << x << " m, " << y << " m)" << endl;
    } while (y > 0);

    return 0;
}