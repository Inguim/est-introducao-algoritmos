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

const string NOME_ARQUIVO_DADOS = "dados2.csv";
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

// Busca Binária ID
int buscarPeloID(planeta planetas[], int tam, int id) {
    int indexPlaneta = -1;
    int inicio = 0, fim = tam - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (id == planetas[meio].id) {
            indexPlaneta = meio;
            inicio = fim + 1;
        } else {
            if (id > planetas[meio].id) inicio = meio + 1;
            else fim = meio - 1;
        }
    }
    
    return indexPlaneta;
}


void inicializar(planeta* &planetas, int &tam, int &capacidade) {
	ifstream arquivo(NOME_ARQUIVO_DADOS);
	string linha;

	if (arquivo) {
		while (getline(arquivo, linha)) {
            if (tam < capacidade) {
                stringstream ss(linha);
                string conteudo;
                planeta planeta;
                
                getline(ss, conteudo, SEPARADOR_CSV);
                planeta.id = stoi(conteudo);
    
                getline(ss, planeta.nome, SEPARADOR_CSV);
                getline(ss, planeta.partido, SEPARADOR_CSV);
                getline(ss, planeta.setor, SEPARADOR_CSV);
    
                getline(ss, conteudo, SEPARADOR_CSV);
                planeta.localizacao.x = stof(conteudo);
    
                getline(ss, conteudo, SEPARADOR_CSV);
                planeta.localizacao.y = stof(conteudo);
    
                planetas[tam] = planeta;
                tam++;
            }
		}
		arquivo.close();
	}
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

void adicionarPlaneta(planeta planetas[], int &tam, int &capacidade){
	if (tam < capacidade) {
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
        planetas[tam] = planeta;
        tam++;
        
        limparTela();
        cout << "Planeta adicionado aos registros" << endl;
        cout << "Código: " << planeta.id << endl; 
    } else cout << "Limite atingido" << endl;
    imprimirMarcador();
}

void buscarPlaneta(planeta planetas[], int &tam) {
    int id;
    int index = -1;

    cout << "Informe o código do planeta: ";
    cin >> id;

    index = buscarPeloID(planetas, tam, id);

    imprimirMarcador();
    if (index != -1) imprimirPlaneta(planetas[index]);
    else cout << "Planeta não encontrado" << endl;
    imprimirMarcador();
}

void listarPlanetas(planeta planetas[], int tam) {
	for (int i = 0; i < tam; i++) {
		imprimirMarcador();
		imprimirPlaneta(planetas[i]);
	}
	imprimirMarcador();
}

int main(){
	int tamanho = 0;
	int capacidade = 10;
	planeta *planetas = new planeta[capacidade];
	int operacao;
	bool operando = true;

	inicializar(planetas, tamanho, capacidade);
	
	while (operando) {
		mostrarOpcoes();
		
		cin >> operacao;
		
        limparTela(false);
		switch (operacao) {
			case 1:
				adicionarPlaneta(planetas, tamanho, capacidade);
				break;
			case 2: 
				buscarPlaneta(planetas, tamanho);
				break;
			case 3:
				// Remover planeta
				break;
			case 4:
				// Alterar planeta
				break;
			case 5:
				listarPlanetas(planetas, tamanho);
				break;
			case 6: 
				cout << "Sistema finalizado" << endl;
				operando = false;
				break;
			default: 
				cout << "Opção inválida" << endl;
				break;
		}
	}

	delete[] planetas;
	return 0;
}