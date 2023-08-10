#include <iostream>
#include <ctime>
#include <vector>
int gerarNumeroAleatorio(int seed) {
    // Gere um número "pseudo-aleatório" usando aritmética modular
    int numero = (seed * 13 + 7) % 60 + 1;
    return numero;
}

int main() {
    // Inicializa o gerador de números aleatórios com base no tempo atual
    std::srand(std::time(0));

    // Inicializa uma variável para contar o número de acertos
    int acertos = 0;

    // Gera e armazena os números sorteados
    int numerosSorteados[6];
    for (int i = 0; i < 6; i++) {
        numerosSorteados[i] = gerarNumeroAleatorio(std::rand());
    }

    // Loop através dos números digitados pelo jogador
    int numerosChute[6];  // Você precisa declarar e preencher essa array com os números chutados pelo jogador
    for (int i = 0; i < 6; i++) {
        // Verifica se o número digitado pelo jogador está na lista de números sorteados
        bool acertouEsseNumero = false;  // Inicializa como falso para cada número digitado

        for (int j = 0; j < 6; j++) {
            if (numerosChute[i] == numerosSorteados[j]) {
                acertouEsseNumero = true;  // Se o número foi encontrado, mude para verdadeiro
                break;  // Não é necessário continuar procurando
            }
        }

        // Se o jogador acertou o número, aumenta o contador de acertos
        if (acertouEsseNumero) {
            acertos++;
        }
    }
    // vet1[i] == vet2[i]
    for (int i = 0; i < 6; i++) {
         if (vector1[1] == vector2 [i]) {
           acertouEsse Numero = true;
            break;
         } 

    // Imprime a quantidade de acertos do jogador
    std::cout << "Número de acertos: " << acertos << std::endl;

    return 0;
}
