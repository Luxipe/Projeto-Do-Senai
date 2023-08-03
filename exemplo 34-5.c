#include <stdio.h>//faltando espaçamento mas arrumei

int main(){
   int i, n;
   int soma = 0;
   
   printf("Digite um numero: ");
   scanf("%d", &n);
   
   for(i = 0; i <= n; i++)
   {
        soma += i;
   }
   
   printf("A soma dos numeros de 0 a %d eh %d\n", n, soma);
   
   return 0;//esta errado antes a palavra retrun 0;, arrumei para return 0;
}