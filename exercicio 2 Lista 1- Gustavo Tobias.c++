#include <iostream>
#include <vector>

bool ehPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    // Cria um vetor para marcar se os números são primos ou não
    std::vector<bool> isPrimo(numero + 1, true);
    isPrimo[0] = isPrimo[1] = false; // 0 e 1 não são primos

    for (int p = 2; p * p <= numero; p++) {
        if (isPrimo[p]) {
            for (int i = p * p; i <= numero; i += p) {
                isPrimo[i] = false;
            }
        }
    }

    return isPrimo[numero];
}

int main() {
    int numero;
    char continuar;

    do {
        std::cout << "Digite um número inteiro para verificar se é primo: ";
        std::cin >> numero;

        if (ehPrimo(numero)) {
            std::cout << numero << " é um número primo." << std::endl;
        } else {
            std::cout << numero << " não é um número primo." << std::endl;
        }

        std::cout << "Deseja verificar outro número? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}