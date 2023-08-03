#include <stdio.h>

int main() {
    int start_value = 10; // Valor inicial
    int end_value = 20; // Valor final
    int sum = 0; // Variável para armazenar a soma dos números

    /*Loop para somar os números de start_value até end_value*/
    for (int i = start_value; i <= end_value; i++) {
        sum += i;    
    }
    printf("A soma dos números de %d até %d é: %d\n", start_value, end_value, sum);
    /*Este loop calcula a soma dos números inteiros no intervalo de start_value até end_value, inclusivamente.
    A variável 'sum' é inicializada com zero e, em cada iteração, o valor de 'i' é adicionado a 'sum'.
    No final do loop, o valor de 'sum' conterá a soma total.*/
    return 0;
}