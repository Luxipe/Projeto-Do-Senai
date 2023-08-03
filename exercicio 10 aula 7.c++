#include <iostream>
using namespace std;

int main() {
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    bool eh_palindromo = true;
    int i = 0;

    // vai ser um Loop para percorrer os caracteres da palavra e verificar se é um palíndromo.
    while (i < palavra.length()) {
        // vai Comparar o caractere na posição i com o caractere na posição correspondente ao final da palavra.
        // Se eles forem diferentes, a palavra não é um palíndromo.
        if (palavra[i] != palavra[palavra.length() - i - 1]) {
            eh_palindromo = false;
            break; // Se encontrarmos um caractere diferente, podemos parar o loop.
        }
        i++;
    }

    // Verifica a variável 'eh_palindromo' para determinar se a palavra é um palíndromo ou não.
    if (eh_palindromo) {
        cout << palavra << " é um palíndromo." << endl;
    } else {
        cout << palavra << " não é um palíndromo." << endl;
    }

    return 0;
}