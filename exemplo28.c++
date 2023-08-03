#include <iostream>
#include <cmath>

bool isDivisibleByThree(int number) {
    return number % 3 == 0;
}

bool isPerfectSquare(int number) {
    int squareRoot = sqrt(number);
    return squareRoot * squareRoot == number;
}

int getDigitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

bool hasDigitSumLessThanOrEqualToTen(int number) {
    int sum = getDigitSum(number);
    return sum <= 10;
}

int findMagicNumber(int lowerLimit, int upperLimit) {
    for (int number = lowerLimit; number <= upperLimit; ++number) {
        if (isDivisibleByThree(number) && isPerfectSquare(number) && hasDigitSumLessThanOrEqualToTen(number)) {
            return number;
        }
    }
    return -1; // Retorna -1 se nenhum número mágico for encontrado
}

int main() {
    int lowerLimit, upperLimit;

    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> lowerLimit;

    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> upperLimit;

    int magicNumber = findMagicNumber(lowerLimit, upperLimit);

    if (magicNumber != -1) {
        std::cout << "O menor número mágico dentro do intervalo [" << lowerLimit << ", " << upperLimit << "] é: " << magicNumber << std::endl;
    } else {
        std::cout << "Não foi encontrado nenhum número mágico dentro do intervalo [" << lowerLimit << ", " << upperLimit << "]." << std::endl;
    }

    return 0;
}