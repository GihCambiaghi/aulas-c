#include <stdio.h>

int main ()
{
    float media, freq;

    printf("Entre com a sua media e a frequencia: ");
    scanf("%f%f", &media, &freq);
    
    if (media >= 6.0 && freq >= 0.75)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
    return 0;
}
