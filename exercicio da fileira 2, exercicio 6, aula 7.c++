#include <iostream>
#include <cctype> // Incluir a biblioteca cctype para usar a função tolower
using namespace std;

int main() {
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    // vou Converter a letra para minúscula antes da verificação para garantir que seja considerada corretamente
    letra = tolower(letra);

    // vai Verificar se a letra é uma vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        cout << "A letra é uma vogal." << endl;
    else
        cout << "A letra é uma consoante." << endl;

    return 0;
}