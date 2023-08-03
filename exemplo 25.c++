#include <iostream>

bool isPrime(int n) {
    // Verifica se o número é igual a 1, pois 1 não é primo
    if (n == 1) {
        return false;
    }

    // Verifica se o número é divisível por qualquer número de 2 a sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    // Solicita ao usuário fornecer um número
    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    // Verifica se o número é primo
    if (isPrime(num)) {
        std::cout << num << " é um número primo." << std::endl;
    } else {
        std::cout << num << " não é um número primo." << std::endl;
    }

    return 0;
}