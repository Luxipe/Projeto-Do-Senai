#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 5;
    char vetorCaracteres[tamanhoVetor];
    char letraProcurada;

    // isso vai  Preencher o vetor com letras do alfabeto digitadas pelo usuário
    cout << "Digite " << tamanhoVetor << " letras do alfabeto:\n";
    for (int i = 0; i < tamanhoVetor; i++) {
        cin >> vetorCaracteres[i];
    }

    // vai Solicitar a letra que o usuário deseja verificar
    cout << "Digite a letra que deseja verificar:\n";
    cin >> letraProcurada;

    //Verificando se a letra está no vetor
    bool encontrada = false;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorCaracteres[i] == letraProcurada) {
            encontrada = true;
            break; // se caso encontrar a letra , não vai precisar procurar mais.
        }
    }

    // vou utilizar para Informar o resultado da busca
    if (encontrada) {
        cout << "A letra '" << letraProcurada << "' está no vetor.\n";
    } else {
        cout << "A letra '" << letraProcurada << "' não está no vetor.\n";
    }

    return 0;
}