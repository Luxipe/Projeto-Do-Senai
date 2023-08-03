#include <stdio.h>// a escrita está errada e o codigo esta errado por causa da escrita  #inclue<stdio.h>, a maneira correta #include <stdio.h>

int main() {
   int n1, n2, soma;
   printf("Digite dois numeros: ");
   scanf("%d %d", &n1, &n2);
   soma = n1 + n2;
   printf("A soma dos numeros eh %d\n", soma);
   return 0;//a escrita esta errada retunr 0;, a maneira correta return 0;
}