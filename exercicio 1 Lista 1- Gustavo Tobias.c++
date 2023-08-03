#include <iostream>

double calcularAreaRetangulo(double base, double altura) {
    return base * altura;
}

int main() {
    double base, altura;
    char continuar;

    do {
        std::cout << "Digite o valor da base do retângulo: ";
        std::cin >> base;

        std::cout << "Digite o valor da altura do retângulo: ";
        std::cin >> altura;

        if (base <= 0 || altura <= 0) {
            std::cout << "A base e a altura devem ser valores positivos maiores que zero." << std::endl;
        } else {
            double area = calcularAreaRetangulo(base, altura);
            std::cout << "A área do retângulo é: " << area << std::endl;
        }

        std::cout << "Deseja calcular a área de outro retângulo? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}