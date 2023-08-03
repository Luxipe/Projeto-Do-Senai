#include <iostream>
#include <algorithm>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    // Declaração do vetor de strings com 5 elementos
    string vetor[5] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter"};

    // Ordena o vetor em ordem alfabética usando a função sort da biblioteca algorithm
    sort(vetor, vetor + 5);

    // Loop para imprimir os elementos do vetor ordenado
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << endl;
    }


    return 0;
}