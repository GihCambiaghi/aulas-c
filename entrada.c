#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, retorno;

    printf("Entre com dois numeros inteiros: ");
    retorno = scanf("%d%d", &num1, &num2);
    printf("%d\n", retorno);
    
    return 0;
}