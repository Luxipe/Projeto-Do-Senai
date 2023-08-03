#include <iostream>
using namespace std;

int main() {
   string text = "Loop For";
   for (int i = 0; i < text.length(); i++) {
        cout << text[i] << endl; // vai Imprimir o caractere atual da string
   }

   return 0;
}