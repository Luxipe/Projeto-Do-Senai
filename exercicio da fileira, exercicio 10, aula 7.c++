#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    // Verifica se o número é múltiplo de 5 e 7
    if (num % 5 == 0 && num % 7 == 0)
        cout << "O número é múltiplo de 5 e 7." << endl;
    else
        cout << "O número não é múltiplo de 5 e 7." << endl;

    return 0;
}