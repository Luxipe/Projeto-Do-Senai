#include <iostream>
using namespace std;

int main() {
    int vetor[5]; // vai Declarar um vetor de inteiros com 5 elementos

    // vou adicionar um Loop para preencher o vetor com valores digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor para o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // vou exibir os elementos do vetor na tela
    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}