#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios

    int numLetras;
    int placarAcertos = 0;
    int placarErros = 0;

    cout << "Bem-vindo ao jogo de letras!" << endl;

    while (true) {
        cout << "Digite a quantidade de letras a serem sorteadas (ou 0 para sair): ";
        cin >> numLetras;

        if (numLetras == 0) {
            cout << "Fim do jogo. Pontuação final:" << endl;
            cout << "Acertos: " << placarAcertos << endl;
            cout << "Erros: " << placarErros << endl;
            break;
        }

        // Gera letras aleatórias e verifica as respostas do jogador
        string letrasSorteadas = "";
        for (int i = 0; i < numLetras; i++) {
            char letraSorteada = 'a' + rand() % 26; // Gera uma letra minúscula aleatória
            letrasSorteadas += letraSorteada;

            cout << "Letra " << i + 1 << ": ";
            char resposta;
            cin >> resposta;

            // Limpar o buffer de entrada
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (resposta == letraSorteada) {
                cout << "Acertou!" << endl;
                placarAcertos++;
            } else {
                cout << "Errou. A letra era: " << letraSorteada << endl;
                placarErros++;
            }
        }

        cout << "Letras sorteadas: " << letrasSorteadas << endl;
    }

    return 0;
}