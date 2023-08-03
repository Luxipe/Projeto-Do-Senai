#include <iostream>
#include <vector>

using namespace std;

// Definindo a estrutura de dados para o Produto
struct Produto {
    string nome;
    int codigo;
    float preco;
    int quantidade;
};

// Declarando um vetor de produtos
vector<Produto> estoque;

// Procedimento para registrar uma entrada de produto
void registrarEntrada() {
    // Solicitando informações sobre o novo produto
    cout << "Informe o nome do produto: ";
    string nome;
    cin >> nome;

    cout << "Informe o código do produto: ";
    int codigo;
    cin >> codigo;

    cout << "Informe o preço do produto: ";
    float preco;
    cin >> preco;

    cout << "Informe a quantidade do produto: ";
    int quantidade;
    cin >> quantidade;

    // Adicionando o produto ao estoque
    estoque.push_back({nome, codigo, preco, quantidade});
}

// Procedimento para registrar uma venda de produto
void registrarVenda() {
    // Solicitando informações sobre o produto vendido
    cout << "Informe o código do produto: ";
    int codigoProduto;
    cin >> codigoProduto;

    // Procurando o produto no estoque
    int indiceProduto = -1;
    for (int i = 0; i < estoque.size(); i++) {
        if (estoque[i].codigo == codigoProduto) {
            indiceProduto = i;
            break;
        }
    }

    // Verificando se o produto foi encontrado
    if (indiceProduto == -1) {
        cout << "Produto não encontrado!" << endl;
        return;
    }

    // Verificando se o produto está disponível
    if (estoque[indiceProduto].quantidade == 0) {
        cout << "Produto esgotado!" << endl;
        return;
    }

    // Decrementando a quantidade do produto
    estoque[indiceProduto].quantidade--;

    // Imprimir uma mensagem de confirmação
    cout << "Venda realizada com sucesso!" << endl;
}

// Procedimento para gerar um relatório de estoque
void gerarRelatorio() {
    // Imprimir o cabeçalho do relatório
    cout << "Nome | Código | Preço | Quantidade" << endl;
    cout << "--- | --- | --- | ---" << endl;

    // Imprimir os dados do estoque
    for (Produto produto : estoque) {
        cout << produto.nome << " | " << produto.codigo << " | " << produto.preco << " | " << produto.quantidade << endl;
    }
}

// Programa principal
int main() {
    // Inicializar o estoque
    estoque.clear();

    // Menu principal
    int opcao;
    do {
        cout << "===== MENU =====" << endl;
        cout << "1. Registrar entrada de produto" << endl;
        cout << "2. Registrar venda de produto" << endl;
        cout << "3. Gerar relatório de estoque" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Processar a opção do usuário
        switch (opcao) {
            case 1:
                registrarEntrada();
                break;
            case 2:
                registrarVenda();
                break;
            case 3:
                gerarRelatorio();
                break;
            case 4:
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}
