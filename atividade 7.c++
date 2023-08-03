#include <iostream>
#include <string>

int main() {
    const int tamanho_vetor = 5;
    std::string constelacoes[tamanho_vetor] = {"Andromeda", "Orion", "Ursa Maior", "Cassiopeia", "Touro"};
    std::string constelacao_desejada;

    // Solicitando ao usuário o nome da constelação a ser procurada
    std::cout << "Digite o nome de uma constelação: ";
    std::getline(std::cin, constelacao_desejada);

    // Verificando se a constelação está  no vetor
    bool encontrou = false;
    for (int i = 0; i < tamanho_vetor; i++) {
        if (constelacoes[i] == constelacao_desejada) {
            encontrou = true;
            break;
        }
    }

    // Exibindo o resultado
    if (encontrou) {
        std::cout << "A constelação " << constelacao_desejada << " está no vetor.\n";
    } else {
        std::cout << "A constelação " << constelacao_desejada << " não está no vetor.\n";
    }

    return 0;
}