#include <iostream>
using namespace std;

// Função para exibir o menu
void exibirMenu() {
    cout << "===== Menu =====" << endl;
    cout << "1. Adicionar Cliente" << endl;
    cout << "2. Remover Cliente" << endl;
    cout << "3. Consultar Cliente" << endl;
    cout << "4. Sair" << endl;
    cout << "=================" << endl;
    cout << "Digite a opção desejada: ";
}

// Função para adicionar um cliente
void adicionarCliente() {
    cout << "Opção escolhida: Adicionar Cliente" << endl;
    // Lógica para adicionar o cliente
}

// Função para remover um cliente
void removerCliente() {
    cout << "Opção escolhida: Remover Cliente" << endl;
    // Lógica para remover o cliente
}

// Função para consultar um cliente
void consultarCliente() {
    cout << "Opção escolhida: Consultar Cliente" << endl;
    // Lógica para consultar o cliente
}

int main() {
    int opcao;
    bool sair = false;

    while (!sair) {
        exibirMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarCliente();
                break;
            case 2:
                removerCliente();
                break;
            case 3:
                consultarCliente();
                break;
            case 4:
                sair = true;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    }

    cout << "Encerrando o programa." << endl;
    return 0;
}