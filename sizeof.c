#include <stdio.h>

int main ()
{
    char ch;
    
    printf("Tamanho de um char = %d byte(s)\n", sizeof (char));
    printf("Tamanho de um int = %d byte(s)\n", sizeof (int));
    printf("Tamanho de um long = %d byte(s)\n", sizeof (long));
    printf("Tamanho de um float = %d byte(s)\n", sizeof (float));
    printf("Tamanho de um double = %d byte(s)\n", sizeof (double));


    printf("Tamanho de um double = %d bits\n", sizeof (double) * 8);

    return 0;
}
