#include <iostream>
using namespace std;

int main() {
    int num; // vai usar a Declaração da variável inteira 'num' para armazenar a entrada do usuário.
    cout << "Digite um número: "; // vai  Solicitar que o usuário digite um número.
    cin >> num; // vai Lêr o número inserido pelo usuário e o armazena em 'num'.

    if (num % 2 == 0) // Verifica se 'num' é divisível por 2 (ou seja, se é par).
        cout << "O número é par." << endl; // Se 'num' for par, vai imprimir esse codigo
        cout << "O número é ímpar." << endl; // Caso contrário, vai imprimir esse codigo

    return 0; // vai Indicar a conclusão bem-sucedida do programa.
}