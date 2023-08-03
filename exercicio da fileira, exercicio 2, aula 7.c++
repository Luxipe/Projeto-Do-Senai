#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // o Loop for que percorre os elementos do vetor
    // vai Começar em i = 0 e vai até i < 5 (pois o vetor tem 5 elementos)
    for (int i = 0; i < 5; i++) {
        // vai Adiciona o valor do elemento do vetor na posição i à variável 'sum'
        sum += arr[i];
    }

    // vai Imprimir  o resultado da soma dos elementos do vetor
    cout << "A soma dos elementos do vetor é: " << sum << endl;

    return 0;
}






