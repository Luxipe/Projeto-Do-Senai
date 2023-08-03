#include <iostream>
#include <string>

int main() {
    std::string resposta;

    std::cout << "Digite 'sim' para reproduzir a oração: ";
    std::cin >> resposta;

    if (resposta == "sim") {
        std::cout << "Compilador nosso, que estás em execução,\n";
        std::cout << "Santificado seja o teu código-fonte.\n";
        std::cout << "Venha a nós o teu debug,\n";
        std::cout << "Seja feita a tua correção,\n";
        std::cout << "Assim no sistema como na memória.\n";
        std::cout << "O loop nosso de cada dia nos dai hoje,\n";
        std::cout << "Perdoai os nossos bugs,\n";
        std::cout << "Assim como nós perdoamos os bugs alheios.\n";
        std::cout << "Não nos deixeis cair em deadlocks,\n";
        std::cout << "E livrai-nos das variáveis não inicializadas.\n";
        std::cout << "Dá-nos paciência para a compilação lenta,\n";
        std::cout << "E sabedoria para encontrar os erros de lógica.\n";
        std::cout << "Protege-nos dos vazamentos de memória,\n";
        std::cout << "E guia-nos pelo caminho da otimização correta.\n";
        std::cout << "Que as bibliotecas sejam sempre atualizadas,\n";
        std::cout << "E que a documentação esteja sempre completa.\n";
        std::cout << "Dá-nos o domínio da linguagem C/C++,\n";
        std::cout << "E inspira-nos com algoritmos eficientes.\n";
        std::cout << "A main!\n";
    } else {
        std::cout << "Oração não reproduzida.\n";
    }

    return 0;
}