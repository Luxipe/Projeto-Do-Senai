#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    // Verifica se a letra é uma vogal
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "Dica: A letra digitada e uma vogal." << endl;
    } else {
        cout << "Dica: A letra digitada e uma consoante." << endl;
    }

    return 0;
}