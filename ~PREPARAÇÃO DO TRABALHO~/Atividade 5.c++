#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios com o valor atual do tempo

    do {
        char letra = 'A' + rand() % 26; // Gera uma letra aleatória entre 'A' e 'Z'
        std::cout << "Letra sorteada: " << letra << std::endl;

        std::cout << "Deseja jogar novamente? (S/N): ";
        char escolha;
        std::cin >> escolha;

        if (escolha == 'N' || escolha == 'n') {
            std::cout << "Encerrando o programa." << std::endl;
            break;
        }
    } while (true);

    return 0;
}