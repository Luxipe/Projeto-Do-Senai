#include <iostream>
#include <string>

int main() {
    // vamos adicionar uma Declaração do vetor de frutas
    std::string frutas[5] = {"Tanjerina", "Banana", "Laranja", "Uva", "Kiwi"};

    // vai ficar mostrando o nome de cada fruta em uma linha separada
    for (int i = 0; i < 5; i++) {
        std::cout << frutas[i] << std::endl; // vamos mostrar o nome da fruta atual
    }

    return 0; 
}