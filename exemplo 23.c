#include <stdio.h>

int main() {
   char nome[10];
   printf("Digite seu nome: ");
   if (scanf_s("%9s", nome, sizeof(nome)) == 1) {
       printf("Olá, %s!\n", nome);
   }
   return 0;
}