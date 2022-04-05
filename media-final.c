#include <stdio.h>
#include <stdlib.h>

//Calcular média final

int main()
{
    float asd1, alp1, asd2, alp2, ai, pi, mf;

    printf("Entre com anota da ASD.1: ");
    scanf("%f", &asd1);
    if(asd1 < 0.0 || asd1 > 0.5)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da ALP1: ");
    scanf("%f", &alp1);
    if(alp1 < 0.0 || alp1 > 3.5)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da ASD.2: ");
    scanf("%f", &asd2);
    if(asd2 < 0.0 || asd2 > 0.5)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da ALP2: ");
    scanf("%f", &alp2);
    if(alp2 < 0.0 || alp2 > 3.5)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da AI: ");
    scanf("%f", &ai);
    if(ai < 0.0 || ai > 2.0);
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da PI: ");
    scanf("%f", &pi);
    if(pi < 0.0 || pi > 10)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    printf("Entre com anota da MF: ");
    scanf("%f", &alp1);
    if(mf < 0.0 || mf > 0.5)
    {
        printf("Entrada invalida!\n");
        return 0;
    }
    
}