// Nome Gustavo De Oliveira Vital e Gustavo Tobias
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

// Função para gerar número aleatório usando aritmética modular
int gerarNumeroAleatorio(int seed) {
    int numero = (seed * 13 + 7) % 60 + 1;  // Faz uns cálculos e retorna o número aleatório
    return numero;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));  // Inicializa que gera números aleatórios

    std::cout << "Bem-vindo ao jogo Mega Senai!" << std::endl;  // Vamos dar um oi bonito pro jogador

    char jogarNovamente;  // Variável para saber se o jogador quer jogar de novo
    do {
        std::cout << "\nEscolha 6 números diferentes entre 1 e 60:" << std::endl;

        std::vector<int> numerosSorteados(6);
        for (int i = 0; i < 6; i++) {
            numerosSorteados[i] = gerarNumeroAleatorio(std::rand());  // Gera 6 números aleatórios pra sortear
        }

        std::vector<int> numerosChute(6);
        for (int i = 0; i < 6; i++) {
            std::cout << "Número " << i + 1 << ": ";
            std::cin >> numerosChute[i];  // O jogador escolhe os números
        }

        int acertos = 0;
        for (int i = 0; i < 6; i++) {
            if (std::find(numerosSorteados.begin(), numerosSorteados.end(), numerosChute[i]) != numerosSorteados.end()) {
                acertos++;  // Vê quantos números o jogador acertou comparando com os sorteados
            }
        }

        std::cout << "\nNúmero de acertos: " << acertos << std::endl;

        if (acertos == 6) {
            std::cout << "Parabéns! Você acertou todos os números." << std::endl;
        } else {
            std::cout << "Números sorteados:";
            for (int numero : numerosSorteados) {
                std::cout << " " << numero;  // Mostra os números sorteados pro jogador
            }
            std::cout << std::endl;
        }

        std::cout << "Deseja jogar novamente? (S/N): ";
        std::cin >> jogarNovamente;  // Pergunta se quer jogar de novo

    } while (jogarNovamente == 'S' || jogarNovamente == 's');  // Se quiser, continua, obviamente

    std::cout << "Obrigado por jogar o Mega Senai!" << std::endl;  // Fim das apostas

    return 0;
}