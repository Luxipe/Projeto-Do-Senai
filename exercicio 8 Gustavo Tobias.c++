#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// vou utilizar uma Função para verificar se um número é palíndromo
bool eh_palindromo(int numero) {
    // vai  Converter o número inteiro para uma string
    string strNumero = to_string(numero);

    // vou Criar uma cópia da string e inverte a cópia
    string strInvertida = strNumero;
    reverse(strInvertida.begin(), strInvertida.end());

    // vai Verificar se a string original é igual à sua versão invertida
    return strNumero == strInvertida;
}

int main() {
    cout << "Verificador de Palíndromo" << endl;

    int numero;

    // vou Solicitar ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // vai Verificar se o número é um palíndromo usando a função eh_palindromo
    if (eh_palindromo(numero)) {
        cout << "O número " << numero << " é um palíndromo." << endl;
    } else {
        cout << "O número " << numero << " não é um palíndromo." << endl;
    }

    return 0;
}