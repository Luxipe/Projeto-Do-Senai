#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int vetor[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // ele vai Declarar um vetor de inteiros com 10 elementos e inicializa com valores de 1 a 10
    int resultado = 0; // isso vai ser uma Variável para armazenar o resultado da soma dos elementos do vetor

    // eu vou adicionar um Loop para somar todos os elementos do vetor
    for (int i = 0; i < SIZE; i++) {
        resultado += vetor[i]; //  ele vai Soma o valor do elemento atual ao resultado
    }

    cout << "A soma dos elementos do vetor e: " << resultado << endl; // vai Exibir o resultado da soma

    return 0;
}