#include <iostream>
#include <string>

int main() {
    const int numPlanetas = 8; // Número de planetas no Sistema Solar
    std::string planetas[numPlanetas] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", "Saturno", "Urano", "Netuno"};
    double distancias[numPlanetas] = {57.9, 108.2, 149.6, 227.9, 778.3, 1427.0, 2871.0, 4497.1}; // Distâncias médias em milhões de km

    // Encontrar o planeta mais próximo do Sol
    int planetaMaisProximoIndice = 0; // Índice do planeta mais próximo
    double distanciaMaisProxima = distancias[0]; // Distância do planeta mais próximo
    for (int i = 1; i < numPlanetas; i++) {
        if (distancias[i] < distanciaMaisProxima) {
            distanciaMaisProxima = distancias[i];
            planetaMaisProximoIndice = i;
        }
    }

    // Encontrar o planeta mais distante do Sol
    int planetaMaisDistanteIndice = 0; // Índice do planeta mais distante
    double distanciaMaisDistante = distancias[0]; // Distância do planeta mais distante
    for (int i = 1; i < numPlanetas; i++) {
        if (distancias[i] > distanciaMaisDistante) {
            distanciaMaisDistante = distancias[i];
            planetaMaisDistanteIndice = i;
        }
    }

    // Exibir o resultado
    std::cout << "O planeta mais próximo do Sol é: " << planetas[planetaMaisProximoIndice] << std::endl;
    std::cout << "O planeta mais distante do Sol é: " << planetas[planetaMaisDistanteIndice] << std::endl;

    return 0;
}