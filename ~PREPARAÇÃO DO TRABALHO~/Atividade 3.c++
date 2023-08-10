#include <iostream>
#include <cstdlib>  // Biblioteca para funções de geração de números aleatórios
#include <ctime>    // Biblioteca para gerar semente de tempo para números aleatórios
#include <cctype>   // Biblioteca para funções de caracteres

// Função para gerar uma letra aleatória do alfabeto
char gerarLetraAleatoria() {
    // Gera um número aleatório entre 0 e 25 (representando as 26 letras do alfabeto)
    int randomIndex = std::rand() % 26;
    // Converte o índice para um caractere maiúsculo do alfabeto
    return 'A' + randomIndex;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios com o valor de tempo atual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Gera a letra aleatória que o jogador precisa adivinhar
    char letraAlvo = gerarLetraAleatoria();

    int tentativasMaximas = 5;
    int tentativas = 0;
    char chute;

    std::cout << "Bem-vindo ao Jogo da Letra Aleatória!" << std::endl;

    // Loop para permitir que o jogador chute a letra até acertar ou atingir o limite de tentativas
    while (tentativas < tentativasMaximas) {
        std::cout << "Tentativa " << tentativas + 1 << "/" << tentativasMaximas << ": ";
        std::cin >> chute;

        chute = std::toupper(chute); // Converte o chute para maiúscula

        if (!std::isalpha(chute)) {
            std::cout << "Por favor, digite uma letra válida." << std::endl;
            continue; // Pula para a próxima iteração do loop
        }

        if (chute == letraAlvo) {
            std::cout << "Parabéns! Você acertou a letra." << std::endl;
            break; // Sai do loop se o jogador acertar
        } else {
            std::cout << "Letra incorreta. Tente novamente." << std::endl;
        }

        tentativas++;
    }

    // Se o jogador não acertar após o número máximo de tentativas
    if (tentativas == tentativasMaximas) {
        std::cout << "Suas tentativas acabaram. A letra correta era: " << letraAlvo << std::endl;
    }

    return 0;
}