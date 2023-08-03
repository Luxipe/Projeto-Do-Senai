#include <iostream>

int main() {
    int num;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> num;

    std::cout << "Divisores de " << num << ": ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}