#include <iostream>
#include <limits> // inclui  a biblioteca limits para usar o maior e menor valor possível de um inteiro

int main() {
    int numero, maior = std::numeric_limits<int>::min(); // Inicializamos maior com o menor valor possível de um inteiro
    int menor = std::numeric_limits<int>::max(); // vou usar menor com o maior valor possível de um inteiro

    std::cout << "Digite uma sequência de números inteiros (digite 0 para finalizar):" << std::endl;

    while (true) {
        std::cin >> numero;

        if (numero == 0) {
            break; // caso o usuário digitar 0, encerramos o loop
        }

        // Atualizamos o valor do maior e do menor, se necessário
        if (numero > maior) {
            maior = numero; // Se o número digitado for maior que o valor atual de "maior", atualizamos "maior"
        }

        if (numero < menor) {
            menor = numero; // Se o número digitado for menor que o valor atual de "menor", atualizamos "menor"
        }
    }

    // vai exibir o maior e o menor valor digitado
    if (maior != std::numeric_limits<int>::min()) {
        std::cout << "Maior valor digitado: " << maior << std::endl;
    } else {
        std::cout << "Nenhum valor válido foi digitado." << std::endl;
    }

    if (menor != std::numeric_limits<int>::max()) {
        std::cout << "Menor valor digitado: " << menor << std::endl;
    } else {
        std::cout << "Nenhum valor válido foi digitado." << std::endl;
    }

    return 0;
}