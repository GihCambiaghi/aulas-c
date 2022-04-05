#include <stdio.h>

int main ()
{
    int idade = 20;

    printf("Entre com a sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 18) printf("Jovem\n");
    else if (idade < 65) printf("Adulto\n");
    else printf("Idoso\n");

    return 0;
}
