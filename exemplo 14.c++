#include <iostream>

int main() {
    int opcao;

    std::cout << "Digite uma opção (1-4): ";
    std::cin >> opcao;

    switch (opcao) {
        case 1:
        std::cout << "Opcao 1 selecionada." << std::endl;
        break;
        case 2:
        std::cout << "Opcao 2 selecionada." << std::endl;
        break;
        case 3:
        std::cout << "Opcao 3 selecionada." << std::endl;
        break;        
        
        case 4:      
        std::cout << "Sou um programador jr.";   
        break;

        default:
        std::cout << "Opcao invalida." << std::endl;
    }

  
    return 0;


}