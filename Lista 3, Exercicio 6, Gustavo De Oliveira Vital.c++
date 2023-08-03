#include <iostream>

int main() {
    int coordenadaX, coordenadaY;

    std::cout << "Digite a coordenada X: ";
    std::cin >> coordenadaX;

    std::cout << "Digite a coordenada Y: ";
    std::cin >> coordenadaY;

    if (coordenadaX >= -100 && coordenadaX <= 100 && coordenadaY >= -50 && coordenadaY <= 50) {
        // Exibe a mensagem indicando que a localização é possível
        std::cout << "Localização possível do esconderijo do Coringa." << std::endl;
    } else {
        // Exibe a mensagem indicando que as coordenadas estão fora dos limites da cidade
        std::cout << "Coordenadas fora dos limites da cidade." << std::endl;
    }

    return 0;
}