#include <iostream>
#include <vector>

//vou utilizar uma  Função para calcular a sequência de Fibonacci até o valor n
std::vector<int> fibonacciSequence(int n) {
    std::vector<int> sequence = {0, 1}; // Iniciaremos a sequência com os dois primeiros números: 0 e 1

    // vamos continuar adicionando números à sequência enquanto o último número adicionado mais o penúltimo número
    // adicionado forem menores ou iguais a n
    while (sequence.back() + sequence[sequence.size() - 2] <= n) {
        int nextNumber = sequence.back() + sequence[sequence.size() - 2];
        sequence.push_back(nextNumber);
    }

    return sequence;
}

int main() {
    try {
        int num;
        std::cout << "Digite um número inteiro: ";
        std::cin >> num;

        if (num < 0) {
            std::cout << "Por favor, digite um número inteiro positivo." << std::endl;
            return 1;
        }

        // vou Calcular a sequência de Fibonacci até o valor informado
        std::vector<int> fibSequence = fibonacciSequence(num);

        //vai  Exibir a sequência de Fibonacci
        std::cout << "Sequência de Fibonacci até o valor " << num << ": " << std::endl;
        for (int number : fibSequence) {
            std::cout << number << ", ";
        }
        std::cout << std::endl;

    } catch (std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}