#include <iostream>
#include <cmath> // Inclui a biblioteca para usar a função sqrt da raiz quadrada
using namespace std;

int main() {
    int num = 7;
    bool is_prime = true; //a Variável para armazenar se o número é primo ou não

    // vai Verificar se o número é maior que 1, pois números menores ou iguais a 1 não são primos
    if (num <= 1) {
        is_prime = false;
    } else {
        int i = 2; //vai  Começar a verificar a divisibilidade a partir de 2

        // vai Verificar a  divisibilidade de 2 até a raiz quadrada de 'num'
        while (i <= sqrt(num)) {
            if (num % i == 0) {
                is_prime = false; // Se 'num' é divisível por 'i', não é primo
                break; // Se encontrar um divisor, não precisa continuar o loop
            }
            i++;
        }
    }

    // vai Verificar se o número é primo e imprime a mensagem solicitada
    if (is_prime) {
        cout << num << " é um número primo." << endl;
    } else {
        cout << num << " não é um número primo." << endl;
    }

    return 0;
}