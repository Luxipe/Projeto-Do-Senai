#include <iostream>

int main() {
    int num, soma = 0;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> num;

    while (num > 0) {
        int digito = num % 10;
        soma += digito;
        num /= 10;
    }

    std::cout << "A soma dos dígitos é: " << soma << std::endl;

    return 0;
}