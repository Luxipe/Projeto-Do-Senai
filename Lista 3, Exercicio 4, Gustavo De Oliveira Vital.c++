#include <iostream>

int main() {
    int codigoAcesso;

    std::cout << "Digite o código de acesso (4 dígitos): ";
    std::cin >> codigoAcesso;

    if (codigoAcesso == 1966) {
        // Exibe a mensagem indicando que o acesso foi autorizado
        std::cout << "Acesso autorizado." << std::endl;
    } else {
        // Exibe a mensagem indicando que o acesso foi negado
        std::cout << "Acesso negado." << std::endl;
    }

    return 0;
}