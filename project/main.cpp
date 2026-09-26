#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

struct coordenada {
    float x;
	float y;
};
struct planeta {
    int id;
    string nome;
    string setor;
    string partido;
    coordenada localizacao;
};

const string NOME_ARQUIVO_DADOS = "dados.csv";

// Funçoes utilitárias

void mostrarOpcoes() {
	cout << "Bem vindo ao glossário de Planetas, informe uma operação:" << endl;
	cout << "1 - Adicionar planeta" << endl;
	cout << "2 - Buscar planeta" << endl;
	cout << "3 - Remover planeta" << endl;
	cout << "4 - Alterar planeta" << endl;
	cout << "5 - Listar planetas" << endl;
	cout << "6 - Sair" << endl;
}

void imprimirMarcador() {
    cout << "------------------------------------------------------------" << endl;
}

void limparTela(bool inserirMarcador = true) {
	system("clear");
    if (inserirMarcador) imprimirMarcador();
}

int gerarIdentificador() {
    return time(NULL);
}

// Funções para lidar com arquivos

void salvarPlaneta(planeta &planeta) {
    planeta.id = gerarIdentificador();

    // ios:app -> adiciona ao final do arquivo
    ofstream arquivo(NOME_ARQUIVO_DADOS, ios::app);

    arquivo << planeta.id << "," << planeta.nome << ",";
    arquivo << planeta.partido << "," << planeta.setor << ",";
    arquivo << planeta.localizacao.x << "," << planeta.localizacao.y;
    arquivo << endl;

    arquivo.close();
}

// Funções de escopo

void adicionarPlaneta(){
	planeta planeta;
	int opcao;
	
	cout << "Informe o nome do Planeta (não utilize espaço ou ponto-vírgula): ";
	cin >> planeta.nome;
	
	cout << "Informe o setor:" << endl << "1 - Setor A" << endl << "2 - Setor B" << endl;
	cin >> opcao;
	if (opcao == 1) {
		planeta.setor = "Setor A";
	} else {
		planeta.setor = "Setor B";
	}
	
	cout << "Selecione o partido:" << endl << "1 - República" << endl << "2 - Separatista" << endl;
	cin >> opcao;
	if (opcao == 1) {
		planeta.partido = "República";
	} else {
		planeta.partido = "Separatista";
	}
	
	cout << "Informe a localização dentro do setor (x:y)" << endl;
	cout << "Separe por espaços" << endl;
	cin >> planeta.localizacao.x >> planeta.localizacao.y;

    salvarPlaneta(planeta);
	
    limparTela();
	cout << "Planeta adicionado aos registros" << endl;
	cout << "Código: " << planeta.id << endl; 
	imprimirMarcador();
}

int main(){
	int operacao;
	bool operando = true;
	
	while (operando) {
		mostrarOpcoes();
		
		cin >> operacao;
		
		switch (operacao) {
			case 1:
				limparTela();
				adicionarPlaneta();
				break;
			case 2: 
				// Buscar planeta
				break;
			case 3:
				// Remover planeta
				break;
			case 4:
				// Alterar planeta
				break;
			case 5:
				// Listar planetas
				break;
			case 6: 
				limparTela();
				cout << "Sistema finalizado" << endl;
				operando = false;
			default: 
				limparTela();
				cout << "Opção inválida" << endl;
				break;
		}
	}
	
	return 0;
}