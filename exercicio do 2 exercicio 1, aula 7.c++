#include <iostream>
using namespace std;

int main() {
    int num; // vai usar a Declaração da variável inteira 'num' para armazenar a entrada do usuário.
    cout << "Digite um número: "; // vai Solicitar que o usuário digite um número.
    cin >> num; // vai Lêr o número inserido pelo usuário e o armazena em 'num'.

    if (num > 0) // vai Verificar se 'num' é maior que zero.
        cout << "O número é positivo." << endl; // Se 'num' for maior que zero, imprime esta mensagem.
    else
        cout << "O número é negativo ou zero." << endl; // Caso contrário, imprime esta mensagem.

    return 0; // vai Indicar a conclusão bem-sucedida do programa.
}