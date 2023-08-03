#include <iostream>

int main() {
    int num, countPares = 0, countImpares = 0;

    std::cout << "Digite uma sequência de números inteiros (digite 0 para encerrar): ";

    while (true) {
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            countPares++;
        } else {
            countImpares++;
        }
    }

    std::cout << "Quantidade de números pares digitados: " << countPares << std::endl;
    std::cout << "Quantidade de números ímpares digitados: " << countImpares << std::endl;

    return 0;
}