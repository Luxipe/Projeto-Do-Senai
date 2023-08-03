#include <iostream>

using namespace std;

// vamos utilizar  para a Função para calcular a média dos elementos do vetor
double calcular_media(int vetor[], int tamanho) {
    // vamos utilizar para Inicializar a variável soma com zero
    int soma = 0;

    // vamos utilizar o Loop para somar todos os elementos do vetor
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    // isto vai Calcular a média dos elementos
    double media = static_cast<double>(soma) / tamanho;
    return media;
}

int main() {
    // vai ser uma Declaração do vetor com 10 elementos inteiros
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //vamos utilizar a função para calcular a média e armazena o resultado
    double media = calcular_media(vetor, 10);

    // isto vai Exibir o resultado com uma mensagem explicando
    cout << "A média dos valores no vetor é: " << media << endl;

    return 0;
}