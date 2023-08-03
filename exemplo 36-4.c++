#include <iostream>

int main() {
    int num1 = 5; // Define a variável 'num1' e atribui o valor 5 a ela.
    int num2 = 10; // Define a variável 'num2' e atribui o valor 10 a ela.
    int resultado_soma = num1 + num2; // Calcula a soma de 'num1' e 'num2' e armazena o resultado em 'resultado_soma'.
    int resultado_multiplicacao = num1 * num2; // Calcula a multiplicação de 'num1' e 'num2' e armazena o resultado em 'resultado_multiplicacao'.

    std::cout << "A soma de " << num1 << " e " << num2 << " é: " << resultado_soma << std::endl; // Imprime a mensagem com a soma de 'num1' e 'num2'.
    std::cout << "A multiplicação de " << num1 << " e " << num2 << " é: " << resultado_multiplicacao << std::endl; // Imprime a mensagem com a multiplicação de 'num1' e 'num2'.

    return 0; // Indica que o programa foi executado com sucesso.
}