#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    int num = 1;
                  //a variavel num e coloca em cada iteração, loop sera executado 10 vezes, calculando corretamente a soma dos primeiros 10 números. 
    while (num <= 10) {
        soma += num;
        num++; // adiciona num para evitar um loop infinito
    }

    cout << "A soma dos 10 primeiros números é: " << soma << endl;

    return 0;
}