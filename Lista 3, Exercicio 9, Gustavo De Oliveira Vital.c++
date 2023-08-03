#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string aliado1, aliado2, aliado3;

    std::cout << "Digite o nome do primeiro aliado do Batman: ";
    std::cin >> aliado1;

    std::cout << "Digite o nome do segundo aliado do Batman: ";
    std::cin >> aliado2;

    std::cout << "Digite o nome do terceiro aliado do Batman: ";
    std::cin >> aliado3;

    // Ordena os nomes dos aliados em ordem alfabética
    std::sort(aliado1.begin(), aliado1.end());
    std::sort(aliado2.begin(), aliado2.end());
    std::sort(aliado3.begin(), aliado3.end());

    // Exibe os nomes dos aliados em ordem alfabética
    std::cout << "Aliados do Batman em ordem alfabética: ";
    std::cout << aliado1 << ", " << aliado2 << ", " << aliado3 << std::endl;

    return 0;
}