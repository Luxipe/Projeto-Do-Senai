#include <iostream>

// vou usar uma Função para inverter o vetor
void inverterVetor(int vetor[], int tamanho) {
    int meio = tamanho / 2;
    for (int i = 0; i < meio; i++) {
        // vou usar para  Troca os elementos do começo com os elementos do final
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = temp;
    }
}

// isso vai ser uma  Função principal
int main() {
    // vai ser uma Declaração do vetor de 6 números inteiros
    int vetor[6] = {1, 2, 3, 4, 5, 6};

    // vai mostrar o vetor original
    std::cout << "Vetor original: ";
    for (int i = 0; i < 6; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    // vai Chamar a função para inverter o vetor
    inverterVetor(vetor, 6);

    // vai mostrar o vetor resultante, e mostrar o valor invertido.
    std::cout << "Vetor invertido: ";
    for (int i = 0; i < 6; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}