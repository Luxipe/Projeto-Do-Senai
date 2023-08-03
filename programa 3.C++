#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;


    if (numero > 0) {
            std::cout << "0 número é positivo!" << std::endl;
            
    } else {
        std::cout << "0 número é negativo ou zero." << std::endl;
    }


    return 0;

}
