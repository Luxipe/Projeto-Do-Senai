#include <iostream>


int main() {

int idade;


std::cout << "Digite sua idade: ";
std::cin >> idade;


if (idade >= 18) {
    std::cout << "Você é maior de idade. " << std::endl;
} else {
    std::cout << "você é menor de idad." << std::endl;
}


return 0;
}