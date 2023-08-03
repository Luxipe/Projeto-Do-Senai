#include <iostream>
using namespace std;

// Definindo a estrutura Data
struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    const int tamanhoVetor = 6;
    Data vetorDatas[tamanhoVetor];

    // Preenchendo o vetor com as datas dos jogos
    cout << "Digite as 6 datas dos jogos da fase da Copa do Mundo Feminina:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Dia: ";
        cin >> vetorDatas[i].dia;

        cout << "Mês: ";
        cin >> vetorDatas[i].mes;

        cout << "Ano: ";
        cin >> vetorDatas[i].ano;
    }

    // Invertendo a ordem das datas no vetor
    int inicio = 0;
    int fim = tamanhoVetor - 1;
    while (inicio < fim) {
        Data temp = vetorDatas[inicio];
        vetorDatas[inicio] = vetorDatas[fim];
        vetorDatas[fim] = temp;
        inicio++;
        fim--;
    }

    // Exibindo o vetor resultante
    cout << "Vetor com as datas invertidas:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetorDatas[i].dia << "/" << vetorDatas[i].mes << "/" << vetorDatas[i].ano << endl;
    }

    return 0;
}