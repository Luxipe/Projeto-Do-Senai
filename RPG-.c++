#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <limits>
using namespace std;

// Definição da estrutura do equipamento
struct Equipamento {
    string nome;                              
    int nivel;
};

// Definição da estrutura da guilda de equipamentos
struct GuildaEquipamentos {
    string nome;
    vector<Equipamento> equipamentos;
};

// Função para obter uma entrada alfanumérica não vazia do usuário
string getEntradaAlfanumericaNaoVazia(const string& prompt) {
    string entrada;
    while (true) {
        cout << prompt;
        getline(cin, entrada);

        if (!entrada.empty()) {
            break;
        } else {
            cout << "Entrada inválida. O campo não pode estar vazio. Tente novamente." << endl;
        }
    }
    return entrada;
}

// Função para obter uma entrada numérica válida do usuário
template <typename T>
T getEntradaNumericaValida(const string& prompt) {
    T entrada;
    while (true) {
        cout << prompt;
        if (cin >> entrada) {
            // Limpar o buffer de entrada
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        } else {
            cout << "Entrada inválida. Tente novamente." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return entrada;
}

// Função para adicionar um equipamento à lista
void adicionarEquipamento(vector<Equipamento>& listaEquipamentos) {
    cout << "===== Adicionar Equipamento =====" << endl;
    Equipamento equipamento;

    equipamento.nome = getEntradaAlfanumericaNaoVazia("Nome do equipamento: ");
    equipamento.tipo = getEntradaAlfanumericaNaoVazia("Tipo do equipamento: ");
    equipamento.nivel = getEntradaNumericaValida<int>("Nível do equipamento: ");

    listaEquipamentos.push_back(equipamento);
    cout << "Equipamento adicionado à lista com sucesso!" << endl;
}

// Função para ordenar a lista de equipamentos em ordem alfabética por nome
bool compararPorNome(const Equipamento& a, const Equipamento& b) {
    return a.nome < b.nome;
}

void ordenarListaEquipamentos(vector<Equipamento>& listaEquipamentos) {
    sort(listaEquipamentos.begin(), listaEquipamentos.end(), compararPorNome);
    cout << "Lista de equipamentos ordenada por nome." << endl;
}

// Função para exibir a lista de equipamentos
void exibirListaEquipamentos(const vector<Equipamento>& listaEquipamentos) {
    if (listaEquipamentos.empty()) {
        cout << "A lista de equipamentos está vazia." << endl;
        return;
    }

    cout << "===== Lista de Equipamentos =====" << endl;
    for (const auto& equipamento : listaEquipamentos) {
        cout << "Nome: " << equipamento.nome << " | Tipo: " << equipamento.tipo << " | Nível: " << equipamento.nivel << endl;
        cout << "---------------------------------" << endl;
    }
    cout << "=================================" << endl;
}

// Função para salvar a lista de equipamentos em um arquivo
void salvarListaEquipamentos(const vector<Equipamento>& listaEquipamentos, const string& nomeArquivo) {
    ofstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        for (const auto& equipamento : listaEquipamentos) {
            arquivo << equipamento.nome << "," << equipamento.tipo << "," << equipamento.nivel << "\n";
        }
        arquivo.close();
        cout << "Lista de equipamentos salva em '" << nomeArquivo << "'." << endl;
    } else {
        cout << "Erro ao abrir o arquivo para salvar." << endl;
    }
}

// Função para carregar a lista de equipamentos de um arquivo
void carregarListaEquipamentos(vector<Equipamento>& listaEquipamentos, const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        listaEquipamentos.clear();
        string linha;
        while (getline(arquivo, linha)) {
            Equipamento equipamento;
            size_t pos1 = linha.find(',');
            size_t pos2 = linha.find(',', pos1 + 1);
            equipamento.nome = linha.substr(0, pos1);
            equipamento.tipo = linha.substr(pos1 + 1, pos2 - pos1 - 1);
            equipamento.nivel = stoi(linha.substr(pos2 + 1)); 
            listaEquipamentos.push_back(equipamento);
        }
        arquivo.close();
        cout << "Lista de equipamentos carregada de '" << nomeArquivo << "'." << endl;
    } else {
        cout << "Erro ao abrir o arquivo para carregar." << endl;
    }
}
 
     
int main() {
    GuildaEquipamentos guildaEquipamentos;
    const string nomeArquivo = "equipamentos.txt";

    cout << "===== Criação de Ficha de Equipamento =====" << endl;

    cout << "Nome da guilda: ";
    guildaEquipamentos.nome = getEntradaAlfanumericaNaoVazia("");

    while (true) {
        cout << "\n===== Menu =====" << endl;
        cout << "1. Adicionar equipamento" << endl;
        cout << "2. Ordenar lista de equipamentos por nome" << endl;
        cout << "3. Exibir lista de equipamentos" << endl;
        cout << "4. Salvar lista de equipamentos em arquivo" << endl;
        cout << "5. Carregar lista de equipamentos de arquivo" << endl;
        cout << "6. Sair do programa" << endl;

        int escolha = getEntradaNumericaValida<int>("Escolha uma opção (1-6): ");

        switch (escolha) {
            case 1:
                adicionarEquipamento(guildaEquipamentos.equipamentos);                                    //switch (escolha ) }
                break;
            case 2:
                ordenarListaEquipamentos(guildaEquipamentos.equipamentos);
                break;
            case 3:
                exibirListaEquipamentos(guildaEquipamentos.equipamentos);
                break;
            case 4:
                salvarListaEquipamentos(guildaEquipamentos.equipamentos, nomeArquivo);
                break;
            case 5:
                carregarListaEquipamentos(guildaEquipamentos.equipamentos, nomeArquivo);
                break;
            case 6:
                cout << "Encerrando o programa..." << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}