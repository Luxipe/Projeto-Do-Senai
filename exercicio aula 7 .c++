#include <iostream>
using namespace std;

int main() {
   int count = 5;
   while (count >= 0) {
        cout << count << endl;
        count--; // diminuir o valor de count em 1 a cada iteração, para ser usado certo
   }

   return 0;
}