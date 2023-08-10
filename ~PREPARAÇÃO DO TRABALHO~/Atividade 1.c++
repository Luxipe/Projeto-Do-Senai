#include <iostream>
#include <cstdlib>   // Biblioteca para geração de números aleatórios
#include <ctime>     // Biblioteca para manipulação de tempo

// Função para gerar uma letra aleatória do alfabeto
char gerarLetraAleatoria() {
    // Gere um número aleatório entre 0 e 25 (representando as letras de A a Z)
    int randomIndex = rand() % 26;

    // Calcule o valor ASCII da letra A e adicione o índice para obter a letra correspondente
    char randomLetter = 'A' + randomIndex;

    return randomLetter;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    // Gera e imprime a letra aleatória
    char letraAleatoria = gerarLetraAleatoria();
    std::cout << "Letra aleatória gerada: " << letraAleatoria << std::endl;

    return 0;
}
