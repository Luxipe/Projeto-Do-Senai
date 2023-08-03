#include <stdio.h>//esta faltando espaçamento pra ficar certo, coloquei espaçamento.

int main() {
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);
   if (num % 2 == 0)//estava faltando espaçamento no if, adicionei espaçamento no if.
      printf("%d eh um numero par\n", num);
   else
      printf("%d eh um numero impar\n", num);
   return 0;// a palavra antes estava errado retrun 0;, adicionei return 0; pra  palavra ficar certo.
}
