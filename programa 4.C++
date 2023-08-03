#include <iostream>


int main() {
int numero;
int soma = 0;


std::cout << "digite um número inteiro ";
std::cin >> numero;


//Cálculo da soma dos dígitos
while (numero != 0) {
    int digito = numero % 10;
    soma += digito;
    numero /= 10;
}

//Exibição do Resultado
std::cout << "A soma dos dígitos é: " << soma << std::endl;


return 0;

}