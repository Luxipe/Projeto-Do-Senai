#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

double divisao(int a, int b) {
    return (double) a / b;
}

int main() {
    int num1;
    printf("Digite um número: ");
    scanf("%d", &num1);

    int num2;
    printf("Digite outro número: ");
    scanf("%d", &num2);

    int result1 = soma(num1, num2);
    int result2 = subtracao(num1, num2);
    int result3 = multiplicacao(num1, num2);
    double result4 = divisao(num1, num2);

    printf("Soma: %d\n", result1);
    printf("Subtração: %d\n", result2);
    printf("Multiplicação: %d\n", result3);
    printf("Divisão: %.2lf\n", result4);

    return 0;
}