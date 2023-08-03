#include <iostream>
#include <cctype> // Para usar a função tolower()

bool ehPalindromo(const std::string& str) {
    int esquerda = 0;
    int direita = str.length() - 1;

    while (esquerda < direita) {
        // Ignora espaços e diferenciação entre maiúsculas e minúsculas
        char charEsquerda = std::tolower(str[esquerda]);
        char charDireita = std::tolower(str[direita]);

        if (std::isalpha(charEsquerda) && std::isalpha(charDireita)) {
            if (charEsquerda != charDireita) {
                return false;
            }
            esquerda++;
            direita--;
        }
        else if (!std::isalpha(charEsquerda)) {
            esquerda++;
        }
        else if (!std::isalpha(charDireita)) {
            direita--;
        }
    }

    return true;
}

std::string inverterPalavra(const std::string& str) {
    std::string palavraInvertida = str;
    int esquerda = 0;
    int direita = palavraInvertida.length() - 1;

    while (esquerda < direita) {
        std::swap(palavraInvertida[esquerda], palavraInvertida[direita]);
        esquerda++;
        direita--;
    }

    return palavraInvertida;
}

int main() {
    std::string palavra;

    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, palavra);

    if (ehPalindromo(palavra)) {
        std::cout << "A palavra/frase é um palíndromo." << std::endl;
    } else {
        std::cout << "A palavra/frase não é um palíndromo." << std::endl;
    }

    std::string palavraInvertida = inverterPalavra(palavra);
    std::cout << "Palavra/Frase invertida: " << palavraInvertida << std::endl;

    return 0;
}