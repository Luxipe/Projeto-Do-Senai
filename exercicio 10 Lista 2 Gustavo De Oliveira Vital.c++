#include <iostream>
using namespace std;

// vou utilizar a Função que calcula o valor aproximado de pi usando a série de Leibniz
double calcularPi(int numeroIteracoes) {
    double pi = 0.0;
    int sinal = 1;          // vou utilizar a  Variável para alternar o sinal dos termos da série
    double denominador = 1.0; //vou utilizar a  Variável para armazenar os denominadores dos termos da série

    // Laço para somar os termos da série de Leibniz
    for (int i = 0; i < numeroIteracoes; i++) {
        pi += sinal / denominador; // vou Adicionar o termo atual à soma de pi
        sinal *= -1;               // vai Alternar o sinal para o próximo termo (alternando entre positivo e negativo)
        denominador += 2.0;        // vai Incrementar o denominador em 2 para obter os números ímpares (1, 3, 5, ...)
    }

    return 4 * pi; // vou Multiplicar por 4 para obter o valor aproximado de pi (4 * (1 - 1/3 + 1/5 - 1/7 + ...))
}

int main() {
    int numeroIteracoes;
    cout << "Digite o numero de iteracoes para calcular o valor de pi: ";
    cin >> numeroIteracoes;

    if (numeroIteracoes <= 0) {
        cout << "Por favor, digite um numero inteiro positivo maior que zero." << endl;
        return 1; // Sai do programa com código de erro 1 se a entrada for inválida
    }

    double valorPi = calcularPi(numeroIteracoes); // Chama a função para calcular o valor de pi
    cout << "Valor aproximado de pi apos " << numeroIteracoes << " iteracoes: " << valorPi << endl;

    return 0; // Indica que o programa foi executado com perfeição
}