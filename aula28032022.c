#include <stdio.h>
#include <stdlib.h>

int main ()
{

int mes;

    printf("Entre com o numero do mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1: printf("Janeiro\n");
        case 2: printf("Fevereiro\n");    
        case 3: printf("Marco\n");    
        case 4: printf("Abril\n");   
        case 5: printf("Maio\n");   
        case 6: printf("Junho\n");   
        case 7: printf("Julho\n");   
        case 8: printf("Agosto\n");   
        case 9: printf("Setembro\n");   
        case 10: printf("Outubro\n");   
        case 11: printf("Novembro\n");   
        case 12: printf("Dezembro\n");
        default: printf("Mes invalido!\n");
    }

    printf("Tecle <ENTER> para sair...");
    scanf("%c", &sair);

    return 0;
}
