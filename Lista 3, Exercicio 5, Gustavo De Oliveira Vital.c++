#include <iostream>

int main() {
    int distanciaInimigo;

    std::cout << "Digite a distância do inimigo (em metros): ";
    std::cin >> distanciaInimigo;

    if (distanciaInimigo <= 100) {
        // Exibe a mensagem indicando que o perigo está muito próximo
        std::cout << "Perigo muito próximo! Prepare-se para o combate!" << std::endl;
    } else {
        // Exibe a mensagem indicando que o inimigo foi detectado, mas não é uma ameaça iminente
        std::cout << "Inimigo detectado, mas ainda não é uma ameaça iminente." << std::endl;
    }

    return 0;
}