#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    std::vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    if (prime[n]) {
        std::cout << n << " é um número primo." << std::endl;
    } else {
        std::cout << n << " não é um número primo." << std::endl;
    }
}

int main() {
    int num;

    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    if (num <= 1) {
        std::cout << num << " não é um número primo." << std::endl;
    } else {
        sieveOfEratosthenes(num);
    }

    return 0;
}