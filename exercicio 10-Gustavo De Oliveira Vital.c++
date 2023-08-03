#include <iostream>
#include <string>
#include <vector>

// Definição da estrutura do cliente
struct Cliente {
    std::string nome;
    int idade;
    std::string endereco;
    // Outros campos relevantes para o cliente
};

// Função para adicionar um novo cliente à lista
void adicionarCliente(std::vector<Cliente>& listaClientes) {
    Cliente novoCliente;
    std::cout << "Digite o nome do cliente: ";
    std::cin.ignore(); // Limpar o buffer do teclado
    std::getline(std::cin, novoCliente.nome);
    std::cout << "Digite a idade do cliente: ";
    std::cin >> novoCliente.idade;
    std::cin.ignore();
    std::cout << "Digite o endereco do cliente: ";
    std::getline(std::cin, novoCliente.endereco);

    listaClientes.push_back(novoCliente);
    std::cout << "Cliente cadastrado com sucesso!\n";
}

// Função para exibir todos os clientes cadastrados
void exibirClientes(const std::vector<Cliente>& listaClientes) {
    if (listaClientes.empty()) {
        std::cout << "Nenhum cliente cadastrado.\n";
    } else {
        std::cout << "Lista de clientes cadastrados:\n";
        for (const auto& cliente : listaClientes) {
            std::cout << "Nome: " << cliente.nome << "\n";
            std::cout << "Idade: " << cliente.idade << "\n";
            std::cout << "Endereco: " << cliente.endereco << "\n";
            // Exibir outros campos relevantes para o cliente
            std::cout << "----------------------\n";
        }
    }
}

int main() {
    std::vector<Cliente> listaClientes;
    int opcao;

    do {
        std::cout << "Sistema de Cadastro de Clientes\n";
        std::cout << "1. Adicionar cliente\n";
        std::cout << "2. Exibir clientes cadastrados\n";
        std::cout << "0. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarCliente(listaClientes);
                break;
            case 2:
                exibirClientes(listaClientes);
                break;
            case 0:
                std::cout << "Encerrando o programa.\n";
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente.\n";
                break;
        }
    } while (opcao != 0);

    return 0;
}