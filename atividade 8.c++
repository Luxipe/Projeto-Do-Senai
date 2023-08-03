#include <iostream>
using namespace std;

const int NUM_PLANETAS = 6;

int main() {
    int velocidades[NUM_PLANETAS];
    int somaVelocidades = 0;

    cout << "Digite as velocidades de rotação dos 6 planetas (em km/h):\n";

    // Preenchendo o vetor com as velocidades de rotação
    for (int i = 0; i < NUM_PLANETAS; i++) {
        cout << "Planeta " << i + 1 << ": ";
        cin >> velocidades[i];
        somaVelocidades += velocidades[i];
    }

    // Calculando a média
    double media = static_cast<double>(somaVelocidades) / NUM_PLANETAS;

    // Exibindo a média
    cout << "A média das velocidades de rotação dos planetas é: " << media << " km/h" << endl;

    return 0;
}