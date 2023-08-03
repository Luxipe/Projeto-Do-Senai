#include <iostream>

int main() {
    int quantidade, valorUnitario;

    std::cout << "Digite a quantidade de Bat-Saqueadores que deseja comprar: ";
    std::cin >> quantidade;

    std::cout << "Digite o valor unitário de cada Bat-Saqueador: ";
    std::cin >> valorUnitario;

    int valorTotal = quantidade * valorUnitario;
    // Exibe o valor total da compra
    std::cout << "Valor total da compra: " << valorTotal << " Bat-Saqueadores." << std::endl;

    return 0;
}