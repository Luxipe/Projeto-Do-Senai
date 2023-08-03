#include <iostream>
using namespace std;

int main() {
    string text; // Declaração da variável 'text' para armazenar o texto inserido pelo usuário.
    cout << "Digite um texto: ";
    getline(cin, text); // vai Lêr uma linha completa de texto, incluindo espaços em branco, e a armazena em 'text'.

    if (text != "") // vai Verificar se 'text' não está vazio.
        cout << "O texto não está vazio." << endl; // vai verificar Se 'text' não estiver vazio, vai imprimir esse codigo.
    else
        cout << "O texto está vazio." << endl; // Caso contrário, vai imprimir esse codigo.

    return 0; // vai terminar e indicar se um programa for bem concluido.
}