#include <iostream>

int main() {
    int vetor[8];

    std::cout << "Digite 8 números inteiros:\n";

    // vou utilizar para preencher  o vetor com os números digitados pelo usuário
    for (int i = 0; i < 8; i++) {
        std::cin >> vetor[i];
    }

    std::cout << "Elementos pares do vetor: ";

    // vai Exibir os elementos pares do vetor
    for (int i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0) {
            std::cout << vetor[i] << " ";
        }
    }

    std::cout << "\n";

    return 0;
}