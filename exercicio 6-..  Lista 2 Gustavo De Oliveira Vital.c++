#include <iostream>

//vou utilizar a  Função para verificar se um número é primo
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Se caso  encontrarmos um divisor, o número não é primo
        }
    }

    return true; // Se não encontrarmos nenhum divisor, o número é primo
}

int main() {
    int num;
    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    std::cout << "Números primos menores ou iguais a " << num << ": ";

    // Verificamos todos os números de 2 até o número digitado.
    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) {
            std::cout << i << " "; // Se o número for primo, vai exibir na saida
        }
    }

    std::cout << std::endl;

    return 0;
}