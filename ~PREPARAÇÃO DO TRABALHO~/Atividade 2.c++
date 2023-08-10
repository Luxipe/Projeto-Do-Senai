#include <iostream>
#include <cctype> // Biblioteca para funções de caracteres

// Função para verificar se a letra existe no alfabeto
bool verificarLetraNoAlfabeto(char letra) {
    // A função isalpha verifica se o caractere é uma letra (maiúscula ou minúscula)
    // Retorna um valor diferente de zero se for uma letra e zero caso contrário
    return std::isalpha(letra) != 0;
}

int main() {
    char letra;

    // Solicita ao usuário que digite uma letra
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    // Chama a função verificarLetraNoAlfabeto para verificar se a letra existe no alfabeto
    if (verificarLetraNoAlfabeto(letra)) {
        // Se a letra existir, imprime essa mensagem na tela
        std::cout << "A letra existe no alfabeto." << std::endl;
    } else {
        // Caso contrário, imprime essa mensagem na tela
        std::cout << "A letra NÃO existe no alfabeto." << std::endl;
    }

    return 0; // Retorna zero para indicar que o programa foi executado com sucesso
}
