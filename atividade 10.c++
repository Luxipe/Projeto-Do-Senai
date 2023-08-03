#include <iostream>
#include <string>

int main() {
    const int numLuas = 7;
    std::string luas[numLuas];

    // Preenchendo o vetor com os nomes das luas
    luas[0] = "Europa";
    luas[1] = "Ganímedes";
    luas[2] = "Calisto";
    luas[3] = "Io";
    luas[4] = "Titã";
    luas[5] = "Tritão";
    luas[6] = "Lua";

    // Exibindo os nomes das luas em ordem inversa
    std::cout << "Nomes das luas em ordem inversa:\n";
    for (int i = numLuas - 1; i >= 0; i--) {
        std::cout << luas[i] << std::endl;
    }

    return 0;
}