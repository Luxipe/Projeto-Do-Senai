#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::string palavra = "girafa"; // Palavra que o jogador deve adivinhar
    std::string palavraMascarada(palavra.length(), '_'); // Inicializa a palavra mascarada com underscores
    const int limiteTentativas = 6; // Limite de tentativas

    srand(time(nullptr)); // Inicializa o gerador de números aleatórios com o valor do tempo atual

    std::cout << "Bem-vindo ao jogo de adivinhação de palavras!\n";
    std::cout << "Tente adivinhar a palavra: " << palavraMascarada << std::endl;

    int tentativas = 0;
    char letra;
    while (tentativas < limiteTentativas) {
        std::cout << "Digite uma letra: ";
        std::cin >> letra;

        bool acertou = false;
        for (size_t i = 0; i < palavra.length(); ++i) {
            if (palavra[i] == letra) {
                palavraMascarada[i] = letra; // Revela a letra na palavra mascarada
                acertou = true;
            }
        }

        if (acertou) {
            std::cout << "Acertou! Palavra atual: " << palavraMascarada << std::endl;
        } else {
            tentativas++;
            std::cout << "Errou! Tentativas restantes: " << limiteTentativas - tentativas << std::endl;
        }

        if (palavraMascarada == palavra) {
            std::cout << "Parabéns! Você acertou a palavra: " << palavra << std::endl;
            break; // Sai do loop se a palavra for adivinhada corretamente
        }
    }

    if (palavraMascarada != palavra) {
        std::cout << "Suas tentativas acabaram. A palavra era: " << palavra << std::endl;
    }

    return 0;
}
