#include <iostream>
using namespace std;

int main() {
    int num; // vai usar a Declaração da variável inteira 'num' para armazenar a entrada do usuário.
    cout << "Digite um número: "; // vai Solicitar que o usuário digite um número.
    cin >> num; // vai Lêr o número inserido pelo usuário e o armazena em 'num'.

    if (num >= 0 && num <= 10) // Verifica se 'num' está dentro do intervalo de 0 a 10 
        cout << "O número está no intervalo de 0 a 10." << endl; // Se 'num' estiver no intervalo, vai imprimir esse codigo
    else
        cout << "O número não está no intervalo de 0 a 10." << endl; // Caso contrário, vai imprimir esse codigo

    return 0; // vai ver que a conclusão for bem-sucedida do programa.
}