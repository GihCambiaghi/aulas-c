/*
    Programa        : Caixa Eletrônico
    Versão          : 1
    Desenvolvedor   : Giovanna Cambiaghi
    Data da criação : 27/03/2022
    Descrição       : Determina a quantidade mínima de cada cédula fornecida por um caixa eletrônico, mediante o valor do saque.
    OBS.            : Aceita somente valores inteiros para o valor do saque.
 */

#include <stdio.h>

int main()
{
    int saque;
    int notas200, notas100, notas50, notas20, notas10, notas5, notas2;

    printf("Entre com o valor do saque: ");
    scanf("%i", &saque);

    //Validação da entrada
    if (saque < 2 || saque == 3)
    {
        printf("Valor invalido, tente novamente.\n");
        printf("Insira um valor acima de R$0,00.");

        return 1;
    }

    notas2 = 0;
    if (saque % 5 == 1 || saque % 5 == 3)
    {
        saque -= 4; //saque = saque - 4;
        notas2 = 2;
    }

    notas200 = saque / 200;
    saque = saque % 200;
    notas100 = saque / 100;
    saque = saque % 100;
    notas50 = saque / 50;
    saque = saque % 50;
    notas20 = saque / 20;
    saque = saque % 20;
    notas10 = saque / 10;
    saque = saque % 10;
    notas5 = saque / 5;
    saque = saque % 5;
    notas2 = notas2 + saque / 2;

    printf("Notas de 200,00 = %i\n", notas200);
    printf("Notas de 100,00 = %i\n", notas100);
    printf("Notas de 50,00 = %i\n", notas50);
    printf("Notas de 20,00 = %i\n", notas20);
    printf("Notas de 10,00 = %i\n", notas10);
    printf("Notas de 5,00 = %i\n", notas5);
    printf("Notas de 2,00 = %i\n", notas2); 

    return 0;

}