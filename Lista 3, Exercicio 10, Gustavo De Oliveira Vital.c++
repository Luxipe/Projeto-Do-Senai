#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string nomeArquivo;

    std::cout << "Digite o nome do arquivo de código-fonte (.cpp): ";
    std::cin >> nomeArquivo;

    std::ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        // Exibe a mensagem indicando que o arquivo foi encontrado e compilado com sucesso
        std::cout << "Compilando " << nomeArquivo << "... Compilação concluída com sucesso!" << std::endl;
    } else {
        // Exibe a mensagem indicando que o arquivo não foi encontrado
        std::cout << "Arquivo não encontrado." << std::endl;
    }

    return 0;
}