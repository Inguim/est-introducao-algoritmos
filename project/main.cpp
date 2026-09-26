#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <sstream>

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
const char SEPARADOR_CSV = ';';

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

void imprimirPlaneta(planeta &planeta) {
    cout << planeta.id << " - " << planeta.nome << endl;
	cout << "Partido: " << planeta.partido << endl;
	cout << "Setor: " << planeta.setor << " " << planeta.localizacao.x << "'" << planeta.localizacao.y << endl;
}

// Funções para lidar com arquivos

void salvarPlaneta(planeta &planeta) {
    planeta.id = gerarIdentificador();

    // ios:app -> adiciona ao final do arquivo
    ofstream arquivo(NOME_ARQUIVO_DADOS, ios::app);

    arquivo << planeta.id << SEPARADOR_CSV << planeta.nome << SEPARADOR_CSV;
    arquivo << planeta.partido << SEPARADOR_CSV << planeta.setor << SEPARADOR_CSV;
    arquivo << planeta.localizacao.x << SEPARADOR_CSV << planeta.localizacao.y;
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
	cout << "Apenas número inteiros e separe por espaços" << endl;
	cin >> planeta.localizacao.x >> planeta.localizacao.y;

    salvarPlaneta(planeta);
	
    limparTela();
	cout << "Planeta adicionado aos registros" << endl;
	cout << "Código: " << planeta.id << endl; 
	imprimirMarcador();
}

void listarPlanetas() {
	ifstream arquivo(NOME_ARQUIVO_DADOS);
	string linha;

	if (arquivo) {
		while (getline(arquivo, linha)) {
			stringstream ss(linha);
			string conteudo;
			planeta planeta;
			
			getline(ss, conteudo, SEPARADOR_CSV);
			planeta.id = stoi(conteudo);

			getline(ss, planeta.nome, SEPARADOR_CSV);
			getline(ss, planeta.partido, SEPARADOR_CSV);
			getline(ss, planeta.setor, SEPARADOR_CSV);

			getline(ss, conteudo, SEPARADOR_CSV);
			planeta.localizacao.x = stoi(conteudo);

			getline(ss, conteudo, SEPARADOR_CSV);
			planeta.localizacao.y = stoi(conteudo);

			imprimirMarcador();
			imprimirPlaneta(planeta);
		}
		imprimirMarcador();
		arquivo.close();
	} else {
		cout << "Por favor insira planetas." << endl;
	}
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
				limparTela(false);
				listarPlanetas();
				break;
			case 6: 
				limparTela(false);
				cout << "Sistema finalizado" << endl;
				operando = false;
				break;
			default: 
				limparTela(false);
				cout << "Opção inválida" << endl;
				break;
		}
	}
	
	return 0;
}