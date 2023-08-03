#include <iostream>

int main() {
    const int TAMANHO_VETOR = 10;
    int espectadores[TAMANHO_VETOR];

    // Preenchendo o vetor com o número de espectadores em cada jogo
    std::cout << "Digite o número de espectadores em cada jogo:\n";
    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        std::cout << "Jogo " << i + 1 << ": ";
        std::cin >> espectadores[i];
    }

    // Contando o número de jogos com público superior a 50.000 espectadores
    int jogosComPublicoMaiorQue50000 = 0;
    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        if (espectadores[i] > 50000) {
            jogosComPublicoMaiorQue50000++;
        }
    }

    // Exibindo o resultado
    std::cout << "O número de jogos com público superior a 50.000 espectadores é: "
              << jogosComPublicoMaiorQue50000 << std::endl;

    return 0;
}