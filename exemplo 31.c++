#include <iostream>
#include <string>

int main () {
    std::string nome; // Declaração de uma string

    nome = "John"; // Atribuição de valor a uma string

    std::string sobrenome = "Doe"; // Declaração e inicialização de uma string

    std::string nomeCompleto = nome + " " + sobrenome; //concatenação de strings
    
    std::cout << "Nome Completo: " << nomeCompleto << std::endl; // Exibição de uma string

    return 0;
}