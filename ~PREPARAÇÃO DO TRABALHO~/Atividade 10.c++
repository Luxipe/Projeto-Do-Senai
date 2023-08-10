#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Função para escolher uma palavra aleatória do vetor de palavras
string escolherPalavraAleatoria(const vector<string>& palavras) {
    int indiceAleatorio = rand() % palavras.size();
    return palavras[indiceAleatorio];
}

// Função para exibir o estado atual da palavra a ser adivinhada com as letras adivinhadas
void exibirPalavraAdivinhada(const string& palavra, const vector<bool>& letrasAdivinhadas) {
    for (size_t i = 0; i < palavra.length(); ++i) {
        if (letrasAdivinhadas[i]) {
            cout << palavra[i];
        } else {
            cout << "_";
        }
    }
    cout << endl;
}

int main() {
    // Inicialização
    srand(static_cast<unsigned int>(time(nullptr)));
    vector<string> palavras = {"programacao", "computador", "jogos", "algoritmo", "linguagem"};
    string palavra = escolherPalavraAleatoria(palavras);
    vector<bool> letrasAdivinhadas(palavra.length(), false);
    int tentativasRestantes = 6;
    vector<char> letrasErradas;

    cout << "Bem-vindo ao Super Forca!" << endl;

    // Loop principal do jogo
    while (tentativasRestantes > 0) {
        cout << "Palavra: ";
        exibirPalavraAdivinhada(palavra, letrasAdivinhadas);

        cout << "Letras erradas:";
        for (char letra : letrasErradas) {
            cout << " " << letra;
        }
        cout << endl;

        cout << "Tentativas restantes: " << tentativasRestantes << endl;

        char chute;
        cout << "Digite uma letra: ";
        cin >> chute;

        // Verificar se a letra já foi adivinhada
        bool letraJaAdivinhada = false;
        for (size_t i = 0; i < palavra.length(); ++i) {
            if (palavra[i] == chute && !letrasAdivinhadas[i]) {
                letrasAdivinhadas[i] = true;
                letraJaAdivinhada = true;
            }
        }

        if (!letraJaAdivinhada) {
            letrasErradas.push_back(chute);
            --tentativasRestantes;
        }

        // Verificar se o jogador ganhou
        bool jogadorGanhou = true;
        for (bool letraAdivinhada : letrasAdivinhadas) {
            if (!letraAdivinhada) {
                jogadorGanhou = false;
                break;
            }
        }

        if (jogadorGanhou) {
            cout << "Parabéns! Você adivinhou a palavra: " << palavra << endl;
            break;
        }
    }

    if (tentativasRestantes == 0) {
        cout << "Você perdeu! A palavra era: " << palavra << endl;
    }

    return 0;
}
