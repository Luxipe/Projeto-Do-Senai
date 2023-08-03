#include <iostream>// tirei a palavra errada inclde, para a palavra correta #include <iostream>

int main() {
   int n1, n2, soma;
   std::cout << "Digite dois numeros: ";//adicionei std::
   std::cin >> n1 >> n2;//adicionei std::
   soma = n1 + n2;
   std::cout << "A soma dos numeros eh " << soma << std::endl;//adicionei 2 std::
   return 0;
}