#include <iostream>
#include <string>
using namespace std;

int main() {
    const int tamanhoVetor = 8;
    string vetorSelecoes[tamanhoVetor];

    // Preenchendo o vetor com os nomes das seleções
    cout << "Digite os nomes das 8 seleções que participaram da Copa do Mundo Feminina:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Seleção " << i + 1 << ": ";
        getline(cin, vetorSelecoes[i]);
    }

    // Invertendo a ordem das seleções no vetor
    int inicio = 0;
    int fim = tamanhoVetor - 1;
    while (inicio < fim) {
        string temp = vetorSelecoes[inicio];
        vetorSelecoes[inicio] = vetorSelecoes[fim];
        vetorSelecoes[fim] = temp;
        inicio++;
        fim--;
    }

    // Exibindo o vetor resultante
    cout << "Vetor com as seleções em ordem inversa:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetorSelecoes[i] << endl;
    }

    return 0;
}