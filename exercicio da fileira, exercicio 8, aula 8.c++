#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    // Verifica se a idade é maior ou igual a 18
    if (idade >= 18)
        cout << "Você é maior de idade." << endl;
    else
        cout << "Você é menor de idade." << endl;

    return 0;
}