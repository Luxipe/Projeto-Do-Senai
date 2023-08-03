#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;

    // Solicita ao usuário fornecer uma string
    std::cout << "Digite uma palavra: ";
    std::cin >> inputString;

    // Inverte a ordem dos caracteres da string
    std::reverse(inputString.begin(), inputString.end());

    // Exibe a palavra invertida
    std::cout << "A palavra invertida é: " << inputString << std::endl;

    return 0;
}