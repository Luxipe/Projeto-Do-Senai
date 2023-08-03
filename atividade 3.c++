#include <iostream>

int main() {
    const int tamanhoVetor = 6;
    double vetorEstrelas[tamanhoVetor];
    double somaMagnitude = 0.0;

    // Leitura das magnitudes aparentes das estrelas
    std::cout << "Digite a magnitude aparente das " << tamanhoVetor << " estrelas:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Estrela " << (i + 1) << ": ";
        std::cin >> vetorEstrelas[i];
        somaMagnitude += vetorEstrelas[i];
    }

    // Cálculo da magnitude média das estrelas
    double magnitudeMedia = somaMagnitude / tamanhoVetor;

    // Exibição do resultado
    std::cout << "Magnitude média das estrelas: " << magnitudeMedia << std::endl;

    return 0;
}