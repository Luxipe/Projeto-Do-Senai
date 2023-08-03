#include <iostream>

int calcularSomaDigitos(int numero) {
    int soma = 0;

    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito do número
        soma += digito;
        numero /= 10; // Remove o último dígito do número
    }

    return soma;
}

int main() {
    char continuar;

    do {
        int numero;

        std::cout << "Digite um número inteiro positivo: ";
        std::cin >> numero;

        if (numero < 0) {
            std::cout << "O número deve ser inteiro positivo." << std::endl;
        } else {
            int somaDigitos = calcularSomaDigitos(numero);
            std::cout << "A soma dos dígitos do número é: " << somaDigitos << std::endl;
        }

        std::cout << "Deseja calcular a soma de outro número? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;