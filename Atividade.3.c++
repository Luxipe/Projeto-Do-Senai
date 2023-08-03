#include <iostream>
using namespace std;

const int TAMANHO_VETOR = 10;

double calcularMediaIdades(int idades[]) {
    int total_idades = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        total_idades += idades[i];
    }
    double media = static_cast<double>(total_idades) / TAMANHO_VETOR;
    return media;
}

int main() {
    int idades[TAMANHO_VETOR];

    cout << "Digite as idades das jogadoras da seleção brasileira de futebol feminino:" << endl;

    // Preenche o vetor com as idades informadas pelo usuário
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        cout << "Jogadora " << i + 1 << ": ";
        cin >> idades[i];
    }

    // Calcula a média das idades usando a função calcularMediaIdades
    double media_idades = calcularMediaIdades(idades);

    cout << "\nMédia das idades das jogadoras da seleção brasileira de futebol feminino: " << fixed << media_idades << endl;

    return 0;
}