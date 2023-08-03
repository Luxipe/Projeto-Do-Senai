#include <iostream>
#include <string>

using namespace std;

const int NUM_PAISES = 7;
const int TAM_SIGLA = 3;

int main() {
    string paises[NUM_PAISES] = {
        "BRA", // Brasil
        "USA", // Estados Unidos
        "SWE", // Suécia
        "CHN", // China
        "GER", // Alemanha
        "CAN", // Canadá
        "FRA"  // França
    };

    string sigla;
    bool encontrado = false;

    cout << "Digite a sigla do país que você deseja verificar: ";
    cin >> sigla;

    for (int i = 0; i < NUM_PAISES; i++) {
        if (paises[i] == sigla) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "A sigla " << sigla << " está presente no vetor." << endl;
    } else {
        cout << "A sigla " << sigla << " não está presente no vetor." << endl;
    }

    return 0;
}