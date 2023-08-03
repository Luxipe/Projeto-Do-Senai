#include <iostream>

int main() {
    int planetas_anoes[8]; // Vetor de inteiros para representar a massa dos 8 planetas anões
    int massa_total = 0; // Variável para armazenar a massa total dos planetas anões

    // Preenchendo o vetor com as massas dos planetas anões
    std::cout << "Digite a massa dos 8 planetas anões:\n";
    for (int i = 0; i < 8; i++) {
        std::cout << "Planeta " << i + 1 << ": ";
        std::cin >> planetas_anoes[i];
        massa_total += planetas_anoes[i]; // Adicionando a massa do planeta atual à massa total
    }

    // Exibindo a massa total dos planetas anões
    std::cout << "\nMassa total dos planetas anões: " << massa_total << " unidades de massa terrestre.\n";

    return 0;
}