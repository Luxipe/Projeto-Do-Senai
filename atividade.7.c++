#include <iostream>

int main() {
    int golsMarcados[5];
    int golsSofridos[5];
    int saldoGols[5];

    // Preenchendo os vetores de gols marcados e gols sofridos
    std::cout << "Digite os gols marcados pela Seleção Brasileira em cada partida:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Partida " << i + 1 << ": ";
        std::cin >> golsMarcados[i];
    }

    std::cout << "Digite os gols sofridos pela Seleção Brasileira em cada partida:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Partida " << i + 1 << ": ";
        std::cin >> golsSofridos[i];
    }

    // Calculando o saldo de gols em cada partida
    for (int i = 0; i < 5; ++i) {
        saldoGols[i] = golsMarcados[i] - golsSofridos[i];
    }

    // Exibindo o saldo de gols em cada partida
    std::cout << "\nSaldo de gols da Seleção Brasileira em cada partida:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Partida " << i + 1 << ": " << saldoGols[i] << std::endl;
    }

    return 0;
}