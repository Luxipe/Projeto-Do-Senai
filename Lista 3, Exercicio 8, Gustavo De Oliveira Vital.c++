#include <iostream>

int main() {
    int precoMascara, dinheiroBatman;

    std::cout << "Digite o preço de uma máscara: ";
    std::cin >> precoMascara;

    std::cout << "Digite a quantidade de dinheiro que o Batman possui: ";
    std::cin >> dinheiroBatman;

    if (dinheiroBatman >= precoMascara) {
        int dinheiroRestante = dinheiroBatman - precoMascara;
        // Exibe a mensagem indicando que o Batman pode comprar a máscara de reserva e o dinheiro restante
        std::cout << "Compra realizada! Dinheiro restante: " << dinheiroRestante << std::endl;
    } else {
        // Exibe a mensagem indicando que o Batman não tem dinheiro suficiente para comprar a máscara de reserva
        std::cout << "Batman não tem dinheiro suficiente para comprar a máscara de reserva." << std::endl;
    }

    return 0;
}