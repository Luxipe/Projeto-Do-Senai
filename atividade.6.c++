#include <iostream>
using namespace std;

int main() {
    const int numPartidas = 5;
    int golsPorPartida[numPartidas];

    // Preenchendo o vetor com o número de gols por partida
    cout << "Digite o número de gols marcados pela Seleção Brasileira Feminina em cada partida:\n";
    for (int i = 0; i < numPartidas; i++) {
        cout << "Partida " << i+1 << ": ";
        cin >> golsPorPartida[i];
    }

    // Calculando o total de gols marcados
    int totalGols = 0;
    for (int i = 0; i < numPartidas; i++) {
        totalGols += golsPorPartida[i];
    }

    // Exibindo o total de gols marcados
    cout << "\nTotal de gols marcados pela Seleção Brasileira Feminina na Copa do Mundo: " << totalGols << endl;

    return 0;
}