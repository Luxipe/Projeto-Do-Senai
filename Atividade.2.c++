#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numPaises = 8;
    string paises[numPaises] = {"Brasil", "Estados Unidos", "Alemanha", "Noruega", "Suécia", "Japão", "Inglaterra", "França"};
    int titulos[numPaises];

    // ler o tanto  de títulos para cada país
    for (int i = 0; i < numPaises; i++) {
        cout << "Digite a quantidade de títulos de " << paises[i] << ": ";
        cin >> titulos[i];
    }

    // mostrar os países que nunca venceram o torneio (com 0 títulos)
    cout << "\nPaíses que nunca venceram a Copa do Mundo Feminina:\n";
    bool encontrouPaisesSemTitulo = false;
    for (int i = 0; i < numPaises; i++) {
        if (titulos[i] == 0) {
            cout << paises[i] << endl;
            encontrouPaisesSemTitulo = true;
        }
    }

    if (!encontrouPaisesSemTitulo) {
        cout << "Todos os países têm pelo menos um título na Copa do Mundo Feminina.\n";
    }

    return 0;
}