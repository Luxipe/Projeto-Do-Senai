#include <iostream>//mudei a palavra errada incide, para #include <iostream> que esta certo

int main() {
   int i, n;
   int soma = 0;
   std::cout << "Digite um numero: ";//adicionei std::
   std::cin >> n;//adicionei std::
   for (i = 0; i <= n; i++) {//dei um espaço
    //tirei o {
        soma += i;
   }
   std::cout << "A soma dos numeros de 0 a " << n << " eh " << soma << std::endl;//adicionei 2 std::
   return 0;// a palavra antes estava errado retrun 0, arrumei para return 0;
}