#include <iostream>
#include <string>

int main() {
    std::string nome;

    std::cout << "Digite o nome do comissário: ";
    std::cin >> nome;

    // Exibe a mensagem com o nome do comissário
    std::cout << "Comissário " << nome << ", acione o Bat-Sinal!" << std::endl;

    return 0;
}