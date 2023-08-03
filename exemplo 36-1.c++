#include <iostream>

int main() {
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    int square = n * n;
    std::cout << "O quadrado do número é: " << square << std::endl;
    return 0;
}