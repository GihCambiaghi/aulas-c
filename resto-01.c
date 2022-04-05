#include <stdio.h>

int main()  // divisão de numero real não tem resto, apenas de INTEIROS
{
    int dividendo = 7, divisor = 2,
        quociente, resto;

// D = d*q+r // r = D - d * (D/d)
//                  7 - 2 * 3  

    quociente = dividendo/divisor;
    resto = dividendo - divisor * (dividendo/divisor); // se não tiver o operador "resto"
    resto = dividendo % divisor;

// O número que por após o ponto, arredonda o valor para casa mensionada

    printf("q = %d\nresto, %d\n", quociente, resto);

    return 0;
}

