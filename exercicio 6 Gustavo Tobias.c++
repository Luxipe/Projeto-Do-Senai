#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

// Função para contar o número de palavras no arquivo
int contarPalavrasNoArquivo(const std::string& nome_arquivo) {
    // Abrir o arquivo no modo de leitura
    std::ifstream arquivo(nome_arquivo);

    // Verificar se o arquivo foi aberto com sucesso
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 0;
    }

    std::string linha;
    int numero_palavras = 0;

    // Ler linha por linha do arquivo
    while (std::getline(arquivo, linha)) {
        // Criar um fluxo de string (istringstream) para processar cada linha
        std::istringstream iss(linha);
        std::string palavra;

        // Contar o número de palavras na linha
        while (iss >> palavra) {
            numero_palavras++;
        }
    }

    // Fechar o arquivo
    arquivo.close();

    // Retornar o total de palavras encontradas no arquivo
    return numero_palavras;
}

int main() {
    std::string nome_do_arquivo;

    // Solicitar ao usuário o nome do arquivo
    std::cout << "Digite o nome do arquivo: ";
    std::getline(std::cin, nome_do_arquivo); // Usar getline para ler a linha inteira

    // Chamar a função para contar as palavras no arquivo
    int total_palavras = contarPalavrasNoArquivo(nome_do_arquivo);

    // Exibir o resultado
    std::cout << "O arquivo '" << nome_do_arquivo << "' possui " << total_palavras << " palavras." << std::endl;

    return 0;
}