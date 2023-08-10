#include <iostream>

int main() {
    char input;

    // Solicita ao jogador que digite uma letra
    std::cout << "Digite uma letra: ";
    std::cin >> input;

    // Verifica se a entrada é uma letra maiúscula (A-Z) ou minúscula (a-z)
    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        // Define os limites da faixa de letras permitidas com base na entrada
        char start, end;

        if (input >= 'a' && input <= 'z') {
            start = 'a';
            end = 'z';
        } else {
            start = 'A';
            end = 'Z';
        }

        // Fornece uma dica com base na faixa de letras permitidas
        std::cout << "Dica: Digite uma letra entre " << start << " e " << end << "." << std::endl;
    } else {
        // Informa ao jogador que a entrada é inválida
        std::cout << "Entrada inválida. Por favor, digite uma letra válida." << std::endl;
    }

    return 0;
}