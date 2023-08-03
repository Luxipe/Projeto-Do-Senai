#include <iostream>
#include <vector>
#include <limits> // Para usar o limite máximo e mínimo de float

int main() {
    const int tamanhoVetor = 6;
    std::vector<float> alturas;

    std::cout << "Digite as alturas (em metros) das jogadoras da seleção brasileira feminina:" << std::endl;

    // Preencher o vetor com valores digitados pelo usuário
    for (int i = 0; i < tamanhoVetor; i++) {
        float altura;
        std::cout << "Digite a altura da jogadora " << i + 1 << ": ";
        
        // Verifica se o valor digitado é um número float válido
        while (!(std::cin >> altura)) {
            std::cout << "Valor inválido. Digite novamente: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        alturas.push_back(altura);
    }

    // Encontrar a maior e a menor altura presente no vetor
    float maiorAltura = alturas[0];
    float menorAltura = alturas[0];

    for (int i = 1; i < tamanhoVetor; i++) {
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }

        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }

    // Exibir os resultados
    std::cout << "\nAlturas das jogadoras da seleção brasileira feminina:" << std::endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Jogadora " << i + 1 << ": " << alturas[i] << " metros" << std::endl;
    }

    std::cout << "\nMaior altura: " << maiorAltura << " metros" << std::endl;
    std::cout << "Menor altura: " << menorAltura << " metros" << std::endl;

    return 0;
}