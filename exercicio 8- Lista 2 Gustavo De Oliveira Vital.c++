#include <iostream>
#include <cmath>
using namespace std;

// Função que verifica se um número é triangular
bool isTriangular(int num) {
    // Para um número triangular, num é a soma dos primeiros n números naturais:
    // num = 1 + 2 + 3 + ... + n
    // A fórmula para a soma dos primeiros n números naturais é: n*(n+1)/2

    int n = (int)sqrt(2 * num);  // Encontra o valor de n arredondando a raiz quadrada de 2*num

    // Verifica se o valor de num é igual à soma dos primeiros n números naturais
    return num == n * (n + 1) / 2;
}

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, digite um numero inteiro positivo." << endl;
        return 1;  // Sai do programa com código de erro 1 se a entrada for inválida
    }

    if (isTriangular(numero)) {
        cout << numero << " eh um numero triangular." << endl;
    } else {
        cout << numero << " nao eh um numero triangular." << endl;
    }

    return 0;  // Indica que o programa foi executado com sucesso
}