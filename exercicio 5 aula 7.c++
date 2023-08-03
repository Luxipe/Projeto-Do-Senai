#include <iostream>
using namespace std;

int main() {
    int count = 10;
                                                       Loop Do While - Contagem regressiva:
    // Loop 'do-while' que imprimirá os números de 10 a 1
    do {
        cout << count << endl; // Imprime o valor atual de 'count'
        count--; // diminui 'count' em cada iteração
    } while (count >= 1); // vai continuar o loop enquanto 'count' for maior ou igual a 1

    return 0;
}