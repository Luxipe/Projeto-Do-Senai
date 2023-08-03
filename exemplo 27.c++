#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    std::string inputString;

    // Solicita ao usuário fornecer uma string
    std::cout << "Digite uma string: ";
    std::getline(std::cin, inputString);

    // Remove os espaços em branco da string
    inputString.erase(std::remove_if(inputString.begin(), inputString.end(), isspace), inputString.end());

    // Converte a string para minúsculas
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);

    // Verifica se a string é um palíndromo
    if (isPalindrome(inputString)) {
        std::cout << "A string é um palíndromo." << std::endl;
    } else {
        std::cout << "A string não é um palíndromo." << std::endl;
    }

    return 0;
}