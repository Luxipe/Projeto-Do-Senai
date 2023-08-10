#include <iostream>
#include <cstdlib>   // Para a função rand()
#include <ctime>     // Para a função time()

char gerarLetraAleatoria() {
    // Gere um número aleatório entre 0 e 25 (correspondente às letras do alfabeto)
    int numeroAleatorio = rand() % 26;
    
    // Converta o número para o caractere correspondente na tabela ASCII
    char letra = 'a' + numeroAleatorio;
    
    return letra;
}

int main() {
    // Inicialize a semente para a função rand() usando o tempo atual
    srand(time(nullptr));
    
    // Gere e imprima 10 letras aleatórias
    for (int i = 0; i < 10; ++i) {
        char letra = gerarLetraAleatoria();
        std::cout << letra << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}