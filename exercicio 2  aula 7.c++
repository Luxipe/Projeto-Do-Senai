#include <iostream>
using namespace std;

int main() {
   string password;

   do {
        cout << "Digite a senha: ";
        cin >> password;
   } while (password != "secreto"); // vai continuar o loop enquanto a senha for diferente de "secreto"

   cout << "Senha correta!" << endl;
   return 0;
}