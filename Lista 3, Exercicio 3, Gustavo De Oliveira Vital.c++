#include <iostream>

int main() {
    int numHerois, numViloes;

    std::cout << "Digite a quantidade de heróis capturados: ";
    std::cin >> numHerois;

    std::cout << "Digite a quantidade de vilões capturados: ";
    std::cin >> numViloes;

    if (numHerois > numViloes) {
        // Exibe a mensagem indicando que Batman capturou mais heróis
        std::cout << "Batman capturou mais heróis!" << std::endl;
    } else if (numViloes > numHerois) {
        // Exibe a mensagem indicando que Batman capturou mais vilões
        std::cout << "Batman capturou mais vilões!" << std::endl;
    } else {
        // Exibe a mensagem indicando que Batman capturou a mesma quantidade de heróis e vilões
        std::cout << "Batman capturou a mesma quantidade de heróis e vilões!" << std::endl;
    }

    return 0;
}