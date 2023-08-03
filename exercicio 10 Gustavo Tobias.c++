#include <iostream>
#include <cstdlib> // vou incluir a biblioteca cstdlib para gerar números aleatórios

int main() {
    int resultado, lancamentos = 0;

    std::cout << "Simulando lançamento de dado até obter o resultado 6..." << std::endl;

    do {
        resultado = rand() % 6 + 1; // vai Gerar um número aleatório entre 1 e 6 
        lancamentos++; // vai Contar mais um lançamento realizado
        std::cout << "Lançamento " << lancamentos << ": Resultado = " << resultado << std::endl;
    } while (resultado != 6);

    std::cout << "Parabéns! Você obteve o resultado 6 após " << lancamentos << " lançamentos." << std::endl;

    return 0;
}