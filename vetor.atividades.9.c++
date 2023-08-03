#include <iostream>

int main() {
    const int tamanho = 5; // Tamanho dos vetores
    int vetor1[tamanho];
    int vetor2[tamanho];
    int vetorResultado[tamanho];

    // vai Preencher o primeiro vetor
    std::cout << "Digite " << tamanho << " valores para o primeiro vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> vetor1[i];
    }

    // vai Preencher o segundo vetor
    std::cout << "Digite " << tamanho << " valores para o segundo vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> vetor2[i];
    }

    // soma e armazenando no terceiro vetor
    for (int i = 0; i < tamanho; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }

    // vai Exibir o resultado
    std::cout << "Resultado da soma dos vetores:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Elemento " << i + 1 << ": " << vetorResultado[i] << "\n";
    }

    return 0;
}