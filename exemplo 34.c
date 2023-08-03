#include <stdio.h> // oque esta errado e o funcio.h,a maneira certa é #include <stdio.h> 

int main() {
    int num;
    printf("Digite um numero: ");//"Digite um numero:"); esta errado. precisa de um espaço pra dar certo, Digite um numero:" );
    scanf("%d", &num);
    int i;//coloquei o int i; em cima pra funcionar o codigo
    for (i = 1; i <= num; i++) {//int dentro esta errado, apaguei o int de dentro, coloquei normal sem o int.
        //apaguei o {, em cima do printf("%d\n",i);
        printf("%d\n", i);
    }

    return 0;//apaguei a escrita errada retorn 0;, pra colocar a certa return 0;
}