#include <iostream>
#include <cmath> // Incluir a biblioteca cmath para usar a função sqrt
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    bool is_prime = true;

    // vai  Verificar se o número é menor ou igual a 1 (não é primo)
    if (num <= 1)
        is_prime = false;
    else {
        // vai Verificar se o número é divisível por algum inteiro de 2 até a raiz quadrada do número
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
        cout << num << " é um número primo." << endl;
    else
        cout << num << " não é um número primo." << endl;

    return 0;
}