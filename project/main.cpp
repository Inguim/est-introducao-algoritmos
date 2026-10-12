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
	cout << "6 - Sair e Salvar" << endl;
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

// Ordena com Selection Sort
void ordenarASCID(planeta planetas[], int tam){
	int menor;
	planeta aux;

	for (int i = 0; i < tam - 1; i++) {
		menor = i;
		for (int j = i + 1; j < tam; j++) {
			if (planetas[j].id < planetas[menor].id) menor = j;
		}
		aux = planetas[i];
		planetas[i] = planetas[menor];
		planetas[menor] = aux;
	}
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

// Busca Binária Nome
int buscarPeloNome(planeta planetas[], int tam, string nome) {
    int indexPlaneta = -1;
    int inicio = 0, fim = tam - 1;
    int meio;
	bool contemONome = false;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
		contemONome = planetas[meio].nome.find(nome) != string::npos;
        if (nome == planetas[meio].nome or contemONome) {
            indexPlaneta = meio;
            inicio = fim + 1;
        } else {
            if (nome > planetas[meio].nome) inicio = meio + 1;
            else fim = meio - 1;
        }
    }
    
    return indexPlaneta;
}

// aumenta o tamanho do vetor (alocação dinâmica)
void redimensionar(planeta* &vetor, int &capacidade) {
	planeta *novoVetor = new planeta[capacidade + 5];

	for (int i = 0; i < capacidade; i++) {
		novoVetor[i] = vetor[i];
	}

	delete[] vetor;
	vetor = novoVetor;
	capacidade += 5;
}

// remove e diminui o tamanho do vetor
void remover(planeta* &planetas, int &tam, int &capacidade, int index) {
	planeta *novoVetor = new planeta[capacidade];

	int j = 0;
    for (int i = 0; i < tam; i++) {
        if (i != index) {
            novoVetor[j] = planetas[i];
            j++;
        }
    }
	
	delete[] planetas;
	planetas = novoVetor;
	tam--;
}

// busca informações do csv
void inicializar(planeta* &planetas, int &tam, int &capacidade) {
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
			planeta.localizacao.x = stof(conteudo);

			getline(ss, conteudo, SEPARADOR_CSV);
			planeta.localizacao.y = stof(conteudo);

			planetas[tam] = planeta;
			tam++;

			if (tam >= capacidade) redimensionar(planetas, capacidade);
		}
		arquivo.close();
	}
}

// salva todos os planetas no csv
void finalizar(planeta* &planetas, int &tam) {
	ofstream arquivo(NOME_ARQUIVO_DADOS);
	string linha;
	planeta planeta;

	ordenarASCID(planetas, tam);

	for (int i = 0; i < tam; i++) {
		planeta = planetas[i];
		arquivo << planeta.id << SEPARADOR_CSV << planeta.nome << SEPARADOR_CSV;
		arquivo << planeta.partido << SEPARADOR_CSV << planeta.setor << SEPARADOR_CSV;
		arquivo << planeta.localizacao.x << SEPARADOR_CSV << planeta.localizacao.y;
		arquivo << endl;
	}
	
	arquivo.close();
}

string informarSetor() {
	int opcao;
	cout << "Informe o setor:" << endl << "1 - Setor A" << endl << "2 - Setor B" << endl;
	cin >> opcao;
	while (opcao != 1 and opcao != 2){
		cout << "Opção inválida! Informe novamente (1 ou 2): ";
		cin >> opcao;
	}
	if (opcao == 1) {
		return "Setor A";
	}
	return "Setor B";
}

string informarPartido() {
	int opcao;
	cout << "Selecione o partido:" << endl << "1 - República" << endl << "2 - Separatista" << endl;
	cin >> opcao;
	while (opcao != 1 and opcao != 2){
		cout << "Opção inválida! Informe novamente (1 ou 2): ";
		cin >> opcao;
	}
	if (opcao == 1) {
		return "República";
	} 
	return "Separatista";
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
	planeta planeta;
	int opcao = -1;
	
	cout << "Informe o nome do Planeta (ponto-vírgula): ";
	cin >> planeta.nome;
	
	planeta.setor = informarSetor();
	planeta.partido = informarPartido();
	
	cout << "Informe a localização dentro do setor (x:y)" << endl;
	cout << "Apenas número inteiros e separe por espaços" << endl;
	cin >> planeta.localizacao.x >> planeta.localizacao.y;

    salvarPlaneta(planeta);

	if (tam >= capacidade) redimensionar(planetas, capacidade);
	planetas[tam] = planeta;
	tam++;
	
    limparTela();
	cout << "Planeta adicionado aos registros" << endl;
	cout << "Código: " << planeta.id << endl; 
	imprimirMarcador();
}

void buscarPlaneta(planeta planetas[], int &tam) {
    int modo;
    int index = -1;

	cout << "Informe o modo de busca: " << endl << "1 - ID" << endl << "2 - NOME" << endl;
	cin >> modo;

	switch (modo) {
		case 1:
			int id;
			cout << "Informe o código do planeta: ";
    		cin >> id;
			index = buscarPeloID(planetas, tam, id);
			limparTela();
		break;

		case 2: {
			string nome;
			cout << "Informe o nome do planeta: ";
    		cin >> nome;
			index = buscarPeloNome(planetas, tam, nome);
			limparTela();
		}
		break;
	
		default:
			limparTela();
			cout << "Operação inválida" << endl;
			imprimirMarcador();
			break;
	}

    if (modo == 1 or modo == 2) {
		if (index != -1) imprimirPlaneta(planetas[index]);
		else cout << "Planeta não encontrado" << endl;
		imprimirMarcador();
	}
}

void removerPlaneta(planeta* &planetas, int &tam, int &capacidade) {
	int id;

	cout << "Informe o ID do planeta: ";
	cin >> id;

	ordenarASCID(planetas, tam);
	int indexPlaneta = buscarPeloID(planetas, tam, id);
	
	limparTela();
	if (indexPlaneta != -1) {
		remover(planetas, tam, capacidade, indexPlaneta);
		cout << "Planeta removido!" << endl;
	} else cout << "Planeta não encontrado" << endl;
	imprimirMarcador();
}

void listarPlanetas(planeta planetas[], int tam) {
	ordenarASCID(planetas, tam);
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
				removerPlaneta(planetas, tamanho, capacidade);
				break;
			case 4:
				// Alterar planeta
				break;
			case 5:
				listarPlanetas(planetas, tamanho);
				break;
			case 6: 
				finalizar(planetas, tamanho);
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