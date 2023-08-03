#include <iostream>//arrumei a palavra errada, e concertei pra #include <iosteam>

int main() {
   int num;
   std::cout << "Digite um numero: ";//adicionei std::
   std::cin >> num;//adicionei std::
   if (num % 2 == 0)// dei um espaço no if.
        std::cout << num << " eh um numero par" << std::endl;//adicionei 2 std::
   else
        std::cout << num << " eh um numero impar" << std::endl;//adicionei 2 std::
   return 0;//arrumei a palavra errada retrun 0;, para a palavra certa return 0;
}