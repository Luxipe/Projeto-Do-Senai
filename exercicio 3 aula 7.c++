#include <iostream>
using namespace std;

int main() {
   // Laço for para percorrer os números de 1 a 10
   for (int i = 1; i <= 10; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            // Imprime o número par
            cout << i << endl;
        }
   }

   return 0;
}