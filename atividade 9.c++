#include <iostream>
using namespace std;

const int NUM_ESTRELAS = 10;

int main() {
    float luminosidadeEstrelas[NUM_ESTRELAS];
    float luminosidadeSol = 1.0; // Luminosidade do Sol (considerando 1 unidade)

    cout << "Digite a luminosidade de cada uma das 10 estrelas (em unidades solares):\n";

    // Preenchendo o vetor com a luminosidade das estrelas
    for (int i = 0; i < NUM_ESTRELAS; i++) {
        cout << "Estrela " << i + 1 << ": ";
        cin >> luminosidadeEstrelas[i];
    }

    // Verificando quantas estrelas têm luminosidade superior a 100 vezes a luminosidade do Sol
    int estrelasSuperior100 = 0;
    for (int i = 0; i < NUM_ESTRELAS; i++) {
        if (luminosidadeEstrelas[i] > 100 * luminosidadeSol) {
            estrelasSuperior100++;
        }
    }

    // Exibindo o resultado
    cout << "Quantidade de estrelas com luminosidade superior a 100 vezes a luminosidade do Sol: "
         << estrelasSuperior100 << endl;

    return 0;
}