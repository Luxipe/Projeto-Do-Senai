#include <iostream>

int main() {
    const int tamanho_vetor = 7;
    float massa_sol = 1.0; // Massa do Sol em massa solar
    float aglomerado_estelar[tamanho_vetor];
    int estrelas_maior_que_3x_sol = 0;

    // Preenchendo o vetor com as massas das estrelas
    std::cout << "Digite as massas das 7 estrelas (em massa solar):\n";
    for (int i = 0; i < tamanho_vetor; i++) {
        std::cout << "Estrela " << i + 1 << ": ";
        std::cin >> aglomerado_estelar[i];
    }

    // Verificando quantas estrelas têm massa superior a 3 vezes a massa do Sol
    for (int i = 0; i < tamanho_vetor; i++) {
        if (aglomerado_estelar[i] > 3.0 * massa_sol) {
            estrelas_maior_que_3x_sol++;
        }
    }

    // Exibindo o resultado
    std::cout << "\nQuantidade de estrelas com massa superior a 3 vezes a massa do Sol: " << estrelas_maior_que_3x_sol << "\n";

    return 0;
}