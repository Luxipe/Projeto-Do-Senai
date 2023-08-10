#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    for (char c : str) {
        if (!std::isspace(c)) {
            cleanedStr += std::tolower(c);
        }
    }
    std::string reversedStr = cleanedStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return cleanedStr == reversedStr;
}

int main() {
    std::string input;

    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "É um palíndromo!" << std::endl;
    } else {
        std::cout << "Não é um palíndromo!" << std::endl;
    }

    return 0;
}