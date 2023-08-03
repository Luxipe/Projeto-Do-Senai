#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // vai Gerar uma "semente" para a função de números aleatórios
    srand(static_cast<unsigned int>(time(0)));

    // vai  Gerar um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Tente um numero maior!" << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Tente um numero menor!" << endl;
        } else {
            cout << "Parabens! Voce acertou o numero em " << tentativas << " tentativas!" << endl;
            break; //vai  Sair do loop caso o palpite seja correto
        }

    } while (true);

    return 0;
}