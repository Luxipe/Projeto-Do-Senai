#include  <iostream>

int main() {

    //declaração e inicialização das variáveis
    int numero1 = 5;

    int numero2 = 8;

    int numero3 = 12;

    float media;

    
    // Cálculo da média
    media = (numero1 + numero2 + numero3) / 3.0;


    //Exibição do resultado

    std::cout << "A média dos números é: " << media << std::endl;


    return 0;
}