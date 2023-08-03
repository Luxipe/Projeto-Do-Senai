#include <iostream>

int main() {
    const int numPlanetas = 5;
    int temperaturas[numPlanetas];
    int somaTemperaturas = 0;

    // Preenchendo o vetor com valores digitados pelo usuário
    std::cout << "Digite as temperaturas médias dos 5 planetas do Sistema Solar (em graus Celsius):\n";
    for (int i = 0; i < numPlanetas; ++i) {
        std::cout << "Planeta " << i + 1 << ": ";
        std::cin >> temperaturas[i];
        somaTemperaturas += temperaturas[i];
    }

    // Calculando a temperatura média
    float temperaturaMedia = static_cast<float>(somaTemperaturas) / numPlanetas;

    // Exibindo a temperatura média dos planetas
    std::cout << "A temperatura média dos planetas é: " << temperaturaMedia << " graus Celsius.\n";

    return 0;
}