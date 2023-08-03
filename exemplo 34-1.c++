#include<iostream>//Corrigi a palavra inclue para include.

int main(){
   int n;
   std::cout << "Digite um numero: ";//adicionei std::
   std::cin >> n;//adicionei std::
   for(int i=1; i<=n; i++)
   {
      std::cout << i << std::endl;//adicionei 2 std::
   }
   return 0;
}