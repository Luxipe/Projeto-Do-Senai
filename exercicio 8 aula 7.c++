#include <iostream>
using namespace std;

int main() {
   int num = 5;
   int factorial = 1; // o Valor inicial do fatorial deve ser 1
   int i = 1; // vai Começar a partir de 1 para calcular o fatorial corretamente

   do {
        factorial *= i;
        i++;
   } while (i <= num); // O loop vai continuar enquanto 'i' for menor ou igual a 'num'

   cout << "O fatorial de " << num << " e " << factorial << endl;

   return 0;
}