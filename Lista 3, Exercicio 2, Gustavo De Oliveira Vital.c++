#include <iostream>

int main() {
    int velocidade, altitude;

    std::cout << "Digite a velocidade do voo (em km/h): ";
    std::cin >> velocidade;

    std::cout << "Digite a altitude do voo (em metros): ";
    std::cin >> altitude;

    // Exibe a mensagem com a velocidade e altitude pretendidas
    std::cout << "Batwing decolando a " << velocidade << " km/h a " << altitude << " metros do solo." << std::endl;

    return 0;
}